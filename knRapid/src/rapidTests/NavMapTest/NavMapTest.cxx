#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "NavMapSample.h"
#include "NavMapSampleSupport.h"
#include "NavMapConfig.h"
#include "NavMapConfigSupport.h"

#include "ndds/ndds_cpp.h"
#include "ndds/ndds_namespace_cpp.h"

#ifdef _WIN32
#  pragma warning( disable:4996 )
#endif

static const char* agent = "Centaur2";
static int         heightSubsample = 2;
static int         normalSubsample = 1;

static const float cellSize = 0.25f;
static const int   numCells = 32;
static const int   xTiles = 8;
static const int   yTiles = 8;

static const int   GOOD_IDX  = 0;
static const int   CERT_IDX  = 1;
static const int   NORM_IDX  = 2;
static const int   ROUGH_IDX = 3;

static long long   faketime = 1334683349000LL;

using namespace DDS;

/**
 * populate header
 */
void setHeader(rapid::Header& header, int count = 0)
{
    strcpy(header.srcName, "this");
    strcpy(header.assetName, agent);
//  struct timeval tp;
//  gettimeofday(&tp, NULL);
//  header.timeStamp  = ((long long)tp.tv_sec*1000000L)+tp.tv_usec;
    header.timeStamp  = faketime + count * 12345;
    header.statusCode = 0;
    header.serial     = 0;
}

/**
 * create NavMapConfig
 */
void setNavMapConfig(rapid::ext::NavMapConfig& config)
{
    setHeader(config.hdr);
    strcpy(config.frameName, "RAPID_SITE_FRAME");

    config.offset[0]   = config.offset[1]   = 0;
    config.cellSize[0] = config.cellSize[1] = cellSize;
    config.numCells[0] = config.numCells[1] = numCells;

    config.shortLayerNames.length(1);
    strcpy(config.shortLayerNames[0], rapid::ext::NAVMAP_HEIGHT);
    config.octetLayerNames.length(4);
    strcpy(config.octetLayerNames[GOOD_IDX], rapid::ext::NAVMAP_GOODNESS);
    strcpy(config.octetLayerNames[CERT_IDX], rapid::ext::NAVMAP_CERTAINTY);
    strcpy(config.octetLayerNames[NORM_IDX], rapid::ext::NAVMAP_NORMALS);
    strcpy(config.octetLayerNames[ROUGH_IDX], rapid::ext::NAVMAP_ROUGHNESS);
}

/**
 * fill the NavMapSample with some values
 */
void updateNavMapSample(rapid::ext::NavMapSample& sample, int count, int tileX, int tileY)
{
    setHeader(sample.hdr, count);
    sample.shortLayers.length(1);
    sample.octetLayers.length(4);

    sample.tileId[0] = tileX;
    sample.tileId[1] = tileY;

    sample.location.xyz[0] = tileY*cellSize*numCells;
    sample.location.xyz[1] = tileX*cellSize*numCells;
    sample.location.xyz[2] = 0;
    float* r = sample.location.rot;
    r[0] = 1; r[1] = 0; r[2] = 0;
    r[3] = 0; r[4] = 1; r[5] = 0;
    r[6] = 0; r[7] = 0; r[8] = 1;

    double addx = sample.location.xyz[0] + count;
    double addy = sample.location.xyz[1] + count*1.7;

    short*         heightValues = new short[numCells*numCells];
    unsigned char* normalValues = new unsigned char[2*numCells*numCells];

    const int height = 200;
    const float hs = 0.01f;
    sample.shortLayers[0].offset  = 0;
    sample.shortLayers[0].scale   = hs;
    sample.shortLayers[0].density = heightSubsample;
    int hgtCells = numCells/heightSubsample;
    sample.shortLayers[0].data.length(hgtCells*hgtCells); 
    for (int y = 0; y < numCells; y++) {
        int yi = y*numCells;
        for (int x = 0; x < numCells; x++) {
            int idx = yi+x;
			double xd = x*cellSize;
			double yd = y*cellSize;
            short h = 2000 + (short)( height*sin((addx+xd)*0.23) + height*sin((addy+yd)*0.31));
            if(x < 8 && y < 2) {
                heightValues[idx] = 2000;
            }
            else {
                heightValues[idx] = 0 + (h > 0) ? h : h/3;
            }
        }
    }
    sample.octetLayers[GOOD_IDX].offset  = 0;
    sample.octetLayers[GOOD_IDX].scale   = hs;
    sample.octetLayers[GOOD_IDX].density = 1;
    sample.octetLayers[GOOD_IDX].data.length(numCells*numCells);
    sample.octetLayers[CERT_IDX].offset  = 0;
    sample.octetLayers[CERT_IDX].scale   = hs;
    sample.octetLayers[CERT_IDX].density = 1;
    sample.octetLayers[CERT_IDX].data.length(numCells*numCells);
    sample.octetLayers[ROUGH_IDX].offset  = 0;
    sample.octetLayers[ROUGH_IDX].scale   = hs;
    sample.octetLayers[ROUGH_IDX].density = 1;
    sample.octetLayers[ROUGH_IDX].data.length(numCells*numCells);

    int norCells = numCells/normalSubsample;
    sample.octetLayers[NORM_IDX].offset  = 0;
    sample.octetLayers[NORM_IDX].scale   = hs;
    sample.octetLayers[NORM_IDX].density = normalSubsample;
    sample.octetLayers[NORM_IDX].data.length(2*norCells*norCells);
    short* s = heightValues;
    for (int y = 0; y < numCells; y++) {
        int yi = y*numCells;
        for (int x = 0; x < numCells; x++) {
            int idx0 = yi+x;
            int idxN = 2*idx0;
            if(x < 1 || y < 1) {
                normalValues[idxN+0] = 0;
                normalValues[idxN+1] = 0;
                sample.octetLayers[GOOD_IDX].data[idx0] = 100;
                sample.octetLayers[ROUGH_IDX].data[idx0] = 100;
			}
            else {
                // calcuate normal
                int idxX = y*numCells+(x-1);
                int idxY = (y-1)*numCells+x;
                float Ax = cellSize;
                float Ay = 0;
                float Az = s[idx0]*hs - s[idxX]*hs;
                float Bx = 0;
                float By = cellSize;
                float Bz = s[idx0]*hs - s[idxY]*hs;
                float x = Ay * Bz - By * Az;
                float y = Az * Bx - Bz * Ax;
                float z = Ax * By - Bx * Ay;
                float nmlz = 1.0f/sqrt(x*x + y*y + z*z);
                normalValues[idxN+0] = (DDS_Octet)(x*nmlz/hs);
                normalValues[idxN+1] = (DDS_Octet)(y*nmlz/hs);
                // goodness 
                int i = idx0;
                float foo = z*nmlz;
                float bar = 1-foo*foo*foo*foo;
                sample.octetLayers[GOOD_IDX].data[idx0] = (DDS_Octet)(100-bar*100); // goodness
                sample.octetLayers[ROUGH_IDX].data[idx0] = (DDS_Octet)(bar*100); // roughness
            }
        }
    }
    // quickie "clean up" of edges normals
    for (int y = 0; y < numCells; y++) {
        int yi  = y*numCells;
        int yi1 = (y+1)*numCells;
        for (int x = 0; x < numCells; x++) {
            int idx0 = yi+x;
            int idx1 = yi1+x+1;
            int idxN = 2*idx0;
            int idxN1 = 2*idx1;
            if(x < 1 || y < 1) {
                normalValues[idxN+0] = normalValues[idxN1+0];
                normalValues[idxN+1] = normalValues[idxN1+1];
			}
        }
    }

    //-- certainty
    for (int y = 0; y < numCells; y++) {
        int yi = y*numCells;
        for (int x = 0; x < numCells; x++) {
            int idx = yi+x;
			double xd = x*cellSize;
			double yd = y*cellSize;
            //sample.octetLayers[CERT_IDX].data[idx] = 100; // certainty
            int c = (int)(abs(600 * (cos((addx+xd)*0.23) + sin((addy+yd)*0.31) ) ));
            sample.octetLayers[CERT_IDX].data[idx] = (char)(c < 100 ? c : 100);
            if(sample.octetLayers[CERT_IDX].data[idx] < 50) {
                heightValues[idx] = 0;
                //sample.octetLayers[CERT_IDX].data[idx] = 0;
            }
        }
    }

    // subsample heightfield if necessary
    for (int y = 0; y < numCells; y+=heightSubsample) {
        int yiS = y*numCells;
        int yiD = (y/heightSubsample)*(numCells/heightSubsample);
        for (int x = 0; x < numCells; x+=heightSubsample) {
            int idxS = yiS+x;
            int idxD = yiD+x/heightSubsample;
            sample.shortLayers[0].data[idxD] = heightValues[idxS];
        }
    }
    // subsample normals if necessary
    for (int y = 0; y < numCells; y+=normalSubsample) {
        int yiS = y*numCells;
        int yiD = (y/normalSubsample)*(numCells/normalSubsample);
        for (int x = 0; x < numCells; x+=normalSubsample) {
            int idxS = 2*(yiS+x);
            int idxD = 2*(yiD+x/normalSubsample);
            sample.octetLayers[NORM_IDX].data[idxD+0] = normalValues[idxS+0];
            sample.octetLayers[NORM_IDX].data[idxD+1] = normalValues[idxS+1];
        }
    }
    delete heightValues;
    delete normalValues;
}

/* Delete all entities */
static int publisher_shutdown(DomainParticipant *participant)
{
    ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != RETCODE_OK) {
            printf("delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = TheParticipantFactory->delete_participant(participant);
        if (retcode != RETCODE_OK) {
            printf("delete_participant error %d\n", retcode);
            status = -1;
        }
    }
    return status;
}

/**
 * create a generic data writer
 */
DataWriter* createDataWriter(const char* topicName, const char* typeName,
                             const char* qosLibrary, const char* qosProfile,
                             Topic*& topic,
                             Publisher* publisher,
                             DomainParticipant* participant)
{
    DataWriter* writer = NULL;
    fprintf(stderr, "topicName=%s\n", topicName);
    fprintf(stderr, " typeName=%s\n", typeName);
    topic = participant->create_topic(
                topicName,
                typeName,
                TOPIC_QOS_DEFAULT,
                NULL,
                STATUS_MASK_NONE);

    if (topic == NULL) {
        printf("create_topic error\n");
        publisher_shutdown(participant);
        exit(-1);
    }

    writer = publisher->create_datawriter_with_profile(
                 topic,
                 qosLibrary,
                 qosProfile,
                 NULL,
                 STATUS_MASK_NONE);

    if (writer == NULL) {
        printf("create_datawriter error\n");
        publisher_shutdown(participant);
        exit(-1);
    }
    return writer;
}


/**
 *
 */
//=================================================================================
extern "C" int publisher_main(int domainId, int sample_count)
{
    DomainParticipant *participant      = NULL;
    Publisher  *publisher               = NULL;
    DataWriter *writer                  = NULL;

    const char* qosLibrary              = "RapidQosLibrary";

    const char* configTopicName         = "rapid_navmap_config-localmap_tiled";
    const char* configQosProfile        = "RapidNavMapTilesConfigProfile";
    Topic* configTopic                  = NULL;
    InstanceHandle_t configInstance     = HANDLE_NIL;
    rapid::ext::NavMapConfig* configData = NULL;
    rapid::ext::NavMapConfigDataWriter*  rapid_NavMapConfig_writer = NULL;

    const char* sampleTopicName         = "rapid_navmap_sample-localmap_tiled";
    const char* sampleQosProfile        = "RapidNavMapTilesSampleProfile";
    Topic* sampleTopic                  = NULL;
    const int totalTiles = xTiles*yTiles;
    InstanceHandle_t     sampleInstance[totalTiles];
    rapid::ext::NavMapSample* sampleData[totalTiles];
    rapid::ext::NavMapSampleDataWriter*  rapid_NavMapSample_writer = NULL;

    ReturnCode_t retcode;

    const char* typeName = NULL;
    int         count = 0;
    Duration_t  send_period = {1,500000000};

	//fprintf(stderr, "*** Create Participant\n------------------------------\n");
    /* To customize participant Qos, use the configuration file USER_QOS_PROFILES.xml */
    participant = TheParticipantFactory->create_participant(
                      domainId, PARTICIPANT_QOS_DEFAULT,
                      NULL, STATUS_MASK_NONE);
    if (participant == NULL) {
        printf("create_participant error\n");
        publisher_shutdown(participant);
        return -1;
    }

	//fprintf(stderr, "*** Create Publisher\n------------------------------\n");
    /* To customize publisher Qos, use the configuration file USER_QOS_PROFILES.xml */
    PublisherQos* qos = new PublisherQos();
    participant->get_default_publisher_qos(*qos);
    qos->partition.name.ensure_length(1,1);
    qos->partition.name[0] = DDS_String_dup(agent);
    publisher = participant->create_publisher(*qos, NULL, STATUS_MASK_NONE);
    if (publisher == NULL) {
        printf("create_publisher error\n");
        publisher_shutdown(participant);
        return -1;
    }

	//fprintf(stderr, "*** Register Type\n------------------------------\n");
    /* Register type before creating topic */
    retcode = rapid::ext::NavMapConfigTypeSupport::register_type( participant, rapid::ext::NavMapConfigTypeSupport::get_type_name());
    //fprintf(stderr, "register_type retcode = %d\n", retcode);
    retcode = rapid::ext::NavMapSampleTypeSupport::register_type( participant, rapid::ext::NavMapSampleTypeSupport::get_type_name());
    //fprintf(stderr, "register_type retcode = %d\n", retcode);

    //=== Create Publication NavMapSample =============================
    //fprintf(stderr, "*** Create NavMapSample\n------------------------------\n");
    typeName = rapid::ext::NavMapSampleTypeSupport::get_type_name();
    writer   = createDataWriter(sampleTopicName, typeName, qosLibrary, sampleQosProfile, sampleTopic, publisher, participant);
    rapid_NavMapSample_writer = rapid::ext::NavMapSampleDataWriter::narrow(writer);
    for (int y = 0; y < yTiles; y++) {
        int yi = y*xTiles;
        for (int x = 0; x < xTiles; x++) {
            int idx = yi+x;
            sampleData[idx] = rapid::ext::NavMapSampleTypeSupport::create_data();
            updateNavMapSample(*sampleData[idx], 0, x, y);
            sampleInstance[idx] = rapid_NavMapSample_writer->register_instance(*sampleData[idx]);
        }
    }

    //=== Create Publication AAC =============================
    //fprintf(stderr, "*** Create NavMapConfig\n------------------------------\n");
    typeName = rapid::ext::NavMapConfigTypeSupport::get_type_name();
    writer   = createDataWriter(configTopicName, typeName, qosLibrary, configQosProfile, configTopic, publisher, participant);
    //fprintf(stderr, "narrow:\n");
    rapid_NavMapConfig_writer = rapid::ext::NavMapConfigDataWriter::narrow(writer);
    //fprintf(stderr, "create data:\n");
    configData = rapid::ext::NavMapConfigTypeSupport::create_data();
    setNavMapConfig(*configData);
    configInstance = rapid_NavMapConfig_writer->register_instance(*configData);


    //=== Write the Config messages ========================
    rapid_NavMapConfig_writer->write(*configData, configInstance);

    //=== Main loop ========================================
    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {

        printf("Writing rapid::ext::NavMapSample, count %d\n", count);

        for (int y = 0; y < yTiles; y++) {
            int yi = y*xTiles;
            for (int x = 0; x < xTiles; x++) {
                int idx = yi+x;
                updateNavMapSample(*sampleData[idx], count, x, y);
                retcode = rapid_NavMapSample_writer->write(*sampleData[idx], sampleInstance[idx]);
                if (retcode != RETCODE_OK) {
                    printf("write error %d\n", retcode);
                }
            }
        }
        NDDSUtility::sleep(send_period);
    }


    for (int y = 0; y < yTiles; y++) {
        int yi = y*xTiles;
        for (int x = 0; x < xTiles; x++) {
            int idx = yi+x;
            retcode = rapid_NavMapSample_writer->unregister_instance(*sampleData[idx], sampleInstance[idx]);
            if (retcode != RETCODE_OK) {
                printf("unregister instance error %d\n", retcode);
            }
        }
    }

    /* Delete data samples */
    for (int y = 0; y < yTiles; y++) {
        int yi = y*xTiles;
        for (int x = 0; x < xTiles; x++) {
            int idx = yi+x;
            retcode = rapid::ext::NavMapSampleTypeSupport::delete_data(sampleData[idx]);
            if (retcode != RETCODE_OK) {
                printf("rapid::ext::NavMapSampleTypeSupport::delete_data error %d\n", retcode);
            }
        }
    }

    /* Delete all entities */
    return publisher_shutdown(participant);
}

int main(int argc, char *argv[])
{
    fprintf(stderr, "\n  NavMapTest <domainId> <heightSubsample> <normalSubsample> <partition> <numSamples>\n\n");

    int domainId = 13;
    int sample_count = 0; /* infinite loop */

    if (argc >= 2) {
        domainId = atoi(argv[1]);
    }
    if (argc >= 3) {
        heightSubsample = atoi(argv[2]);
        if(heightSubsample < 1)
            heightSubsample = 1;
    }
    if (argc >= 4) {
        normalSubsample = atoi(argv[3]);
        if(normalSubsample < 1) 
            normalSubsample = 1;
    }
    if (argc >= 5) {
        agent = argv[4];
    }
    if (argc >= 6) {
        sample_count = atoi(argv[5]);
    }

    fprintf(stderr, "        domainId = %d\n", domainId);
    fprintf(stderr, " heightSubsample = %d\n", heightSubsample);
    fprintf(stderr, " normalSubsample = %d\n", normalSubsample);
    fprintf(stderr, "       partition = %s\n", agent);
    fprintf(stderr, "    sample_count = %d\n", sample_count);

    if (false) {
	    //fprintf(stderr, "*** configure logging\n------------------------------\n");
        NDDSConfigLogger::get_instance()->
        set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API,
                                  NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    }

	//fprintf(stderr, "*** publisher_main\n------------------------------\n");
    return publisher_main(domainId, sample_count);
}

