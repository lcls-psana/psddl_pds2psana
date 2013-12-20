
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
} // namespace Epix
} // namespace psddl_pds2psana
