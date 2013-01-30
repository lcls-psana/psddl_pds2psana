
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/cspad2x2.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace CsPad2x2 {
Psana::CsPad2x2::RunModes pds_to_psana(PsddlPds::CsPad2x2::RunModes e)
{
  return Psana::CsPad2x2::RunModes(e);
}

Psana::CsPad2x2::DataModes pds_to_psana(PsddlPds::CsPad2x2::DataModes e)
{
  return Psana::CsPad2x2::DataModes(e);
}

CsPad2x2DigitalPotsCfg::CsPad2x2DigitalPotsCfg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::CsPad2x2DigitalPotsCfg()
  , m_xtcObj(xtcPtr)
{
}
CsPad2x2DigitalPotsCfg::~CsPad2x2DigitalPotsCfg()
{
}


ndarray<const uint8_t, 1> CsPad2x2DigitalPotsCfg::pots() const { return m_xtcObj->pots(); }
CsPad2x2ReadOnlyCfg::CsPad2x2ReadOnlyCfg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::CsPad2x2ReadOnlyCfg()
  , m_xtcObj(xtcPtr)
{
}
CsPad2x2ReadOnlyCfg::~CsPad2x2ReadOnlyCfg()
{
}


uint32_t CsPad2x2ReadOnlyCfg::shiftTest() const { return m_xtcObj->shiftTest(); }

uint32_t CsPad2x2ReadOnlyCfg::version() const { return m_xtcObj->version(); }
ProtectionSystemThreshold::ProtectionSystemThreshold(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::ProtectionSystemThreshold()
  , m_xtcObj(xtcPtr)
{
}
ProtectionSystemThreshold::~ProtectionSystemThreshold()
{
}


uint32_t ProtectionSystemThreshold::adcThreshold() const { return m_xtcObj->adcThreshold(); }

uint32_t ProtectionSystemThreshold::pixelCountThreshold() const { return m_xtcObj->pixelCountThreshold(); }
CsPad2x2GainMapCfg::CsPad2x2GainMapCfg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::CsPad2x2GainMapCfg()
  , m_xtcObj(xtcPtr)
{
}
CsPad2x2GainMapCfg::~CsPad2x2GainMapCfg()
{
}


ndarray<const uint16_t, 2> CsPad2x2GainMapCfg::gainMap() const { return m_xtcObj->gainMap(); }
ConfigV1QuadReg::ConfigV1QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::ConfigV1QuadReg()
  , m_xtcObj(xtcPtr)
  , _readOnly(boost::shared_ptr<const PsddlPds::CsPad2x2::CsPad2x2ReadOnlyCfg>(xtcPtr, &xtcPtr->ro()))
  , _digitalPots(boost::shared_ptr<const PsddlPds::CsPad2x2::CsPad2x2DigitalPotsCfg>(xtcPtr, &xtcPtr->dp()))
  , _gainMap(boost::shared_ptr<const PsddlPds::CsPad2x2::CsPad2x2GainMapCfg>(xtcPtr, &xtcPtr->gm()))
{
}
ConfigV1QuadReg::~ConfigV1QuadReg()
{
}


uint32_t ConfigV1QuadReg::shiftSelect() const { return m_xtcObj->shiftSelect(); }

uint32_t ConfigV1QuadReg::edgeSelect() const { return m_xtcObj->edgeSelect(); }

uint32_t ConfigV1QuadReg::readClkSet() const { return m_xtcObj->readClkSet(); }

uint32_t ConfigV1QuadReg::readClkHold() const { return m_xtcObj->readClkHold(); }

uint32_t ConfigV1QuadReg::dataMode() const { return m_xtcObj->dataMode(); }

uint32_t ConfigV1QuadReg::prstSel() const { return m_xtcObj->prstSel(); }

uint32_t ConfigV1QuadReg::acqDelay() const { return m_xtcObj->acqDelay(); }

uint32_t ConfigV1QuadReg::intTime() const { return m_xtcObj->intTime(); }

uint32_t ConfigV1QuadReg::digDelay() const { return m_xtcObj->digDelay(); }

uint32_t ConfigV1QuadReg::ampIdle() const { return m_xtcObj->ampIdle(); }

uint32_t ConfigV1QuadReg::injTotal() const { return m_xtcObj->injTotal(); }

uint32_t ConfigV1QuadReg::rowColShiftPer() const { return m_xtcObj->rowColShiftPer(); }

uint32_t ConfigV1QuadReg::ampReset() const { return m_xtcObj->ampReset(); }

uint32_t ConfigV1QuadReg::digCount() const { return m_xtcObj->digCount(); }

uint32_t ConfigV1QuadReg::digPeriod() const { return m_xtcObj->digPeriod(); }

uint32_t ConfigV1QuadReg::PeltierEnable() const { return m_xtcObj->PeltierEnable(); }

uint32_t ConfigV1QuadReg::kpConstant() const { return m_xtcObj->kpConstant(); }

uint32_t ConfigV1QuadReg::kiConstant() const { return m_xtcObj->kiConstant(); }

uint32_t ConfigV1QuadReg::kdConstant() const { return m_xtcObj->kdConstant(); }

uint32_t ConfigV1QuadReg::humidThold() const { return m_xtcObj->humidThold(); }

uint32_t ConfigV1QuadReg::setPoint() const { return m_xtcObj->setPoint(); }

const Psana::CsPad2x2::CsPad2x2ReadOnlyCfg& ConfigV1QuadReg::ro() const { return _readOnly; }

const Psana::CsPad2x2::CsPad2x2DigitalPotsCfg& ConfigV1QuadReg::dp() const { return _digitalPots; }

const Psana::CsPad2x2::CsPad2x2GainMapCfg& ConfigV1QuadReg::gm() const { return _gainMap; }
ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::ConfigV1()
  , m_xtcObj(xtcPtr)
  , _protectionThreshold(boost::shared_ptr<const PsddlPds::CsPad2x2::ProtectionSystemThreshold>(xtcPtr, &xtcPtr->protectionThreshold()))
  , _quad(boost::shared_ptr<const PsddlPds::CsPad2x2::ConfigV1QuadReg>(xtcPtr, &xtcPtr->quad()))
{
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::concentratorVersion() const { return m_xtcObj->concentratorVersion(); }

const Psana::CsPad2x2::ProtectionSystemThreshold& ConfigV1::protectionThreshold() const { return _protectionThreshold; }

uint32_t ConfigV1::protectionEnable() const { return m_xtcObj->protectionEnable(); }

uint32_t ConfigV1::inactiveRunMode() const { return m_xtcObj->inactiveRunMode(); }

uint32_t ConfigV1::activeRunMode() const { return m_xtcObj->activeRunMode(); }

uint32_t ConfigV1::tdi() const { return m_xtcObj->tdi(); }

uint32_t ConfigV1::payloadSize() const { return m_xtcObj->payloadSize(); }

uint32_t ConfigV1::badAsicMask() const { return m_xtcObj->badAsicMask(); }

uint32_t ConfigV1::asicMask() const { return m_xtcObj->asicMask(); }

uint32_t ConfigV1::roiMask() const { return m_xtcObj->roiMask(); }

const Psana::CsPad2x2::ConfigV1QuadReg& ConfigV1::quad() const { return _quad; }

uint32_t ConfigV1::numAsicsRead() const { return m_xtcObj->numAsicsRead(); }

uint32_t ConfigV1::numAsicsStored() const { return m_xtcObj->numAsicsStored(); }
ElementV1::ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad2x2::ElementV1()
  , m_xtcObj(xtcPtr)
{
}
ElementV1::~ElementV1()
{
}


uint32_t ElementV1::virtual_channel() const { return m_xtcObj->virtual_channel(); }

uint32_t ElementV1::lane() const { return m_xtcObj->lane(); }

uint32_t ElementV1::tid() const { return m_xtcObj->tid(); }

uint32_t ElementV1::acq_count() const { return m_xtcObj->acq_count(); }

uint32_t ElementV1::op_code() const { return m_xtcObj->op_code(); }

uint32_t ElementV1::quad() const { return m_xtcObj->quad(); }

uint32_t ElementV1::seq_count() const { return m_xtcObj->seq_count(); }

uint32_t ElementV1::ticks() const { return m_xtcObj->ticks(); }

uint32_t ElementV1::fiducials() const { return m_xtcObj->fiducials(); }

ndarray<const uint16_t, 1> ElementV1::sb_temp() const { return m_xtcObj->sb_temp(); }

uint32_t ElementV1::frame_type() const { return m_xtcObj->frame_type(); }

ndarray<const int16_t, 3> ElementV1::data() const { return m_xtcObj->data(); }

float ElementV1::common_mode(uint32_t section) const { return m_xtcObj->common_mode(section); }
} // namespace CsPad2x2
} // namespace psddl_pds2psana
