#include "knShare/Thread.h"
#include "knShare/Chrono.h"

#include <ace/INET_Addr.h>
#include <ace/SOCK_Dgram.h>

#include <iostream>

using namespace std;

// ndds ping announcement

// 0000  00 00 00 00 00 00 00 00  00 00 00 00 08 00 45 00   ........ ......E.
// 0010  00 2c 00 00 40 00 40 11  3c bf 7f 00 00 01 7f 00   .,..@.@. <.......
// 0020  00 01 e7 c2 1c f2 00 18  fe 2b 52 54 50 53 02 01   ........ .+RTPS..
// 0030  01 01 4e 44 44 53 50 49  4e 47                     ..NDDSPI NG      

unsigned char pingBuffer[] = {
  0x52, 0x54, 0x50, 0x53, 0x02, 0x01, 0x01, 0x01, // RTPS 2.1 RTI
  0x4e, 0x44, 0x44, 0x53, 0x50, 0x49, 0x4e, 0x47  // NDDSPING
};
int const pingSize = sizeof(pingBuffer); // total packet size


// participant announcement

// 0000  00 00 00 00 00 00 00 00  00 00 00 00 08 00 45 00   ........ ......E.
// 0010  00 f0 00 00 40 00 40 11  3b fb 7f 00 00 01 7f 00   ....@.@. ;.......
// 0020  00 01 a6 78 13 39 00 dc  fe ef 52 54 50 53 02 01   ...x.9.. ..RTPS..
// 0030  01 01 ac 12 00 01 00 00  28 ac 00 00 00 01 09 01   ........ (.......
// 0040  08 00 98 60 ed 4d 85 af  af 01 15 05 b0 00 00 00   ...`.M.. ........
// 0050  10 00 00 00 00 00 00 01  00 c2 00 00 00 00 01 00   ........ ........
// 0060  00 00 00 03 00 00 50 00  10 00 ac 12 00 01 00 00   ......P. ........
// 0070  28 ac 00 00 00 01 00 00  01 c1 58 00 04 00 3f 00   (....... ..X...?.
// 0080  00 00 15 00 04 00 02 01  00 00 16 00 04 00 01 01   ........ ........
// 0090  00 00 31 00 18 00 01 00  00 00 30 13 00 00 00 00   ..1..... ..0.....
// 00a0  00 00 00 00 00 00 00 00  00 00 7f 00 00 01 32 00   ........ ......2.
// 00b0  18 00 01 00 00 00 31 13  00 00 00 00 00 00 00 00   ......1. ........
// 00c0  00 00 00 00 00 00 7f 00  00 01 02 00 08 00 64 00   ........ ......d.
// 00d0  00 00 00 00 00 00 59 00  04 00 00 00 00 00 00 80   ......Y. ........
// 00e0  04 00 04 05 64 00 62 00  10 00 09 00 00 00 5b 45   ....d.b. ......[E
// 00f0  4e 54 49 54 59 5d 00 00  00 00 01 00 00 00         NTITY].. ......  

// [ENTITY]
// RawWriter
unsigned char participantBuffer[] = {
  0x52, 0x54, 0x50, 0x53, 0x02, 0x01, 0x01, 0x01, // RTPS 2.1 RTI
  0xc1, 0x10, 0xb0, 0x9f, 0x00, 0x00, 0x3a, 0x02, 0x00, 0x00, 0x00, 0x01, // hostId(8) - IP, appId(12), counter(16)
  // info TS
  0x09, // info ts ID
  0x01, // endianess
  0x08, 0x00, // offset to next header
  0xa1, 0x5f, 0xd6, 0x4d, 0x7e, 0x92, 0xc9, 0xa9, // timestamp: sec(24) fraction(28)

  // DATA
  0x15, // ID 
  0x05, // flags
  0xb0, 0x00, // offset
  0x00, 0x00, // extra flags
  0x10, 0x00, // offset to next header
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xc2, // reader(36)/writer(40) id's
  0x00, 0x00, 0x00, 0x00, // padding??? (writer seq number)
  0x01, 0x00, 0x00, 0x00, // writer sequence number(48)
  // serialized data
  0x00, 0x03, // encapsulation
  0x00, 0x00, // options

  // user data(52)

  // PID PARTICIPANT GUID
  0x50, 0x00, 0x10, 0x00,  0xac, 0x12, 0x00, 0x01,  0x00, 0x00, 0x28, 0xac,  0x00, 0x00, 0x00, 0x01,
  0x00, 0x00, 0x01, 0xc1,
  // PID BUILTIN ENDPOINT SET
  0x58, 0x00, 0x04, 0x00,  0x3f, 0x00, 0x00, 0x00,
  // PID PROTOCOL VERSION
  0x15, 0x00, 0x04, 0x00,  0x02, 0x01, 0x00, 0x00,
  // PID VENDOR ID
  0x16, 0x00, 0x04, 0x00,  0x01, 0x01, 0x00, 0x00,
  // PID DEFAULT UNICAST LOCATOR
  0x31, 0x00, 0x18, 0x00,  0x01, 0x00, 0x00, 0x00,  0x32, 0x13, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x7f, 0x00, 0x00, 0x01,
  // METATRAFFIC UNICAST LOCATOR
  0x32, 0x00, 0x18, 0x00,  0x01, 0x00, 0x00, 0x00,  0x33, 0x13, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,  0x7f, 0x00, 0x00, 0x01,
  // LEASE DURATION
  0x02, 0x00, 0x08, 0x00,  0x64, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00,
  // PROPERTY LIST
  0x59, 0x00, 0x04, 0x00,  0x00, 0x00, 0x00, 0x00,
  // VERSION NAME
  0x00, 0x80, 0x04, 0x00,  0x04, 0x05, 0x64, 0x00,
  // ENTITY NAME
  0x62, 0x00, 0x10, 0x00,  0x0a, 0x00, 0x00, 0x00,
   'R',  'a',  'w',  'W',   'r',  'i',  't',  'e',   'r', 0x00, 0x00, 0x00,
  // SENTINEL
  0x01, 0x00, 0x00, 0x00
};
int const participantSize = sizeof(participantBuffer); // total packet size

int const guidHostIdI = 64;
int const guidAppIdI = 68;


// data

// 0000  00 00 00 00 00 00 00 00  00 00 00 00 08 00 45 00   ........ ......E.
// 0010  00 98 00 00 40 00 40 11  3c 53 7f 00 00 01 7f 00   ....@.@. <S......
// 0020  00 01 aa b9 13 32 00 84  fe 97 52 54 50 53 02 01   .....2.. ..RTPS.. << RTPS that's where it starts
// 0030  01 01 c1 10 b0 9f 00 00  3a 02 00 00 00 01 09 01   ........ :.......
// 0040  08 00 a1 5f d6 4d 7e 92  c9 a9 15 05 58 00 00 00   ..._.M~. ....X...
// 0050  10 00 00 00 00 00 80 00  00 03 00 00 00 00 04 00   ........ ........
// 0060  00 00 00 01 00 00 03 00  00 00 11 00 00 00 48 65   ........ ......He
// 0070  6c 6c 6f 20 57 6f 72 6c  64 21 20 28 33 29 00 00   llo Worl d! (3)..
// 0080  00 00 20 00 00 00 00 00  00 00 00 00 00 00 00 00   .. ..... ........
// 0090  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00   ........ ........
// 00a0  00 00 00 00 00 00                                  ......           


unsigned char buffer[] = {
  0x52, 0x54, 0x50, 0x53, 0x02, 0x01, 0x01, 0x01, // RTPS 2.1 RTI
  0xc1, 0x10, 0xb0, 0x9f, 0x00, 0x00, 0x3a, 0x02, 0x00, 0x00, 0x00, 0x01, // hostId(8) - IP, appId(12), counter(16)
  // info TS
  0x09, // info ts ID
  0x01, // endianess
  0x08, 0x00, // offset to next header
  0xa1, 0x5f, 0xd6, 0x4d, 0x7e, 0x92, 0xc9, 0xa9, // timestamp: sec(24) fraction(28)
  // DATA
  0x15, // ID 
  0x05, // flags
  0x38, 0x00, // offset
  0x00, 0x00, // extra flags
  0x10, 0x00, // offset to next header
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, // reader(36)/writer(40) id's
  0x00, 0x00, 0x00, 0x00, // padding??? (writer seq number)
  0x04, 0x00, 0x00, 0x00, // writer sequence number(48)
  // serialized data
  0x00, 0x01, // encapsulation
  0x00, 0x00, // options
  // user data(60)
  0x03, 0x00, 0x00, 0x00,                            // counter(52): 03
  0x11, 0x00, 0x00, 0x00, 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x21, 0x20, 0x28, 0x33, 0x29, 0x00, 0x00, 0x00, 0x00, //  0x11 Hello World! (3)..
  0x00, 0x00, 0x00, 0x00    // 0x00 buffer
};

int const messageSize = sizeof(buffer); // total packet size

int const hostIdI = 8;
int const appIdI = 12;
int const counterI = 16;
int const timeSecI = 24;
int const timeFracI = 28;
int const readerIdI = 36;
int const writerIdI = 40;
int const writerSeqNumI = 52;

int const uCounterI = 60;        // index of counter in raw data packet

char const defaultAddr[] = "127.0.0.1:4912";
char const defaultAddr1[] = "127.0.0.1:4913";
char const * remoteAddr = defaultAddr;

int main (int argc, char * argv[])
{
  if (argc > 1) 
    remoteAddr = argv[1];

  // open sockets
  ACE_INET_Addr addr(remoteAddr);
  ACE_INET_Addr discoveryAddr(defaultAddr1);
  ACE_INET_Addr localPort("127.0.0.1:4900");
  ACE_SOCK_Dgram socket(localPort);

  ACE_INET_Addr local;
  int rc = socket.get_local_addr(local);
  // @FIXME: IP is zero for default
  ACE_UINT32 ip = ntohl(local.get_ip_address());
  //  ACE_UINT32 ip = ntohl(12345678);

  //------------------------
  // participant description
  // set hostId
  memcpy(&participantBuffer[hostIdI], &ip, sizeof(ip));
  memcpy(&participantBuffer[guidHostIdI], &ip, sizeof(ip));

  // set AppId
  ACE_UINT32 port = ntohl(local.get_port_number());
  memcpy(&participantBuffer[appIdI], &port, sizeof(port));
  memcpy(&participantBuffer[guidAppIdI], &port, sizeof(port));

  // send data
  rc = 0;
  if ((rc = socket.send(participantBuffer, participantSize, discoveryAddr)) < 0) {
    cout << participantSize << " ";
    cout << strerror(errno) << flush;
  }

  cout << "F" << flush;
  kn::this_thread::sleep_for(kn::microseconds(2500000));

  //------------------------
  // topic header
  // initialize buffer
  // hostId, appId, counter

  // set hostId
  memcpy(&buffer[hostIdI], &ip, sizeof(ip));

  // set AppId
  memcpy(&buffer[appIdI], &port, sizeof(port));

  // reader/writer id's

  ACE_INT32 seq = 0;
  ACE_INT32 counter = 0;

  
  // send data
  while (true) {
    
    // update header

    // timestamp


    // writer sequence number
    memcpy(&buffer[writerSeqNumI], &seq, sizeof(seq));

    // update data
    memcpy(&buffer[uCounterI], &counter, sizeof(counter));

    // send data
    int rc = 0;
    if ((rc = socket.send(buffer, messageSize, addr)) < 0) {
      cout << messageSize << " ";
      cout << strerror(errno) << flush;
    }

    // delay
    kn::this_thread::sleep_for(kn::microseconds(500000));
    ++seq;
    ++counter;
    cout << "." << flush;
  }


  return 0;
}
