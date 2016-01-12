
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/cspad.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace CsPad {
Psana::CsPad::RunModes pds_to_psana(Pds::CsPad::RunModes e)
{
  return Psana::CsPad::RunModes(e);
}

Psana::CsPad::DataModes pds_to_psana(Pds::CsPad::DataModes e)
{
  return Psana::CsPad::DataModes(e);
}

CsPadDigitalPotsCfg::CsPadDigitalPotsCfg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::CsPadDigitalPotsCfg()
  , m_xtcObj(xtcPtr)
{
}
CsPadDigitalPotsCfg::~CsPadDigitalPotsCfg()
{
}


ndarray<const uint8_t, 1> CsPadDigitalPotsCfg::pots() const {
  return m_xtcObj->pots(m_xtcObj);
}

Psana::CsPad::CsPadReadOnlyCfg pds_to_psana(Pds::CsPad::CsPadReadOnlyCfg pds)
{
  return Psana::CsPad::CsPadReadOnlyCfg(pds.shiftTest(), pds.version());
}

Psana::CsPad::ProtectionSystemThreshold pds_to_psana(Pds::CsPad::ProtectionSystemThreshold pds)
{
  return Psana::CsPad::ProtectionSystemThreshold(pds.adcThreshold(), pds.pixelCountThreshold());
}

CsPadGainMapCfg::CsPadGainMapCfg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::CsPadGainMapCfg()
  , m_xtcObj(xtcPtr)
{
}
CsPadGainMapCfg::~CsPadGainMapCfg()
{
}


ndarray<const uint16_t, 2> CsPadGainMapCfg::gainMap() const {
  return m_xtcObj->gainMap(m_xtcObj);
}

ConfigV1QuadReg::ConfigV1QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV1QuadReg()
  , m_xtcObj(xtcPtr)
  , _readOnly(psddl_pds2psana::CsPad::pds_to_psana(xtcPtr->ro()))
  , _digitalPots(boost::shared_ptr<const Pds::CsPad::CsPadDigitalPotsCfg>(xtcPtr, &xtcPtr->dp()))
  , _gainMap(boost::shared_ptr<const Pds::CsPad::CsPadGainMapCfg>(xtcPtr, &xtcPtr->gm()))
{
}
ConfigV1QuadReg::~ConfigV1QuadReg()
{
}


ndarray<const uint32_t, 1> ConfigV1QuadReg::shiftSelect() const {
  return m_xtcObj->shiftSelect(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV1QuadReg::edgeSelect() const {
  return m_xtcObj->edgeSelect(m_xtcObj);
}


uint32_t ConfigV1QuadReg::readClkSet() const {
  return m_xtcObj->readClkSet();
}


uint32_t ConfigV1QuadReg::readClkHold() const {
  return m_xtcObj->readClkHold();
}


uint32_t ConfigV1QuadReg::dataMode() const {
  return m_xtcObj->dataMode();
}


uint32_t ConfigV1QuadReg::prstSel() const {
  return m_xtcObj->prstSel();
}


uint32_t ConfigV1QuadReg::acqDelay() const {
  return m_xtcObj->acqDelay();
}


uint32_t ConfigV1QuadReg::intTime() const {
  return m_xtcObj->intTime();
}


uint32_t ConfigV1QuadReg::digDelay() const {
  return m_xtcObj->digDelay();
}


uint32_t ConfigV1QuadReg::ampIdle() const {
  return m_xtcObj->ampIdle();
}


uint32_t ConfigV1QuadReg::injTotal() const {
  return m_xtcObj->injTotal();
}


uint32_t ConfigV1QuadReg::rowColShiftPer() const {
  return m_xtcObj->rowColShiftPer();
}

const Psana::CsPad::CsPadReadOnlyCfg& ConfigV1QuadReg::ro() const { return _readOnly; }
const Psana::CsPad::CsPadDigitalPotsCfg& ConfigV1QuadReg::dp() const { return _digitalPots; }
const Psana::CsPad::CsPadGainMapCfg& ConfigV1QuadReg::gm() const { return _gainMap; }
ConfigV2QuadReg::ConfigV2QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV2QuadReg()
  , m_xtcObj(xtcPtr)
  , _readOnly(psddl_pds2psana::CsPad::pds_to_psana(xtcPtr->ro()))
  , _digitalPots(boost::shared_ptr<const Pds::CsPad::CsPadDigitalPotsCfg>(xtcPtr, &xtcPtr->dp()))
  , _gainMap(boost::shared_ptr<const Pds::CsPad::CsPadGainMapCfg>(xtcPtr, &xtcPtr->gm()))
{
}
ConfigV2QuadReg::~ConfigV2QuadReg()
{
}


ndarray<const uint32_t, 1> ConfigV2QuadReg::shiftSelect() const {
  return m_xtcObj->shiftSelect(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV2QuadReg::edgeSelect() const {
  return m_xtcObj->edgeSelect(m_xtcObj);
}


uint32_t ConfigV2QuadReg::readClkSet() const {
  return m_xtcObj->readClkSet();
}


uint32_t ConfigV2QuadReg::readClkHold() const {
  return m_xtcObj->readClkHold();
}


uint32_t ConfigV2QuadReg::dataMode() const {
  return m_xtcObj->dataMode();
}


uint32_t ConfigV2QuadReg::prstSel() const {
  return m_xtcObj->prstSel();
}


uint32_t ConfigV2QuadReg::acqDelay() const {
  return m_xtcObj->acqDelay();
}


uint32_t ConfigV2QuadReg::intTime() const {
  return m_xtcObj->intTime();
}


uint32_t ConfigV2QuadReg::digDelay() const {
  return m_xtcObj->digDelay();
}


uint32_t ConfigV2QuadReg::ampIdle() const {
  return m_xtcObj->ampIdle();
}


uint32_t ConfigV2QuadReg::injTotal() const {
  return m_xtcObj->injTotal();
}


uint32_t ConfigV2QuadReg::rowColShiftPer() const {
  return m_xtcObj->rowColShiftPer();
}


uint32_t ConfigV2QuadReg::ampReset() const {
  return m_xtcObj->ampReset();
}


uint32_t ConfigV2QuadReg::digCount() const {
  return m_xtcObj->digCount();
}


uint32_t ConfigV2QuadReg::digPeriod() const {
  return m_xtcObj->digPeriod();
}

const Psana::CsPad::CsPadReadOnlyCfg& ConfigV2QuadReg::ro() const { return _readOnly; }
const Psana::CsPad::CsPadDigitalPotsCfg& ConfigV2QuadReg::dp() const { return _digitalPots; }
const Psana::CsPad::CsPadGainMapCfg& ConfigV2QuadReg::gm() const { return _gainMap; }
ConfigV3QuadReg::ConfigV3QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV3QuadReg()
  , m_xtcObj(xtcPtr)
  , _readOnly(psddl_pds2psana::CsPad::pds_to_psana(xtcPtr->ro()))
  , _digitalPots(boost::shared_ptr<const Pds::CsPad::CsPadDigitalPotsCfg>(xtcPtr, &xtcPtr->dp()))
  , _gainMap(boost::shared_ptr<const Pds::CsPad::CsPadGainMapCfg>(xtcPtr, &xtcPtr->gm()))
{
}
ConfigV3QuadReg::~ConfigV3QuadReg()
{
}


ndarray<const uint32_t, 1> ConfigV3QuadReg::shiftSelect() const {
  return m_xtcObj->shiftSelect(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV3QuadReg::edgeSelect() const {
  return m_xtcObj->edgeSelect(m_xtcObj);
}


uint32_t ConfigV3QuadReg::readClkSet() const {
  return m_xtcObj->readClkSet();
}


uint32_t ConfigV3QuadReg::readClkHold() const {
  return m_xtcObj->readClkHold();
}


uint32_t ConfigV3QuadReg::dataMode() const {
  return m_xtcObj->dataMode();
}


uint32_t ConfigV3QuadReg::prstSel() const {
  return m_xtcObj->prstSel();
}


uint32_t ConfigV3QuadReg::acqDelay() const {
  return m_xtcObj->acqDelay();
}


uint32_t ConfigV3QuadReg::intTime() const {
  return m_xtcObj->intTime();
}


uint32_t ConfigV3QuadReg::digDelay() const {
  return m_xtcObj->digDelay();
}


uint32_t ConfigV3QuadReg::ampIdle() const {
  return m_xtcObj->ampIdle();
}


uint32_t ConfigV3QuadReg::injTotal() const {
  return m_xtcObj->injTotal();
}


uint32_t ConfigV3QuadReg::rowColShiftPer() const {
  return m_xtcObj->rowColShiftPer();
}


uint32_t ConfigV3QuadReg::ampReset() const {
  return m_xtcObj->ampReset();
}


uint32_t ConfigV3QuadReg::digCount() const {
  return m_xtcObj->digCount();
}


uint32_t ConfigV3QuadReg::digPeriod() const {
  return m_xtcObj->digPeriod();
}


uint32_t ConfigV3QuadReg::biasTuning() const {
  return m_xtcObj->biasTuning();
}


uint32_t ConfigV3QuadReg::pdpmndnmBalance() const {
  return m_xtcObj->pdpmndnmBalance();
}

const Psana::CsPad::CsPadReadOnlyCfg& ConfigV3QuadReg::ro() const { return _readOnly; }
const Psana::CsPad::CsPadDigitalPotsCfg& ConfigV3QuadReg::dp() const { return _digitalPots; }
const Psana::CsPad::CsPadGainMapCfg& ConfigV3QuadReg::gm() const { return _gainMap; }
ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->quads_shape();
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ConfigV1QuadReg& d = xtcPtr->quads(i0);
      boost::shared_ptr<const Pds::CsPad::ConfigV1QuadReg> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ConfigV1QuadReg(dPtr));
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::concentratorVersion() const {
  return m_xtcObj->concentratorVersion();
}


uint32_t ConfigV1::runDelay() const {
  return m_xtcObj->runDelay();
}


uint32_t ConfigV1::eventCode() const {
  return m_xtcObj->eventCode();
}


uint32_t ConfigV1::inactiveRunMode() const {
  return m_xtcObj->inactiveRunMode();
}


uint32_t ConfigV1::activeRunMode() const {
  return m_xtcObj->activeRunMode();
}


uint32_t ConfigV1::tdi() const {
  return m_xtcObj->tdi();
}


uint32_t ConfigV1::payloadSize() const {
  return m_xtcObj->payloadSize();
}


uint32_t ConfigV1::badAsicMask0() const {
  return m_xtcObj->badAsicMask0();
}


uint32_t ConfigV1::badAsicMask1() const {
  return m_xtcObj->badAsicMask1();
}


uint32_t ConfigV1::asicMask() const {
  return m_xtcObj->asicMask();
}


uint32_t ConfigV1::quadMask() const {
  return m_xtcObj->quadMask();
}

const Psana::CsPad::ConfigV1QuadReg& ConfigV1::quads(uint32_t i0) const { return _quads.at(i0); }

uint32_t ConfigV1::numAsicsRead() const {
  return m_xtcObj->numAsicsRead();
}


uint32_t ConfigV1::numQuads() const {
  return m_xtcObj->numQuads();
}


uint32_t ConfigV1::numSect() const {
  return m_xtcObj->numSect();
}

std::vector<int> ConfigV1::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

ConfigV2::ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV2()
  , m_xtcObj(xtcPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->quads_shape();
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ConfigV1QuadReg& d = xtcPtr->quads(i0);
      boost::shared_ptr<const Pds::CsPad::ConfigV1QuadReg> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ConfigV1QuadReg(dPtr));
    }
  }
}
ConfigV2::~ConfigV2()
{
}


uint32_t ConfigV2::concentratorVersion() const {
  return m_xtcObj->concentratorVersion();
}


uint32_t ConfigV2::runDelay() const {
  return m_xtcObj->runDelay();
}


uint32_t ConfigV2::eventCode() const {
  return m_xtcObj->eventCode();
}


uint32_t ConfigV2::inactiveRunMode() const {
  return m_xtcObj->inactiveRunMode();
}


uint32_t ConfigV2::activeRunMode() const {
  return m_xtcObj->activeRunMode();
}


uint32_t ConfigV2::tdi() const {
  return m_xtcObj->tdi();
}


uint32_t ConfigV2::payloadSize() const {
  return m_xtcObj->payloadSize();
}


uint32_t ConfigV2::badAsicMask0() const {
  return m_xtcObj->badAsicMask0();
}


uint32_t ConfigV2::badAsicMask1() const {
  return m_xtcObj->badAsicMask1();
}


uint32_t ConfigV2::asicMask() const {
  return m_xtcObj->asicMask();
}


uint32_t ConfigV2::quadMask() const {
  return m_xtcObj->quadMask();
}


uint32_t ConfigV2::roiMasks() const {
  return m_xtcObj->roiMasks();
}

const Psana::CsPad::ConfigV1QuadReg& ConfigV2::quads(uint32_t i0) const { return _quads.at(i0); }

uint32_t ConfigV2::numAsicsRead() const {
  return m_xtcObj->numAsicsRead();
}


uint32_t ConfigV2::roiMask(uint32_t iq) const {
  return m_xtcObj->roiMask(iq);
}


uint32_t ConfigV2::numAsicsStored(uint32_t iq) const {
  return m_xtcObj->numAsicsStored(iq);
}


uint32_t ConfigV2::numQuads() const {
  return m_xtcObj->numQuads();
}


uint32_t ConfigV2::numSect() const {
  return m_xtcObj->numSect();
}

std::vector<int> ConfigV2::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

ConfigV3::ConfigV3(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV3()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::CsPad::ProtectionSystemThreshold, 1> NDArray;
    typedef ndarray<const Pds::CsPad::ProtectionSystemThreshold, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->protectionThresholds();
    _protectionThresholds_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _protectionThresholds_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::CsPad::pds_to_psana(*it);
    }
  }
  {
    const std::vector<int>& dims = xtcPtr->quads_shape();
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ConfigV1QuadReg& d = xtcPtr->quads(i0);
      boost::shared_ptr<const Pds::CsPad::ConfigV1QuadReg> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ConfigV1QuadReg(dPtr));
    }
  }
}
ConfigV3::~ConfigV3()
{
}


uint32_t ConfigV3::concentratorVersion() const {
  return m_xtcObj->concentratorVersion();
}


uint32_t ConfigV3::runDelay() const {
  return m_xtcObj->runDelay();
}


uint32_t ConfigV3::eventCode() const {
  return m_xtcObj->eventCode();
}

ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> ConfigV3::protectionThresholds() const { return _protectionThresholds_ndarray_storage_; }

uint32_t ConfigV3::protectionEnable() const {
  return m_xtcObj->protectionEnable();
}


uint32_t ConfigV3::inactiveRunMode() const {
  return m_xtcObj->inactiveRunMode();
}


uint32_t ConfigV3::activeRunMode() const {
  return m_xtcObj->activeRunMode();
}


uint32_t ConfigV3::tdi() const {
  return m_xtcObj->tdi();
}


uint32_t ConfigV3::payloadSize() const {
  return m_xtcObj->payloadSize();
}


uint32_t ConfigV3::badAsicMask0() const {
  return m_xtcObj->badAsicMask0();
}


uint32_t ConfigV3::badAsicMask1() const {
  return m_xtcObj->badAsicMask1();
}


uint32_t ConfigV3::asicMask() const {
  return m_xtcObj->asicMask();
}


uint32_t ConfigV3::quadMask() const {
  return m_xtcObj->quadMask();
}


uint32_t ConfigV3::roiMasks() const {
  return m_xtcObj->roiMasks();
}

const Psana::CsPad::ConfigV1QuadReg& ConfigV3::quads(uint32_t i0) const { return _quads.at(i0); }

uint32_t ConfigV3::numAsicsRead() const {
  return m_xtcObj->numAsicsRead();
}


uint32_t ConfigV3::roiMask(uint32_t iq) const {
  return m_xtcObj->roiMask(iq);
}


uint32_t ConfigV3::numAsicsStored(uint32_t iq) const {
  return m_xtcObj->numAsicsStored(iq);
}


uint32_t ConfigV3::numQuads() const {
  return m_xtcObj->numQuads();
}


uint32_t ConfigV3::numSect() const {
  return m_xtcObj->numSect();
}

std::vector<int> ConfigV3::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

ConfigV4::ConfigV4(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV4()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::CsPad::ProtectionSystemThreshold, 1> NDArray;
    typedef ndarray<const Pds::CsPad::ProtectionSystemThreshold, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->protectionThresholds();
    _protectionThresholds_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _protectionThresholds_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::CsPad::pds_to_psana(*it);
    }
  }
  {
    const std::vector<int>& dims = xtcPtr->quads_shape();
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ConfigV2QuadReg& d = xtcPtr->quads(i0);
      boost::shared_ptr<const Pds::CsPad::ConfigV2QuadReg> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ConfigV2QuadReg(dPtr));
    }
  }
}
ConfigV4::~ConfigV4()
{
}


uint32_t ConfigV4::concentratorVersion() const {
  return m_xtcObj->concentratorVersion();
}


uint32_t ConfigV4::runDelay() const {
  return m_xtcObj->runDelay();
}


uint32_t ConfigV4::eventCode() const {
  return m_xtcObj->eventCode();
}

ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> ConfigV4::protectionThresholds() const { return _protectionThresholds_ndarray_storage_; }

uint32_t ConfigV4::protectionEnable() const {
  return m_xtcObj->protectionEnable();
}


uint32_t ConfigV4::inactiveRunMode() const {
  return m_xtcObj->inactiveRunMode();
}


uint32_t ConfigV4::activeRunMode() const {
  return m_xtcObj->activeRunMode();
}


uint32_t ConfigV4::tdi() const {
  return m_xtcObj->tdi();
}


uint32_t ConfigV4::payloadSize() const {
  return m_xtcObj->payloadSize();
}


uint32_t ConfigV4::badAsicMask0() const {
  return m_xtcObj->badAsicMask0();
}


uint32_t ConfigV4::badAsicMask1() const {
  return m_xtcObj->badAsicMask1();
}


uint32_t ConfigV4::asicMask() const {
  return m_xtcObj->asicMask();
}


uint32_t ConfigV4::quadMask() const {
  return m_xtcObj->quadMask();
}


uint32_t ConfigV4::roiMasks() const {
  return m_xtcObj->roiMasks();
}

const Psana::CsPad::ConfigV2QuadReg& ConfigV4::quads(uint32_t i0) const { return _quads.at(i0); }

uint32_t ConfigV4::numAsicsRead() const {
  return m_xtcObj->numAsicsRead();
}


uint32_t ConfigV4::roiMask(uint32_t iq) const {
  return m_xtcObj->roiMask(iq);
}


uint32_t ConfigV4::numAsicsStored(uint32_t iq) const {
  return m_xtcObj->numAsicsStored(iq);
}


uint32_t ConfigV4::numQuads() const {
  return m_xtcObj->numQuads();
}


uint32_t ConfigV4::numSect() const {
  return m_xtcObj->numSect();
}

std::vector<int> ConfigV4::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

ConfigV5::ConfigV5(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::CsPad::ConfigV5()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::CsPad::ProtectionSystemThreshold, 1> NDArray;
    typedef ndarray<const Pds::CsPad::ProtectionSystemThreshold, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->protectionThresholds();
    _protectionThresholds_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _protectionThresholds_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::CsPad::pds_to_psana(*it);
    }
  }
  {
    const std::vector<int>& dims = xtcPtr->quads_shape();
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ConfigV3QuadReg& d = xtcPtr->quads(i0);
      boost::shared_ptr<const Pds::CsPad::ConfigV3QuadReg> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ConfigV3QuadReg(dPtr));
    }
  }
}
ConfigV5::~ConfigV5()
{
}


uint32_t ConfigV5::concentratorVersion() const {
  return m_xtcObj->concentratorVersion();
}


uint32_t ConfigV5::runDelay() const {
  return m_xtcObj->runDelay();
}


uint32_t ConfigV5::eventCode() const {
  return m_xtcObj->eventCode();
}

ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> ConfigV5::protectionThresholds() const { return _protectionThresholds_ndarray_storage_; }

uint32_t ConfigV5::protectionEnable() const {
  return m_xtcObj->protectionEnable();
}


uint32_t ConfigV5::inactiveRunMode() const {
  return m_xtcObj->inactiveRunMode();
}


uint32_t ConfigV5::activeRunMode() const {
  return m_xtcObj->activeRunMode();
}


uint32_t ConfigV5::internalTriggerDelay() const {
  return m_xtcObj->internalTriggerDelay();
}


uint32_t ConfigV5::tdi() const {
  return m_xtcObj->tdi();
}


uint32_t ConfigV5::payloadSize() const {
  return m_xtcObj->payloadSize();
}


uint32_t ConfigV5::badAsicMask0() const {
  return m_xtcObj->badAsicMask0();
}


uint32_t ConfigV5::badAsicMask1() const {
  return m_xtcObj->badAsicMask1();
}


uint32_t ConfigV5::asicMask() const {
  return m_xtcObj->asicMask();
}


uint32_t ConfigV5::quadMask() const {
  return m_xtcObj->quadMask();
}


uint32_t ConfigV5::roiMasks() const {
  return m_xtcObj->roiMasks();
}

const Psana::CsPad::ConfigV3QuadReg& ConfigV5::quads(uint32_t i0) const { return _quads.at(i0); }

uint32_t ConfigV5::numAsicsRead() const {
  return m_xtcObj->numAsicsRead();
}


uint32_t ConfigV5::roiMask(uint32_t iq) const {
  return m_xtcObj->roiMask(iq);
}


uint32_t ConfigV5::numAsicsStored(uint32_t iq) const {
  return m_xtcObj->numAsicsStored(iq);
}


uint32_t ConfigV5::numQuads() const {
  return m_xtcObj->numQuads();
}


uint32_t ConfigV5::numSect() const {
  return m_xtcObj->numSect();
}

std::vector<int> ConfigV5::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

template <typename Config>
ElementV1<Config>::ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::CsPad::ElementV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
ElementV1<Config>::~ElementV1()
{
}


template <typename Config>
uint32_t ElementV1<Config>::virtual_channel() const {
  return m_xtcObj->virtual_channel();
}


template <typename Config>
uint32_t ElementV1<Config>::lane() const {
  return m_xtcObj->lane();
}


template <typename Config>
uint32_t ElementV1<Config>::tid() const {
  return m_xtcObj->tid();
}


template <typename Config>
uint32_t ElementV1<Config>::acq_count() const {
  return m_xtcObj->acq_count();
}


template <typename Config>
uint32_t ElementV1<Config>::op_code() const {
  return m_xtcObj->op_code();
}


template <typename Config>
uint32_t ElementV1<Config>::quad() const {
  return m_xtcObj->quad();
}


template <typename Config>
uint32_t ElementV1<Config>::seq_count() const {
  return m_xtcObj->seq_count();
}


template <typename Config>
uint32_t ElementV1<Config>::ticks() const {
  return m_xtcObj->ticks();
}


template <typename Config>
uint32_t ElementV1<Config>::fiducials() const {
  return m_xtcObj->fiducials();
}


template <typename Config>
ndarray<const uint16_t, 1> ElementV1<Config>::sb_temp() const {
  return m_xtcObj->sb_temp(m_xtcObj);
}


template <typename Config>
uint32_t ElementV1<Config>::frame_type() const {
  return m_xtcObj->frame_type();
}


template <typename Config>
ndarray<const int16_t, 3> ElementV1<Config>::data() const {
  return m_xtcObj->data(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
uint32_t ElementV1<Config>::sectionMask() const {
  return m_xtcObj->sectionMask(*m_cfgPtr);
}


template <typename Config>
float ElementV1<Config>::common_mode(uint32_t section) const {
  return m_xtcObj->common_mode(section);
}

template class ElementV1<Pds::CsPad::ConfigV1>;
template class ElementV1<Pds::CsPad::ConfigV2>;
template class ElementV1<Pds::CsPad::ConfigV3>;
template class ElementV1<Pds::CsPad::ConfigV4>;
template class ElementV1<Pds::CsPad::ConfigV5>;
template <typename Config>
DataV1<Config>::DataV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::CsPad::DataV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->quads_shape(*cfgPtr);
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ElementV1& d = xtcPtr->quads(*cfgPtr, i0);
      boost::shared_ptr<const Pds::CsPad::ElementV1> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ElementV1<Config>(dPtr, cfgPtr));
    }
  }
}
template <typename Config>
DataV1<Config>::~DataV1()
{
}

template <typename Config>
const Psana::CsPad::ElementV1& DataV1<Config>::quads(uint32_t i0) const { return _quads.at(i0); }
template <typename Config>
std::vector<int> DataV1<Config>::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

template class DataV1<Pds::CsPad::ConfigV1>;
template class DataV1<Pds::CsPad::ConfigV2>;
template class DataV1<Pds::CsPad::ConfigV3>;
template class DataV1<Pds::CsPad::ConfigV4>;
template class DataV1<Pds::CsPad::ConfigV5>;
template <typename Config>
ElementV2<Config>::ElementV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::CsPad::ElementV2()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
ElementV2<Config>::~ElementV2()
{
}


template <typename Config>
uint32_t ElementV2<Config>::virtual_channel() const {
  return m_xtcObj->virtual_channel();
}


template <typename Config>
uint32_t ElementV2<Config>::lane() const {
  return m_xtcObj->lane();
}


template <typename Config>
uint32_t ElementV2<Config>::tid() const {
  return m_xtcObj->tid();
}


template <typename Config>
uint32_t ElementV2<Config>::acq_count() const {
  return m_xtcObj->acq_count();
}


template <typename Config>
uint32_t ElementV2<Config>::op_code() const {
  return m_xtcObj->op_code();
}


template <typename Config>
uint32_t ElementV2<Config>::quad() const {
  return m_xtcObj->quad();
}


template <typename Config>
uint32_t ElementV2<Config>::seq_count() const {
  return m_xtcObj->seq_count();
}


template <typename Config>
uint32_t ElementV2<Config>::ticks() const {
  return m_xtcObj->ticks();
}


template <typename Config>
uint32_t ElementV2<Config>::fiducials() const {
  return m_xtcObj->fiducials();
}


template <typename Config>
ndarray<const uint16_t, 1> ElementV2<Config>::sb_temp() const {
  return m_xtcObj->sb_temp(m_xtcObj);
}


template <typename Config>
uint32_t ElementV2<Config>::frame_type() const {
  return m_xtcObj->frame_type();
}


template <typename Config>
ndarray<const int16_t, 3> ElementV2<Config>::data() const {
  return m_xtcObj->data(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
uint32_t ElementV2<Config>::sectionMask() const {
  return m_xtcObj->sectionMask(*m_cfgPtr);
}


template <typename Config>
float ElementV2<Config>::common_mode(uint32_t section) const {
  return m_xtcObj->common_mode(section);
}

template class ElementV2<Pds::CsPad::ConfigV2>;
template class ElementV2<Pds::CsPad::ConfigV3>;
template class ElementV2<Pds::CsPad::ConfigV4>;
template class ElementV2<Pds::CsPad::ConfigV5>;
template <typename Config>
DataV2<Config>::DataV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::CsPad::DataV2()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->quads_shape(*cfgPtr);
    _quads.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::CsPad::ElementV2& d = xtcPtr->quads(*cfgPtr, i0);
      boost::shared_ptr<const Pds::CsPad::ElementV2> dPtr(m_xtcObj, &d);
      _quads.push_back(psddl_pds2psana::CsPad::ElementV2<Config>(dPtr, cfgPtr));
    }
  }
}
template <typename Config>
DataV2<Config>::~DataV2()
{
}

template <typename Config>
const Psana::CsPad::ElementV2& DataV2<Config>::quads(uint32_t i0) const { return _quads.at(i0); }
template <typename Config>
std::vector<int> DataV2<Config>::quads_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_quads.size());
  return shape;
}

template class DataV2<Pds::CsPad::ConfigV2>;
template class DataV2<Pds::CsPad::ConfigV3>;
template class DataV2<Pds::CsPad::ConfigV4>;
template class DataV2<Pds::CsPad::ConfigV5>;
} // namespace CsPad
} // namespace psddl_pds2psana
