/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#ifndef kn_PointCloud_h
#define kn_PointCloud_h

#include "knGeometry_Export.h"

#include "knMath/Vector.h"
#include "knMath/ATrans.h"
#include "knFrameStore/FrameHandle.h"
#include "knShare/SmartPtr.h"

#include <ace/Time_Value.h>

#include <iosfwd>
#include <stdint.h>

/**
 * @defgroup knGeometry Geometry
 * @brief The Geometry module of kn provides a set data-types for dealing with geometry.
 */

namespace kn
{
  /** @ingroup knGeometry */
  union PointAttribute
  {
    int8_t  int8s[4];
    int16_t int16s[2];
    int32_t int32s;
  };
  /** @ingroup knGeometry */
  enum PointAttributeFormats { PAF_NONE, PAF_INTENSITY8, PAF_INTENSITY16_DISTANCE16 };
  
  /** @ingroup knGeometry */
  struct PointCloudPoint : Vector3
  {
    PointCloudPoint() {}
    PointCloudPoint(Vector3 const& v) :
      Vector3(v)
    {}
    PointCloudPoint(Vector3 const& v, PointAttribute const& a) :
      Vector3(v),
      att(a)
    {}
    
    PointAttribute att;
    
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW   
  };
  
  /** @ingroup knGeometry */
  class knGeometry_Export PointCloud
  {
  public:
    typedef std::vector<size_t> RowLengthVector;
    typedef std::vector<PointCloudPoint, Eigen::aligned_allocator<PointCloudPoint> > PointVector;
    
    PointCloud(ACE_Time_Value const& t,
               FrameHandle ref, 
               PointAttributeFormats af, 
               ATrans3 const& trans) :
      timestamp(t),
      referenceFrame(ref),
      attFormat(af),
      transform(trans)
    {}
    
    PointCloud(ACE_Time_Value const& t = ACE_Time_Value::zero,
               FrameHandle ref = FrameHandle::NULL_HANDLE, 
               PointAttributeFormats af = PAF_NONE) :
      timestamp(t),
      referenceFrame(ref),
      attFormat(af)
    {
      // MSVC 2010 explodes if Eigen3 Identity() is used as a default 
      // argument, so work around by adding a second ctor
      transform = ATrans3::Identity();
    }
    
    
    void clear();
    
    inline void setTimestamp(const ACE_Time_Value& t) {
      timestamp = t;
    }
    
    inline void setPointAttributeFormat(PointAttributeFormats format) {
      attFormat = format;
    }
    
    inline PointAttributeFormats pointAttributeFormat() {
      return attFormat;
    }
    
    /** add point to cloud 
     *  @returns reference to point 
     */
    PointCloudPoint& addPoint(const Vector3& xyz, const PointAttribute& att) {
      size_t sz = points.size();
      points.push_back(PointCloudPoint(xyz,att));
      return points[sz];
    }
    
    /** add point to cloud with no attributes
     *  @returns reference to point 
     *  @overload
     */
    PointCloudPoint& addPoint(const Vector3& xyz) {
      size_t sz = points.size();
      points.push_back(PointCloudPoint(xyz));
      return points[sz];
    }
    
    /** add point to cloud with no attributes
     *  @returns reference to point 
     *  @overload
     */
    PointCloudPoint& addPoint(double x, double y, double z) {
      size_t sz = points.size();
      points.push_back(PointCloudPoint(Vector3(x,y,z)));
      return points[sz];
    }
    
    /** set number of rows in structured point cloud */
    void setNumRows(size_t numRows) {
      rowLens.resize(numRows);
    }
    
    /** set number of columns in a particular row of a structured point cloud */
    void setNumCols(size_t rowNum, size_t numCols) {
      rowLens[rowNum] = numCols;
    }
    
    /** set number of rows and columns in a rectangular 
     * structured point cloud (i.e. every row has same number 
     * of columns)
     */
    void setRowCols(size_t numRows, size_t numCols) {
      rowLens.assign(numRows, numCols);
    }
    
    ACE_Time_Value timestamp;   
    FrameHandle referenceFrame;
    PointAttributeFormats attFormat;
    ATrans3 transform;
    
    PointVector points;
    RowLengthVector rowLens;
    
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW   
  };

  /** @ingroup knGeometry */
  knGeometry_Export std::ostream& operator<<(std::ostream& ostr, PointCloud const& pc);
  
  /** @ingroup knGeometry */
  typedef shared_ptr<PointCloud> PointCloudPtr;
} // namspace kn
#endif // kn_PointCloud_h