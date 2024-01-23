
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/uxi.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Uxi {
ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Uxi::ConfigV1()
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


uint32_t ConfigV1::numberOfFrames() const {
  return m_xtcObj->numberOfFrames();
}


uint32_t ConfigV1::numberOFBytesPerPixel() const {
  return m_xtcObj->numberOFBytesPerPixel();
}


uint32_t ConfigV1::sensorType() const {
  return m_xtcObj->sensorType();
}


ndarray<const uint32_t, 1> ConfigV1::timeOn() const {
  return m_xtcObj->timeOn(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV1::timeOff() const {
  return m_xtcObj->timeOff(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV1::delay() const {
  return m_xtcObj->delay(m_xtcObj);
}


uint32_t ConfigV1::readOnlyPots() const {
  return m_xtcObj->readOnlyPots();
}


ndarray<const double, 1> ConfigV1::pots() const {
  return m_xtcObj->pots(m_xtcObj);
}


uint8_t ConfigV1::potIsReadOnly(uint8_t i) const {
  return m_xtcObj->potIsReadOnly(i);
}


uint8_t ConfigV1::potIsTuned(uint8_t i) const {
  return m_xtcObj->potIsTuned(i);
}


uint32_t ConfigV1::numPixelsPerFrame() const {
  return m_xtcObj->numPixelsPerFrame();
}


uint32_t ConfigV1::numPixels() const {
  return m_xtcObj->numPixels();
}


uint32_t ConfigV1::frameSize() const {
  return m_xtcObj->frameSize();
}

Psana::Uxi::RoiCoord pds_to_psana(Pds::Uxi::RoiCoord pds)
{
  return Psana::Uxi::RoiCoord(pds.first(), pds.last());
}

Psana::Uxi::ConfigV2::RoiMode pds_to_psana(Pds::Uxi::ConfigV2::RoiMode e)
{
  return Psana::Uxi::ConfigV2::RoiMode(e);
}

ConfigV2::ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Uxi::ConfigV2()
  , m_xtcObj(xtcPtr)
  , _roiRows(psddl_pds2psana::Uxi::pds_to_psana(xtcPtr->roiRows()))
  , _roiFrames(psddl_pds2psana::Uxi::pds_to_psana(xtcPtr->roiFrames()))
{
}
ConfigV2::~ConfigV2()
{
}


Psana::Uxi::ConfigV2::RoiMode ConfigV2::roiEnable() const {
  return pds_to_psana(m_xtcObj->roiEnable());
}

const Psana::Uxi::RoiCoord& ConfigV2::roiRows() const { return _roiRows; }
const Psana::Uxi::RoiCoord& ConfigV2::roiFrames() const { return _roiFrames; }

uint32_t ConfigV2::width() const {
  return m_xtcObj->width();
}


uint32_t ConfigV2::height() const {
  return m_xtcObj->height();
}


uint32_t ConfigV2::numberOfFrames() const {
  return m_xtcObj->numberOfFrames();
}


uint32_t ConfigV2::numberOFBytesPerPixel() const {
  return m_xtcObj->numberOFBytesPerPixel();
}


uint32_t ConfigV2::sensorType() const {
  return m_xtcObj->sensorType();
}


ndarray<const uint32_t, 1> ConfigV2::timeOn() const {
  return m_xtcObj->timeOn(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV2::timeOff() const {
  return m_xtcObj->timeOff(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV2::delay() const {
  return m_xtcObj->delay(m_xtcObj);
}


uint32_t ConfigV2::readOnlyPots() const {
  return m_xtcObj->readOnlyPots();
}


ndarray<const double, 1> ConfigV2::pots() const {
  return m_xtcObj->pots(m_xtcObj);
}


uint8_t ConfigV2::potIsReadOnly(uint8_t i) const {
  return m_xtcObj->potIsReadOnly(i);
}


uint8_t ConfigV2::potIsTuned(uint8_t i) const {
  return m_xtcObj->potIsTuned(i);
}


uint32_t ConfigV2::numPixelsPerFrame() const {
  return m_xtcObj->numPixelsPerFrame();
}


uint32_t ConfigV2::numPixels() const {
  return m_xtcObj->numPixels();
}


uint32_t ConfigV2::frameSize() const {
  return m_xtcObj->frameSize();
}

Psana::Uxi::ConfigV3::RoiMode pds_to_psana(Pds::Uxi::ConfigV3::RoiMode e)
{
  return Psana::Uxi::ConfigV3::RoiMode(e);
}

Psana::Uxi::ConfigV3::OscMode pds_to_psana(Pds::Uxi::ConfigV3::OscMode e)
{
  return Psana::Uxi::ConfigV3::OscMode(e);
}

ConfigV3::ConfigV3(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Uxi::ConfigV3()
  , m_xtcObj(xtcPtr)
  , _roiRows(psddl_pds2psana::Uxi::pds_to_psana(xtcPtr->roiRows()))
  , _roiFrames(psddl_pds2psana::Uxi::pds_to_psana(xtcPtr->roiFrames()))
{
}
ConfigV3::~ConfigV3()
{
}


Psana::Uxi::ConfigV3::RoiMode ConfigV3::roiEnable() const {
  return pds_to_psana(m_xtcObj->roiEnable());
}

const Psana::Uxi::RoiCoord& ConfigV3::roiRows() const { return _roiRows; }
const Psana::Uxi::RoiCoord& ConfigV3::roiFrames() const { return _roiFrames; }

Psana::Uxi::ConfigV3::OscMode ConfigV3::oscillator() const {
  return pds_to_psana(m_xtcObj->oscillator());
}


uint32_t ConfigV3::width() const {
  return m_xtcObj->width();
}


uint32_t ConfigV3::height() const {
  return m_xtcObj->height();
}


uint32_t ConfigV3::numberOfFrames() const {
  return m_xtcObj->numberOfFrames();
}


uint32_t ConfigV3::numberOFBytesPerPixel() const {
  return m_xtcObj->numberOFBytesPerPixel();
}


uint32_t ConfigV3::sensorType() const {
  return m_xtcObj->sensorType();
}


ndarray<const uint32_t, 1> ConfigV3::timeOn() const {
  return m_xtcObj->timeOn(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV3::timeOff() const {
  return m_xtcObj->timeOff(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV3::delay() const {
  return m_xtcObj->delay(m_xtcObj);
}


uint32_t ConfigV3::readOnlyPots() const {
  return m_xtcObj->readOnlyPots();
}


ndarray<const double, 1> ConfigV3::pots() const {
  return m_xtcObj->pots(m_xtcObj);
}


uint8_t ConfigV3::potIsReadOnly(uint8_t i) const {
  return m_xtcObj->potIsReadOnly(i);
}


uint8_t ConfigV3::potIsTuned(uint8_t i) const {
  return m_xtcObj->potIsTuned(i);
}


uint32_t ConfigV3::numPixelsPerFrame() const {
  return m_xtcObj->numPixelsPerFrame();
}


uint32_t ConfigV3::numPixels() const {
  return m_xtcObj->numPixels();
}


uint32_t ConfigV3::frameSize() const {
  return m_xtcObj->frameSize();
}

template <typename Config>
FrameV1<Config>::FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Uxi::FrameV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
FrameV1<Config>::~FrameV1()
{
}


template <typename Config>
uint32_t FrameV1<Config>::acquisitionCount() const {
  return m_xtcObj->acquisitionCount();
}


template <typename Config>
uint32_t FrameV1<Config>::timestamp() const {
  return m_xtcObj->timestamp();
}


template <typename Config>
double FrameV1<Config>::temperature() const {
  return m_xtcObj->temperature();
}


template <typename Config>
ndarray<const uint16_t, 3> FrameV1<Config>::frames() const {
  return m_xtcObj->frames(*m_cfgPtr, m_xtcObj);
}

template class FrameV1<Pds::Uxi::ConfigV1>;
template class FrameV1<Pds::Uxi::ConfigV2>;
template class FrameV1<Pds::Uxi::ConfigV3>;
} // namespace Uxi
} // namespace psddl_pds2psana
