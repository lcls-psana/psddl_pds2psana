
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/arraychar.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Arraychar {
DataV1::DataV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Arraychar::DataV1()
  , m_xtcObj(xtcPtr)
{
}
DataV1::~DataV1()
{
}


uint64_t DataV1::numChars() const {
  return m_xtcObj->numChars();
}


ndarray<const uint8_t, 1> DataV1::data() const {
  return m_xtcObj->data(m_xtcObj);
}

} // namespace Arraychar
} // namespace psddl_pds2psana
