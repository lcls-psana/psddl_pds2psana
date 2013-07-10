
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/usdusb.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace UsdUsb {
Psana::UsdUsb::ConfigV1::Count_Mode pds_to_psana(PsddlPds::UsdUsb::ConfigV1::Count_Mode e)
{
  return Psana::UsdUsb::ConfigV1::Count_Mode(e);
}

Psana::UsdUsb::ConfigV1::Quad_Mode pds_to_psana(PsddlPds::UsdUsb::ConfigV1::Quad_Mode e)
{
  return Psana::UsdUsb::ConfigV1::Quad_Mode(e);
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::UsdUsb::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


ndarray<const uint32_t, 1> ConfigV1::counting_mode() const {
  return m_xtcObj->counting_mode(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV1::quadrature_mode() const {
  return m_xtcObj->quadrature_mode(m_xtcObj);
}

DataV1::DataV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::UsdUsb::DataV1()
  , m_xtcObj(xtcPtr)
{
}
DataV1::~DataV1()
{
}


uint8_t DataV1::digital_in() const {
  return m_xtcObj->digital_in();
}


uint32_t DataV1::timestamp() const {
  return m_xtcObj->timestamp();
}


ndarray<const uint8_t, 1> DataV1::status() const {
  return m_xtcObj->status(m_xtcObj);
}


ndarray<const uint16_t, 1> DataV1::analog_in() const {
  return m_xtcObj->analog_in(m_xtcObj);
}


ndarray<const int32_t, 1> DataV1::encoder_count() const {
  return m_xtcObj->encoder_count();
}

} // namespace UsdUsb
} // namespace psddl_pds2psana
