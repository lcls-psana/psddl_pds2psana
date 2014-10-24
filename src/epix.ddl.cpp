
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/epix.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Epix {
AsicConfigV1::AsicConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Epix::AsicConfigV1()
  , m_xtcObj(xtcPtr)
{
}
AsicConfigV1::~AsicConfigV1()
{
}


uint8_t AsicConfigV1::monostPulser() const {
  return m_xtcObj->monostPulser();
}


uint8_t AsicConfigV1::dummyTest() const {
  return m_xtcObj->dummyTest();
}


uint8_t AsicConfigV1::dummyMask() const {
  return m_xtcObj->dummyMask();
}


uint16_t AsicConfigV1::pulser() const {
  return m_xtcObj->pulser();
}


uint8_t AsicConfigV1::pbit() const {
  return m_xtcObj->pbit();
}


uint8_t AsicConfigV1::atest() const {
  return m_xtcObj->atest();
}


uint8_t AsicConfigV1::test() const {
  return m_xtcObj->test();
}


uint8_t AsicConfigV1::sabTest() const {
  return m_xtcObj->sabTest();
}


uint8_t AsicConfigV1::hrTest() const {
  return m_xtcObj->hrTest();
}


uint8_t AsicConfigV1::digMon1() const {
  return m_xtcObj->digMon1();
}


uint8_t AsicConfigV1::digMon2() const {
  return m_xtcObj->digMon2();
}


uint8_t AsicConfigV1::pulserDac() const {
  return m_xtcObj->pulserDac();
}


uint8_t AsicConfigV1::Dm1En() const {
  return m_xtcObj->Dm1En();
}


uint8_t AsicConfigV1::Dm2En() const {
  return m_xtcObj->Dm2En();
}


uint8_t AsicConfigV1::slvdSBit() const {
  return m_xtcObj->slvdSBit();
}


uint8_t AsicConfigV1::VRefDac() const {
  return m_xtcObj->VRefDac();
}


uint8_t AsicConfigV1::TpsTComp() const {
  return m_xtcObj->TpsTComp();
}


uint8_t AsicConfigV1::TpsMux() const {
  return m_xtcObj->TpsMux();
}


uint8_t AsicConfigV1::RoMonost() const {
  return m_xtcObj->RoMonost();
}


uint8_t AsicConfigV1::TpsGr() const {
  return m_xtcObj->TpsGr();
}


uint8_t AsicConfigV1::S2dGr() const {
  return m_xtcObj->S2dGr();
}


uint8_t AsicConfigV1::PpOcbS2d() const {
  return m_xtcObj->PpOcbS2d();
}


uint8_t AsicConfigV1::Ocb() const {
  return m_xtcObj->Ocb();
}


uint8_t AsicConfigV1::Monost() const {
  return m_xtcObj->Monost();
}


uint8_t AsicConfigV1::FastppEnable() const {
  return m_xtcObj->FastppEnable();
}


uint8_t AsicConfigV1::Preamp() const {
  return m_xtcObj->Preamp();
}


uint8_t AsicConfigV1::PixelCb() const {
  return m_xtcObj->PixelCb();
}


uint8_t AsicConfigV1::S2dTComp() const {
  return m_xtcObj->S2dTComp();
}


uint8_t AsicConfigV1::FilterDac() const {
  return m_xtcObj->FilterDac();
}


uint8_t AsicConfigV1::TC() const {
  return m_xtcObj->TC();
}


uint8_t AsicConfigV1::S2d() const {
  return m_xtcObj->S2d();
}


uint8_t AsicConfigV1::S2dDacBias() const {
  return m_xtcObj->S2dDacBias();
}


uint8_t AsicConfigV1::TpsTcDac() const {
  return m_xtcObj->TpsTcDac();
}


uint8_t AsicConfigV1::TpsDac() const {
  return m_xtcObj->TpsDac();
}


uint8_t AsicConfigV1::S2dTcDac() const {
  return m_xtcObj->S2dTcDac();
}


uint8_t AsicConfigV1::S2dDac() const {
  return m_xtcObj->S2dDac();
}


uint8_t AsicConfigV1::TestBe() const {
  return m_xtcObj->TestBe();
}


uint8_t AsicConfigV1::IsEn() const {
  return m_xtcObj->IsEn();
}


uint8_t AsicConfigV1::DelExec() const {
  return m_xtcObj->DelExec();
}


uint8_t AsicConfigV1::DelCckReg() const {
  return m_xtcObj->DelCckReg();
}


uint16_t AsicConfigV1::RowStartAddr() const {
  return m_xtcObj->RowStartAddr();
}


uint16_t AsicConfigV1::RowStopAddr() const {
  return m_xtcObj->RowStopAddr();
}


uint8_t AsicConfigV1::ColStartAddr() const {
  return m_xtcObj->ColStartAddr();
}


uint8_t AsicConfigV1::ColStopAddr() const {
  return m_xtcObj->ColStopAddr();
}


uint16_t AsicConfigV1::chipID() const {
  return m_xtcObj->chipID();
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Epix::ConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->asics_shape();
    _asics.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::Epix::AsicConfigV1& d = xtcPtr->asics(i0);
      boost::shared_ptr<const Pds::Epix::AsicConfigV1> dPtr(m_xtcObj, &d);
      _asics.push_back(psddl_pds2psana::Epix::AsicConfigV1(dPtr));
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::version() const {
  return m_xtcObj->version();
}


uint32_t ConfigV1::runTrigDelay() const {
  return m_xtcObj->runTrigDelay();
}


uint32_t ConfigV1::daqTrigDelay() const {
  return m_xtcObj->daqTrigDelay();
}


uint32_t ConfigV1::dacSetting() const {
  return m_xtcObj->dacSetting();
}


uint8_t ConfigV1::asicGR() const {
  return m_xtcObj->asicGR();
}


uint8_t ConfigV1::asicAcq() const {
  return m_xtcObj->asicAcq();
}


uint8_t ConfigV1::asicR0() const {
  return m_xtcObj->asicR0();
}


uint8_t ConfigV1::asicPpmat() const {
  return m_xtcObj->asicPpmat();
}


uint8_t ConfigV1::asicPpbe() const {
  return m_xtcObj->asicPpbe();
}


uint8_t ConfigV1::asicRoClk() const {
  return m_xtcObj->asicRoClk();
}


uint8_t ConfigV1::asicGRControl() const {
  return m_xtcObj->asicGRControl();
}


uint8_t ConfigV1::asicAcqControl() const {
  return m_xtcObj->asicAcqControl();
}


uint8_t ConfigV1::asicR0Control() const {
  return m_xtcObj->asicR0Control();
}


uint8_t ConfigV1::asicPpmatControl() const {
  return m_xtcObj->asicPpmatControl();
}


uint8_t ConfigV1::asicPpbeControl() const {
  return m_xtcObj->asicPpbeControl();
}


uint8_t ConfigV1::asicR0ClkControl() const {
  return m_xtcObj->asicR0ClkControl();
}


uint8_t ConfigV1::prepulseR0En() const {
  return m_xtcObj->prepulseR0En();
}


uint32_t ConfigV1::adcStreamMode() const {
  return m_xtcObj->adcStreamMode();
}


uint8_t ConfigV1::testPatternEnable() const {
  return m_xtcObj->testPatternEnable();
}


uint32_t ConfigV1::acqToAsicR0Delay() const {
  return m_xtcObj->acqToAsicR0Delay();
}


uint32_t ConfigV1::asicR0ToAsicAcq() const {
  return m_xtcObj->asicR0ToAsicAcq();
}


uint32_t ConfigV1::asicAcqWidth() const {
  return m_xtcObj->asicAcqWidth();
}


uint32_t ConfigV1::asicAcqLToPPmatL() const {
  return m_xtcObj->asicAcqLToPPmatL();
}


uint32_t ConfigV1::asicRoClkHalfT() const {
  return m_xtcObj->asicRoClkHalfT();
}


uint32_t ConfigV1::adcReadsPerPixel() const {
  return m_xtcObj->adcReadsPerPixel();
}


uint32_t ConfigV1::adcClkHalfT() const {
  return m_xtcObj->adcClkHalfT();
}


uint32_t ConfigV1::asicR0Width() const {
  return m_xtcObj->asicR0Width();
}


uint32_t ConfigV1::adcPipelineDelay() const {
  return m_xtcObj->adcPipelineDelay();
}


uint32_t ConfigV1::prepulseR0Width() const {
  return m_xtcObj->prepulseR0Width();
}


uint32_t ConfigV1::prepulseR0Delay() const {
  return m_xtcObj->prepulseR0Delay();
}


uint32_t ConfigV1::digitalCardId0() const {
  return m_xtcObj->digitalCardId0();
}


uint32_t ConfigV1::digitalCardId1() const {
  return m_xtcObj->digitalCardId1();
}


uint32_t ConfigV1::analogCardId0() const {
  return m_xtcObj->analogCardId0();
}


uint32_t ConfigV1::analogCardId1() const {
  return m_xtcObj->analogCardId1();
}


uint32_t ConfigV1::lastRowExclusions() const {
  return m_xtcObj->lastRowExclusions();
}


uint32_t ConfigV1::numberOfAsicsPerRow() const {
  return m_xtcObj->numberOfAsicsPerRow();
}


uint32_t ConfigV1::numberOfAsicsPerColumn() const {
  return m_xtcObj->numberOfAsicsPerColumn();
}


uint32_t ConfigV1::numberOfRowsPerAsic() const {
  return m_xtcObj->numberOfRowsPerAsic();
}


uint32_t ConfigV1::numberOfPixelsPerAsicRow() const {
  return m_xtcObj->numberOfPixelsPerAsicRow();
}


uint32_t ConfigV1::baseClockFrequency() const {
  return m_xtcObj->baseClockFrequency();
}


uint32_t ConfigV1::asicMask() const {
  return m_xtcObj->asicMask();
}

const Psana::Epix::AsicConfigV1& ConfigV1::asics(uint32_t i0) const { return _asics[i0]; }

ndarray<const uint32_t, 3> ConfigV1::asicPixelTestArray() const {
  return m_xtcObj->asicPixelTestArray(m_xtcObj);
}


ndarray<const uint32_t, 3> ConfigV1::asicPixelMaskArray() const {
  return m_xtcObj->asicPixelMaskArray(m_xtcObj);
}


uint32_t ConfigV1::numberOfRows() const {
  return m_xtcObj->numberOfRows();
}


uint32_t ConfigV1::numberOfColumns() const {
  return m_xtcObj->numberOfColumns();
}


uint32_t ConfigV1::numberOfAsics() const {
  return m_xtcObj->numberOfAsics();
}

std::vector<int> ConfigV1::asics_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_asics.size());
  return shape;
}

Asic10kConfigV1::Asic10kConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Epix::Asic10kConfigV1()
  , m_xtcObj(xtcPtr)
{
}
Asic10kConfigV1::~Asic10kConfigV1()
{
}


uint8_t Asic10kConfigV1::CompTH_DAC() const {
  return m_xtcObj->CompTH_DAC();
}


uint8_t Asic10kConfigV1::CompEn_0() const {
  return m_xtcObj->CompEn_0();
}


uint8_t Asic10kConfigV1::PulserSync() const {
  return m_xtcObj->PulserSync();
}


uint8_t Asic10kConfigV1::dummyTest() const {
  return m_xtcObj->dummyTest();
}


uint8_t Asic10kConfigV1::dummyMask() const {
  return m_xtcObj->dummyMask();
}


uint8_t Asic10kConfigV1::dummyG() const {
  return m_xtcObj->dummyG();
}


uint8_t Asic10kConfigV1::dummyGA() const {
  return m_xtcObj->dummyGA();
}


uint16_t Asic10kConfigV1::dummyUpper12bits() const {
  return m_xtcObj->dummyUpper12bits();
}


uint16_t Asic10kConfigV1::pulser() const {
  return m_xtcObj->pulser();
}


uint8_t Asic10kConfigV1::pbit() const {
  return m_xtcObj->pbit();
}


uint8_t Asic10kConfigV1::atest() const {
  return m_xtcObj->atest();
}


uint8_t Asic10kConfigV1::test() const {
  return m_xtcObj->test();
}


uint8_t Asic10kConfigV1::sabTest() const {
  return m_xtcObj->sabTest();
}


uint8_t Asic10kConfigV1::hrTest() const {
  return m_xtcObj->hrTest();
}


uint8_t Asic10kConfigV1::pulserR() const {
  return m_xtcObj->pulserR();
}


uint8_t Asic10kConfigV1::digMon1() const {
  return m_xtcObj->digMon1();
}


uint8_t Asic10kConfigV1::digMon2() const {
  return m_xtcObj->digMon2();
}


uint8_t Asic10kConfigV1::pulserDac() const {
  return m_xtcObj->pulserDac();
}


uint8_t Asic10kConfigV1::monostPulser() const {
  return m_xtcObj->monostPulser();
}


uint8_t Asic10kConfigV1::CompEn_1() const {
  return m_xtcObj->CompEn_1();
}


uint8_t Asic10kConfigV1::CompEn_2() const {
  return m_xtcObj->CompEn_2();
}


uint8_t Asic10kConfigV1::Dm1En() const {
  return m_xtcObj->Dm1En();
}


uint8_t Asic10kConfigV1::Dm2En() const {
  return m_xtcObj->Dm2En();
}


uint8_t Asic10kConfigV1::emph_bd() const {
  return m_xtcObj->emph_bd();
}


uint8_t Asic10kConfigV1::emph_bc() const {
  return m_xtcObj->emph_bc();
}


uint8_t Asic10kConfigV1::VRefDac() const {
  return m_xtcObj->VRefDac();
}


uint8_t Asic10kConfigV1::vrefLow() const {
  return m_xtcObj->vrefLow();
}


uint8_t Asic10kConfigV1::TpsTComp() const {
  return m_xtcObj->TpsTComp();
}


uint8_t Asic10kConfigV1::TpsMux() const {
  return m_xtcObj->TpsMux();
}


uint8_t Asic10kConfigV1::RoMonost() const {
  return m_xtcObj->RoMonost();
}


uint8_t Asic10kConfigV1::TpsGr() const {
  return m_xtcObj->TpsGr();
}


uint8_t Asic10kConfigV1::S2dGr() const {
  return m_xtcObj->S2dGr();
}


uint8_t Asic10kConfigV1::PpOcbS2d() const {
  return m_xtcObj->PpOcbS2d();
}


uint8_t Asic10kConfigV1::Ocb() const {
  return m_xtcObj->Ocb();
}


uint8_t Asic10kConfigV1::Monost() const {
  return m_xtcObj->Monost();
}


uint8_t Asic10kConfigV1::FastppEnable() const {
  return m_xtcObj->FastppEnable();
}


uint8_t Asic10kConfigV1::Preamp() const {
  return m_xtcObj->Preamp();
}


uint8_t Asic10kConfigV1::PixelCb() const {
  return m_xtcObj->PixelCb();
}


uint8_t Asic10kConfigV1::Vld1_b() const {
  return m_xtcObj->Vld1_b();
}


uint8_t Asic10kConfigV1::S2dTComp() const {
  return m_xtcObj->S2dTComp();
}


uint8_t Asic10kConfigV1::FilterDac() const {
  return m_xtcObj->FilterDac();
}


uint8_t Asic10kConfigV1::testVDTransmitter() const {
  return m_xtcObj->testVDTransmitter();
}


uint8_t Asic10kConfigV1::TC() const {
  return m_xtcObj->TC();
}


uint8_t Asic10kConfigV1::S2d() const {
  return m_xtcObj->S2d();
}


uint8_t Asic10kConfigV1::S2dDacBias() const {
  return m_xtcObj->S2dDacBias();
}


uint8_t Asic10kConfigV1::TpsTcDac() const {
  return m_xtcObj->TpsTcDac();
}


uint8_t Asic10kConfigV1::TpsDac() const {
  return m_xtcObj->TpsDac();
}


uint8_t Asic10kConfigV1::S2dTcDac() const {
  return m_xtcObj->S2dTcDac();
}


uint8_t Asic10kConfigV1::S2dDac() const {
  return m_xtcObj->S2dDac();
}


uint8_t Asic10kConfigV1::TestBe() const {
  return m_xtcObj->TestBe();
}


uint8_t Asic10kConfigV1::IsEn() const {
  return m_xtcObj->IsEn();
}


uint8_t Asic10kConfigV1::DelExec() const {
  return m_xtcObj->DelExec();
}


uint8_t Asic10kConfigV1::DelCckReg() const {
  return m_xtcObj->DelCckReg();
}


uint8_t Asic10kConfigV1::RO_rst_en() const {
  return m_xtcObj->RO_rst_en();
}


uint8_t Asic10kConfigV1::slvdSBit() const {
  return m_xtcObj->slvdSBit();
}


uint8_t Asic10kConfigV1::FELmode() const {
  return m_xtcObj->FELmode();
}


uint8_t Asic10kConfigV1::CompEnOn() const {
  return m_xtcObj->CompEnOn();
}


uint16_t Asic10kConfigV1::RowStartAddr() const {
  return m_xtcObj->RowStartAddr();
}


uint16_t Asic10kConfigV1::RowStopAddr() const {
  return m_xtcObj->RowStopAddr();
}


uint8_t Asic10kConfigV1::ColStartAddr() const {
  return m_xtcObj->ColStartAddr();
}


uint8_t Asic10kConfigV1::ColStopAddr() const {
  return m_xtcObj->ColStopAddr();
}


uint16_t Asic10kConfigV1::chipID() const {
  return m_xtcObj->chipID();
}

Config10KV1::Config10KV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Epix::Config10KV1()
  , m_xtcObj(xtcPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->asics_shape();
    _asics.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::Epix::Asic10kConfigV1& d = xtcPtr->asics(i0);
      boost::shared_ptr<const Pds::Epix::Asic10kConfigV1> dPtr(m_xtcObj, &d);
      _asics.push_back(psddl_pds2psana::Epix::Asic10kConfigV1(dPtr));
    }
  }
}
Config10KV1::~Config10KV1()
{
}


uint32_t Config10KV1::version() const {
  return m_xtcObj->version();
}


uint32_t Config10KV1::runTrigDelay() const {
  return m_xtcObj->runTrigDelay();
}


uint32_t Config10KV1::daqTrigDelay() const {
  return m_xtcObj->daqTrigDelay();
}


uint32_t Config10KV1::dacSetting() const {
  return m_xtcObj->dacSetting();
}


uint8_t Config10KV1::asicGR() const {
  return m_xtcObj->asicGR();
}


uint8_t Config10KV1::asicAcq() const {
  return m_xtcObj->asicAcq();
}


uint8_t Config10KV1::asicR0() const {
  return m_xtcObj->asicR0();
}


uint8_t Config10KV1::asicPpmat() const {
  return m_xtcObj->asicPpmat();
}


uint8_t Config10KV1::asicPpbe() const {
  return m_xtcObj->asicPpbe();
}


uint8_t Config10KV1::asicRoClk() const {
  return m_xtcObj->asicRoClk();
}


uint8_t Config10KV1::asicGRControl() const {
  return m_xtcObj->asicGRControl();
}


uint8_t Config10KV1::asicAcqControl() const {
  return m_xtcObj->asicAcqControl();
}


uint8_t Config10KV1::asicR0Control() const {
  return m_xtcObj->asicR0Control();
}


uint8_t Config10KV1::asicPpmatControl() const {
  return m_xtcObj->asicPpmatControl();
}


uint8_t Config10KV1::asicPpbeControl() const {
  return m_xtcObj->asicPpbeControl();
}


uint8_t Config10KV1::asicR0ClkControl() const {
  return m_xtcObj->asicR0ClkControl();
}


uint8_t Config10KV1::prepulseR0En() const {
  return m_xtcObj->prepulseR0En();
}


uint32_t Config10KV1::adcStreamMode() const {
  return m_xtcObj->adcStreamMode();
}


uint8_t Config10KV1::testPatternEnable() const {
  return m_xtcObj->testPatternEnable();
}


uint8_t Config10KV1::SyncMode() const {
  return m_xtcObj->SyncMode();
}


uint8_t Config10KV1::R0Mode() const {
  return m_xtcObj->R0Mode();
}


uint32_t Config10KV1::DoutPipelineDelay() const {
  return m_xtcObj->DoutPipelineDelay();
}


uint32_t Config10KV1::acqToAsicR0Delay() const {
  return m_xtcObj->acqToAsicR0Delay();
}


uint32_t Config10KV1::asicR0ToAsicAcq() const {
  return m_xtcObj->asicR0ToAsicAcq();
}


uint32_t Config10KV1::asicAcqWidth() const {
  return m_xtcObj->asicAcqWidth();
}


uint32_t Config10KV1::asicAcqLToPPmatL() const {
  return m_xtcObj->asicAcqLToPPmatL();
}


uint32_t Config10KV1::asicRoClkHalfT() const {
  return m_xtcObj->asicRoClkHalfT();
}


uint32_t Config10KV1::adcReadsPerPixel() const {
  return m_xtcObj->adcReadsPerPixel();
}


uint32_t Config10KV1::adcClkHalfT() const {
  return m_xtcObj->adcClkHalfT();
}


uint32_t Config10KV1::asicR0Width() const {
  return m_xtcObj->asicR0Width();
}


uint32_t Config10KV1::adcPipelineDelay() const {
  return m_xtcObj->adcPipelineDelay();
}


uint16_t Config10KV1::SyncWidth() const {
  return m_xtcObj->SyncWidth();
}


uint16_t Config10KV1::SyncDelay() const {
  return m_xtcObj->SyncDelay();
}


uint32_t Config10KV1::prepulseR0Width() const {
  return m_xtcObj->prepulseR0Width();
}


uint32_t Config10KV1::prepulseR0Delay() const {
  return m_xtcObj->prepulseR0Delay();
}


uint32_t Config10KV1::digitalCardId0() const {
  return m_xtcObj->digitalCardId0();
}


uint32_t Config10KV1::digitalCardId1() const {
  return m_xtcObj->digitalCardId1();
}


uint32_t Config10KV1::analogCardId0() const {
  return m_xtcObj->analogCardId0();
}


uint32_t Config10KV1::analogCardId1() const {
  return m_xtcObj->analogCardId1();
}


uint32_t Config10KV1::lastRowExclusions() const {
  return m_xtcObj->lastRowExclusions();
}


uint32_t Config10KV1::numberOfAsicsPerRow() const {
  return m_xtcObj->numberOfAsicsPerRow();
}


uint32_t Config10KV1::numberOfAsicsPerColumn() const {
  return m_xtcObj->numberOfAsicsPerColumn();
}


uint32_t Config10KV1::numberOfRowsPerAsic() const {
  return m_xtcObj->numberOfRowsPerAsic();
}


uint32_t Config10KV1::numberOfPixelsPerAsicRow() const {
  return m_xtcObj->numberOfPixelsPerAsicRow();
}


uint32_t Config10KV1::baseClockFrequency() const {
  return m_xtcObj->baseClockFrequency();
}


uint32_t Config10KV1::asicMask() const {
  return m_xtcObj->asicMask();
}


uint8_t Config10KV1::scopeEnable() const {
  return m_xtcObj->scopeEnable();
}


uint8_t Config10KV1::scopeTrigEdge() const {
  return m_xtcObj->scopeTrigEdge();
}


uint8_t Config10KV1::scopeTrigChan() const {
  return m_xtcObj->scopeTrigChan();
}


uint8_t Config10KV1::scopeArmMode() const {
  return m_xtcObj->scopeArmMode();
}


uint16_t Config10KV1::scopeADCThreshold() const {
  return m_xtcObj->scopeADCThreshold();
}


uint16_t Config10KV1::scopeTrigHoldoff() const {
  return m_xtcObj->scopeTrigHoldoff();
}


uint16_t Config10KV1::scopeTrigOffset() const {
  return m_xtcObj->scopeTrigOffset();
}


uint16_t Config10KV1::scopeTraceLength() const {
  return m_xtcObj->scopeTraceLength();
}


uint16_t Config10KV1::scopeADCsameplesToSkip() const {
  return m_xtcObj->scopeADCsameplesToSkip();
}


uint8_t Config10KV1::scopeChanAwaveformSelect() const {
  return m_xtcObj->scopeChanAwaveformSelect();
}


uint8_t Config10KV1::scopeChanBwaveformSelect() const {
  return m_xtcObj->scopeChanBwaveformSelect();
}

const Psana::Epix::Asic10kConfigV1& Config10KV1::asics(uint32_t i0) const { return _asics[i0]; }

ndarray<const uint16_t, 3> Config10KV1::asicPixelConfigArray() const {
  return m_xtcObj->asicPixelConfigArray(m_xtcObj);
}


uint32_t Config10KV1::numberOfRows() const {
  return m_xtcObj->numberOfRows();
}


uint32_t Config10KV1::numberOfColumns() const {
  return m_xtcObj->numberOfColumns();
}


uint32_t Config10KV1::numberOfAsics() const {
  return m_xtcObj->numberOfAsics();
}

std::vector<int> Config10KV1::asics_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_asics.size());
  return shape;
}

Asic100aConfigV1::Asic100aConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Epix::Asic100aConfigV1()
  , m_xtcObj(xtcPtr)
{
}
Asic100aConfigV1::~Asic100aConfigV1()
{
}


uint8_t Asic100aConfigV1::pulserVsPixelOnDelay() const {
  return m_xtcObj->pulserVsPixelOnDelay();
}


uint8_t Asic100aConfigV1::pulserSync() const {
  return m_xtcObj->pulserSync();
}


uint8_t Asic100aConfigV1::dummyTest() const {
  return m_xtcObj->dummyTest();
}


uint8_t Asic100aConfigV1::dummyMask() const {
  return m_xtcObj->dummyMask();
}


uint16_t Asic100aConfigV1::testPulserLevel() const {
  return m_xtcObj->testPulserLevel();
}


uint8_t Asic100aConfigV1::pulserCounterDirection() const {
  return m_xtcObj->pulserCounterDirection();
}


uint8_t Asic100aConfigV1::automaticTestModeEnable() const {
  return m_xtcObj->automaticTestModeEnable();
}


uint8_t Asic100aConfigV1::testMode() const {
  return m_xtcObj->testMode();
}


uint8_t Asic100aConfigV1::testModeWithDarkFrame() const {
  return m_xtcObj->testModeWithDarkFrame();
}


uint8_t Asic100aConfigV1::highResolutionModeTest() const {
  return m_xtcObj->highResolutionModeTest();
}


uint8_t Asic100aConfigV1::pulserReset() const {
  return m_xtcObj->pulserReset();
}


uint8_t Asic100aConfigV1::digitalMonitorMux1() const {
  return m_xtcObj->digitalMonitorMux1();
}


uint8_t Asic100aConfigV1::digitalMonitorMux2() const {
  return m_xtcObj->digitalMonitorMux2();
}


uint8_t Asic100aConfigV1::testPulserCurrent() const {
  return m_xtcObj->testPulserCurrent();
}


uint8_t Asic100aConfigV1::testPointSystemOutputDynamicRange() const {
  return m_xtcObj->testPointSystemOutputDynamicRange();
}


uint8_t Asic100aConfigV1::digitalMonitor1Enable() const {
  return m_xtcObj->digitalMonitor1Enable();
}


uint8_t Asic100aConfigV1::digitalMonitor2Enable() const {
  return m_xtcObj->digitalMonitor2Enable();
}


uint8_t Asic100aConfigV1::LVDS_ImpedenceMatchingEnable() const {
  return m_xtcObj->LVDS_ImpedenceMatchingEnable();
}


uint8_t Asic100aConfigV1::VRefBaselineDac() const {
  return m_xtcObj->VRefBaselineDac();
}


uint8_t Asic100aConfigV1::extraRowsLowReferenceValue() const {
  return m_xtcObj->extraRowsLowReferenceValue();
}


uint8_t Asic100aConfigV1::testPointSystemTemperatureCompensationEnable() const {
  return m_xtcObj->testPointSystemTemperatureCompensationEnable();
}


uint8_t Asic100aConfigV1::testPointSytemInputSelect() const {
  return m_xtcObj->testPointSytemInputSelect();
}


uint8_t Asic100aConfigV1::programmableReadoutDelay() const {
  return m_xtcObj->programmableReadoutDelay();
}


uint8_t Asic100aConfigV1::outputDriverOutputDynamicRange0() const {
  return m_xtcObj->outputDriverOutputDynamicRange0();
}


uint8_t Asic100aConfigV1::outputDriverOutputDynamicRange1() const {
  return m_xtcObj->outputDriverOutputDynamicRange1();
}


uint8_t Asic100aConfigV1::balconyEnable() const {
  return m_xtcObj->balconyEnable();
}


uint8_t Asic100aConfigV1::balconyDriverCurrent() const {
  return m_xtcObj->balconyDriverCurrent();
}


uint8_t Asic100aConfigV1::fastPowerPulsingSpeed() const {
  return m_xtcObj->fastPowerPulsingSpeed();
}


uint8_t Asic100aConfigV1::fastPowerPulsingEnable() const {
  return m_xtcObj->fastPowerPulsingEnable();
}


uint8_t Asic100aConfigV1::preamplifierCurrent() const {
  return m_xtcObj->preamplifierCurrent();
}


uint8_t Asic100aConfigV1::pixelOutputBufferCurrent() const {
  return m_xtcObj->pixelOutputBufferCurrent();
}


uint8_t Asic100aConfigV1::pixelBufferAndPreamplifierDrivingCapabilities() const {
  return m_xtcObj->pixelBufferAndPreamplifierDrivingCapabilities();
}


uint8_t Asic100aConfigV1::outputDriverTemperatureCompensationEnable() const {
  return m_xtcObj->outputDriverTemperatureCompensationEnable();
}


uint8_t Asic100aConfigV1::pixelFilterLevel() const {
  return m_xtcObj->pixelFilterLevel();
}


uint8_t Asic100aConfigV1::bandGapReferenceTemperatureCompensationBits() const {
  return m_xtcObj->bandGapReferenceTemperatureCompensationBits();
}


uint8_t Asic100aConfigV1::outputDriverDrivingCapabilitiesAndStability() const {
  return m_xtcObj->outputDriverDrivingCapabilitiesAndStability();
}


uint8_t Asic100aConfigV1::outputDriverDacReferenceBias() const {
  return m_xtcObj->outputDriverDacReferenceBias();
}


uint8_t Asic100aConfigV1::testPointSystemTemperatureCompensationGain() const {
  return m_xtcObj->testPointSystemTemperatureCompensationGain();
}


uint8_t Asic100aConfigV1::testPointSystemInputCommonMode() const {
  return m_xtcObj->testPointSystemInputCommonMode();
}


uint8_t Asic100aConfigV1::outputDriverTemperatureCompensationGain0() const {
  return m_xtcObj->outputDriverTemperatureCompensationGain0();
}


uint8_t Asic100aConfigV1::outputDriverInputCommonMode0() const {
  return m_xtcObj->outputDriverInputCommonMode0();
}


uint8_t Asic100aConfigV1::testBackEnd() const {
  return m_xtcObj->testBackEnd();
}


uint8_t Asic100aConfigV1::interleavedReadOutEnable() const {
  return m_xtcObj->interleavedReadOutEnable();
}


uint8_t Asic100aConfigV1::EXEC_DelayEnable() const {
  return m_xtcObj->EXEC_DelayEnable();
}


uint8_t Asic100aConfigV1::CCK_RegDelayEnable() const {
  return m_xtcObj->CCK_RegDelayEnable();
}


uint8_t Asic100aConfigV1::syncPinEnable() const {
  return m_xtcObj->syncPinEnable();
}


uint16_t Asic100aConfigV1::RowStartAddr() const {
  return m_xtcObj->RowStartAddr();
}


uint16_t Asic100aConfigV1::RowStopAddr() const {
  return m_xtcObj->RowStopAddr();
}


uint8_t Asic100aConfigV1::ColumnStartAddr() const {
  return m_xtcObj->ColumnStartAddr();
}


uint8_t Asic100aConfigV1::ColumnStopAddr() const {
  return m_xtcObj->ColumnStopAddr();
}


uint16_t Asic100aConfigV1::chipID() const {
  return m_xtcObj->chipID();
}


uint8_t Asic100aConfigV1::outputDriverOutputDynamicRange2() const {
  return m_xtcObj->outputDriverOutputDynamicRange2();
}


uint8_t Asic100aConfigV1::outputDriverOutputDynamicRange3() const {
  return m_xtcObj->outputDriverOutputDynamicRange3();
}


uint8_t Asic100aConfigV1::outputDriverTemperatureCompensationGain1() const {
  return m_xtcObj->outputDriverTemperatureCompensationGain1();
}


uint8_t Asic100aConfigV1::outputDriverInputCommonMode1() const {
  return m_xtcObj->outputDriverInputCommonMode1();
}


uint8_t Asic100aConfigV1::outputDriverTemperatureCompensationGain2() const {
  return m_xtcObj->outputDriverTemperatureCompensationGain2();
}


uint8_t Asic100aConfigV1::outputDriverInputCommonMode2() const {
  return m_xtcObj->outputDriverInputCommonMode2();
}


uint8_t Asic100aConfigV1::outputDriverTemperatureCompensationGain3() const {
  return m_xtcObj->outputDriverTemperatureCompensationGain3();
}


uint8_t Asic100aConfigV1::outputDriverInputCommonMode3() const {
  return m_xtcObj->outputDriverInputCommonMode3();
}

Config100aV1::Config100aV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Epix::Config100aV1()
  , m_xtcObj(xtcPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->asics_shape();
    _asics.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const Pds::Epix::Asic100aConfigV1& d = xtcPtr->asics(i0);
      boost::shared_ptr<const Pds::Epix::Asic100aConfigV1> dPtr(m_xtcObj, &d);
      _asics.push_back(psddl_pds2psana::Epix::Asic100aConfigV1(dPtr));
    }
  }
}
Config100aV1::~Config100aV1()
{
}


uint32_t Config100aV1::version() const {
  return m_xtcObj->version();
}


uint32_t Config100aV1::runTrigDelay() const {
  return m_xtcObj->runTrigDelay();
}


uint32_t Config100aV1::daqTrigDelay() const {
  return m_xtcObj->daqTrigDelay();
}


uint32_t Config100aV1::dacSetting() const {
  return m_xtcObj->dacSetting();
}


uint8_t Config100aV1::asicGR() const {
  return m_xtcObj->asicGR();
}


uint8_t Config100aV1::asicAcq() const {
  return m_xtcObj->asicAcq();
}


uint8_t Config100aV1::asicR0() const {
  return m_xtcObj->asicR0();
}


uint8_t Config100aV1::asicPpmat() const {
  return m_xtcObj->asicPpmat();
}


uint8_t Config100aV1::asicPpbe() const {
  return m_xtcObj->asicPpbe();
}


uint8_t Config100aV1::asicRoClk() const {
  return m_xtcObj->asicRoClk();
}


uint8_t Config100aV1::asicGRControl() const {
  return m_xtcObj->asicGRControl();
}


uint8_t Config100aV1::asicAcqControl() const {
  return m_xtcObj->asicAcqControl();
}


uint8_t Config100aV1::asicR0Control() const {
  return m_xtcObj->asicR0Control();
}


uint8_t Config100aV1::asicPpmatControl() const {
  return m_xtcObj->asicPpmatControl();
}


uint8_t Config100aV1::asicPpbeControl() const {
  return m_xtcObj->asicPpbeControl();
}


uint8_t Config100aV1::asicR0ClkControl() const {
  return m_xtcObj->asicR0ClkControl();
}


uint8_t Config100aV1::prepulseR0En() const {
  return m_xtcObj->prepulseR0En();
}


uint32_t Config100aV1::adcStreamMode() const {
  return m_xtcObj->adcStreamMode();
}


uint8_t Config100aV1::testPatternEnable() const {
  return m_xtcObj->testPatternEnable();
}


uint8_t Config100aV1::SyncMode() const {
  return m_xtcObj->SyncMode();
}


uint8_t Config100aV1::R0Mode() const {
  return m_xtcObj->R0Mode();
}


uint32_t Config100aV1::acqToAsicR0Delay() const {
  return m_xtcObj->acqToAsicR0Delay();
}


uint32_t Config100aV1::asicR0ToAsicAcq() const {
  return m_xtcObj->asicR0ToAsicAcq();
}


uint32_t Config100aV1::asicAcqWidth() const {
  return m_xtcObj->asicAcqWidth();
}


uint32_t Config100aV1::asicAcqLToPPmatL() const {
  return m_xtcObj->asicAcqLToPPmatL();
}


uint32_t Config100aV1::asicPPmatToReadout() const {
  return m_xtcObj->asicPPmatToReadout();
}


uint32_t Config100aV1::asicRoClkHalfT() const {
  return m_xtcObj->asicRoClkHalfT();
}


uint32_t Config100aV1::adcReadsPerPixel() const {
  return m_xtcObj->adcReadsPerPixel();
}


uint32_t Config100aV1::adcClkHalfT() const {
  return m_xtcObj->adcClkHalfT();
}


uint32_t Config100aV1::asicR0Width() const {
  return m_xtcObj->asicR0Width();
}


uint32_t Config100aV1::adcPipelineDelay() const {
  return m_xtcObj->adcPipelineDelay();
}


uint16_t Config100aV1::SyncWidth() const {
  return m_xtcObj->SyncWidth();
}


uint16_t Config100aV1::SyncDelay() const {
  return m_xtcObj->SyncDelay();
}


uint32_t Config100aV1::prepulseR0Width() const {
  return m_xtcObj->prepulseR0Width();
}


uint32_t Config100aV1::prepulseR0Delay() const {
  return m_xtcObj->prepulseR0Delay();
}


uint32_t Config100aV1::digitalCardId0() const {
  return m_xtcObj->digitalCardId0();
}


uint32_t Config100aV1::digitalCardId1() const {
  return m_xtcObj->digitalCardId1();
}


uint32_t Config100aV1::analogCardId0() const {
  return m_xtcObj->analogCardId0();
}


uint32_t Config100aV1::analogCardId1() const {
  return m_xtcObj->analogCardId1();
}


uint32_t Config100aV1::numberOfAsicsPerRow() const {
  return m_xtcObj->numberOfAsicsPerRow();
}


uint32_t Config100aV1::numberOfAsicsPerColumn() const {
  return m_xtcObj->numberOfAsicsPerColumn();
}


uint32_t Config100aV1::numberOfRowsPerAsic() const {
  return m_xtcObj->numberOfRowsPerAsic();
}


uint32_t Config100aV1::numberOfReadableRowsPerAsic() const {
  return m_xtcObj->numberOfReadableRowsPerAsic();
}


uint32_t Config100aV1::numberOfPixelsPerAsicRow() const {
  return m_xtcObj->numberOfPixelsPerAsicRow();
}


uint32_t Config100aV1::calibrationRowCountPerASIC() const {
  return m_xtcObj->calibrationRowCountPerASIC();
}


uint32_t Config100aV1::environmentalRowCountPerASIC() const {
  return m_xtcObj->environmentalRowCountPerASIC();
}


uint32_t Config100aV1::baseClockFrequency() const {
  return m_xtcObj->baseClockFrequency();
}


uint32_t Config100aV1::asicMask() const {
  return m_xtcObj->asicMask();
}


uint8_t Config100aV1::scopeEnable() const {
  return m_xtcObj->scopeEnable();
}


uint8_t Config100aV1::scopeTrigEdge() const {
  return m_xtcObj->scopeTrigEdge();
}


uint8_t Config100aV1::scopeTrigChan() const {
  return m_xtcObj->scopeTrigChan();
}


uint8_t Config100aV1::scopeArmMode() const {
  return m_xtcObj->scopeArmMode();
}


uint16_t Config100aV1::scopeADCThreshold() const {
  return m_xtcObj->scopeADCThreshold();
}


uint16_t Config100aV1::scopeTrigHoldoff() const {
  return m_xtcObj->scopeTrigHoldoff();
}


uint16_t Config100aV1::scopeTrigOffset() const {
  return m_xtcObj->scopeTrigOffset();
}


uint16_t Config100aV1::scopeTraceLength() const {
  return m_xtcObj->scopeTraceLength();
}


uint16_t Config100aV1::scopeADCsameplesToSkip() const {
  return m_xtcObj->scopeADCsameplesToSkip();
}


uint8_t Config100aV1::scopeChanAwaveformSelect() const {
  return m_xtcObj->scopeChanAwaveformSelect();
}


uint8_t Config100aV1::scopeChanBwaveformSelect() const {
  return m_xtcObj->scopeChanBwaveformSelect();
}

const Psana::Epix::Asic100aConfigV1& Config100aV1::asics(uint32_t i0) const { return _asics[i0]; }

ndarray<const uint16_t, 2> Config100aV1::asicPixelConfigArray() const {
  return m_xtcObj->asicPixelConfigArray(m_xtcObj);
}


ndarray<const uint8_t, 2> Config100aV1::calibPixelConfigArray() const {
  return m_xtcObj->calibPixelConfigArray(m_xtcObj);
}


uint32_t Config100aV1::numberOfRows() const {
  return m_xtcObj->numberOfRows();
}


uint32_t Config100aV1::numberOfReadableRows() const {
  return m_xtcObj->numberOfReadableRows();
}


uint32_t Config100aV1::numberOfColumns() const {
  return m_xtcObj->numberOfColumns();
}


uint32_t Config100aV1::numberOfCalibrationRows() const {
  return m_xtcObj->numberOfCalibrationRows();
}


uint32_t Config100aV1::numberOfEnvironmentalRows() const {
  return m_xtcObj->numberOfEnvironmentalRows();
}


uint32_t Config100aV1::numberOfAsics() const {
  return m_xtcObj->numberOfAsics();
}

std::vector<int> Config100aV1::asics_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_asics.size());
  return shape;
}

template <typename Config>
ElementV1<Config>::ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Epix::ElementV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
ElementV1<Config>::~ElementV1()
{
}


template <typename Config>
uint8_t ElementV1<Config>::vc() const {
  return m_xtcObj->vc();
}


template <typename Config>
uint8_t ElementV1<Config>::lane() const {
  return m_xtcObj->lane();
}


template <typename Config>
uint16_t ElementV1<Config>::acqCount() const {
  return m_xtcObj->acqCount();
}


template <typename Config>
uint32_t ElementV1<Config>::frameNumber() const {
  return m_xtcObj->frameNumber();
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
ndarray<const uint16_t, 2> ElementV1<Config>::frame() const {
  return m_xtcObj->frame(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
ndarray<const uint16_t, 2> ElementV1<Config>::excludedRows() const {
  return m_xtcObj->excludedRows(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
ndarray<const uint16_t, 1> ElementV1<Config>::temperatures() const {
  return m_xtcObj->temperatures(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
uint32_t ElementV1<Config>::lastWord() const {
  return m_xtcObj->lastWord(*m_cfgPtr);
}

template class ElementV1<Pds::Epix::ConfigV1>;
template class ElementV1<Pds::Epix::Config10KV1>;
template class ElementV1<Pds::GenericPgp::ConfigV1>;
template <typename Config>
ElementV2<Config>::ElementV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Epix::ElementV2()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
ElementV2<Config>::~ElementV2()
{
}


template <typename Config>
uint8_t ElementV2<Config>::vc() const {
  return m_xtcObj->vc();
}


template <typename Config>
uint8_t ElementV2<Config>::lane() const {
  return m_xtcObj->lane();
}


template <typename Config>
uint16_t ElementV2<Config>::acqCount() const {
  return m_xtcObj->acqCount();
}


template <typename Config>
uint32_t ElementV2<Config>::frameNumber() const {
  return m_xtcObj->frameNumber();
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
ndarray<const uint16_t, 2> ElementV2<Config>::frame() const {
  return m_xtcObj->frame(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
ndarray<const uint16_t, 2> ElementV2<Config>::calibrationRows() const {
  return m_xtcObj->calibrationRows(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
ndarray<const uint16_t, 2> ElementV2<Config>::environmentalRows() const {
  return m_xtcObj->environmentalRows(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
ndarray<const uint16_t, 1> ElementV2<Config>::temperatures() const {
  return m_xtcObj->temperatures(*m_cfgPtr, m_xtcObj);
}


template <typename Config>
uint32_t ElementV2<Config>::lastWord() const {
  return m_xtcObj->lastWord(*m_cfgPtr);
}

template class ElementV2<Pds::Epix::Config100aV1>;
} // namespace Epix
} // namespace psddl_pds2psana
