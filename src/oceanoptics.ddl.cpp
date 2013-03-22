
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/oceanoptics.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace OceanOptics {
ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::OceanOptics::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


float ConfigV1::exposureTime() const { return m_xtcObj->exposureTime(); }

ndarray<const double, 1> ConfigV1::waveLenCalib() const { return m_xtcObj->waveLenCalib(); }

ndarray<const double, 1> ConfigV1::nonlinCorrect() const { return m_xtcObj->nonlinCorrect(); }

double ConfigV1::strayLightConstant() const { return m_xtcObj->strayLightConstant(); }
Psana::OceanOptics::timespec64 pds_to_psana(PsddlPds::OceanOptics::timespec64 pds)
{
  return Psana::OceanOptics::timespec64(pds.tv_sec(), pds.tv_nsec());
}

DataV1::DataV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::OceanOptics::ConfigV1>& cfgPtr)
  : Psana::OceanOptics::DataV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr0(cfgPtr)
  , _tsTimeFrameStart(psddl_pds2psana::OceanOptics::pds_to_psana(xtcPtr->timeFrameStart()))
  , _tsTimeFrameFirstData(psddl_pds2psana::OceanOptics::pds_to_psana(xtcPtr->timeFrameFirstData()))
  , _tsTimeFrameEnd(psddl_pds2psana::OceanOptics::pds_to_psana(xtcPtr->timeFrameEnd()))
{
}
DataV1::~DataV1()
{
}


ndarray<const uint16_t, 1> DataV1::data() const { return m_xtcObj->data(); }

uint64_t DataV1::frameCounter() const { return m_xtcObj->frameCounter(); }

uint64_t DataV1::numDelayedFrames() const { return m_xtcObj->numDelayedFrames(); }

uint64_t DataV1::numDiscardFrames() const { return m_xtcObj->numDiscardFrames(); }

const Psana::OceanOptics::timespec64& DataV1::timeFrameStart() const { return _tsTimeFrameStart; }

const Psana::OceanOptics::timespec64& DataV1::timeFrameFirstData() const { return _tsTimeFrameFirstData; }

const Psana::OceanOptics::timespec64& DataV1::timeFrameEnd() const { return _tsTimeFrameEnd; }

int8_t DataV1::numSpectraInData() const { return m_xtcObj->numSpectraInData(); }

int8_t DataV1::numSpectraInQueue() const { return m_xtcObj->numSpectraInQueue(); }

int8_t DataV1::numSpectraUnused() const { return m_xtcObj->numSpectraUnused(); }

double DataV1::durationOfFrame() const { return m_xtcObj->durationOfFrame(); }

double DataV1::nonlinerCorrected(uint32_t iPixel) const {
  if (m_cfgPtr0.get()) return m_xtcObj->nonlinerCorrected(*m_cfgPtr0, iPixel);
  throw std::runtime_error("DataV1::nonlinerCorrected: config object pointer is zero");
}

} // namespace OceanOptics
} // namespace psddl_pds2psana
