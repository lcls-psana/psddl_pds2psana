
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/andor.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Andor {
Psana::Andor::ConfigV1::EnumFanMode pds_to_psana(PsddlPds::Andor::ConfigV1::EnumFanMode e)
{
  return Psana::Andor::ConfigV1::EnumFanMode(e);
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Andor::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::width() const {
  return m_xtcObj->width();
}


uint32_t ConfigV1::height() const {
  return m_xtcObj->height();
}


uint32_t ConfigV1::orgX() const {
  return m_xtcObj->orgX();
}


uint32_t ConfigV1::orgY() const {
  return m_xtcObj->orgY();
}


uint32_t ConfigV1::binX() const {
  return m_xtcObj->binX();
}


uint32_t ConfigV1::binY() const {
  return m_xtcObj->binY();
}


float ConfigV1::exposureTime() const {
  return m_xtcObj->exposureTime();
}


float ConfigV1::coolingTemp() const {
  return m_xtcObj->coolingTemp();
}


Psana::Andor::ConfigV1::EnumFanMode ConfigV1::fanMode() const {
  return pds_to_psana(m_xtcObj->fanMode());
}


uint8_t ConfigV1::baselineClamp() const {
  return m_xtcObj->baselineClamp();
}


uint8_t ConfigV1::highCapacity() const {
  return m_xtcObj->highCapacity();
}


uint8_t ConfigV1::gainIndex() const {
  return m_xtcObj->gainIndex();
}


uint16_t ConfigV1::readoutSpeedIndex() const {
  return m_xtcObj->readoutSpeedIndex();
}


uint16_t ConfigV1::exposureEventCode() const {
  return m_xtcObj->exposureEventCode();
}


uint32_t ConfigV1::numDelayShots() const {
  return m_xtcObj->numDelayShots();
}


uint32_t ConfigV1::frameSize() const {
  return m_xtcObj->frameSize();
}


uint32_t ConfigV1::numPixelsX() const {
  return m_xtcObj->numPixelsX();
}


uint32_t ConfigV1::numPixelsY() const {
  return m_xtcObj->numPixelsY();
}


uint32_t ConfigV1::numPixels() const {
  return m_xtcObj->numPixels();
}

template <typename Config>
FrameV1<Config>::FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Andor::FrameV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
FrameV1<Config>::~FrameV1()
{
}


template <typename Config>
uint32_t FrameV1<Config>::shotIdStart() const {
  return m_xtcObj->shotIdStart();
}


template <typename Config>
float FrameV1<Config>::readoutTime() const {
  return m_xtcObj->readoutTime();
}


template <typename Config>
float FrameV1<Config>::temperature() const {
  return m_xtcObj->temperature();
}


template <typename Config>
ndarray<const uint16_t, 2> FrameV1<Config>::data() const {
  return m_xtcObj->data(*m_cfgPtr, m_xtcObj);
}

template class FrameV1<PsddlPds::Andor::ConfigV1>;
} // namespace Andor
} // namespace psddl_pds2psana
