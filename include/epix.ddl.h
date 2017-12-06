#ifndef PSDDL_PDS2PSANA_EPIX_DDL_H
#define PSDDL_PDS2PSANA_EPIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/epix.ddl.h"
#include "pdsdata/psddl/epix.ddl.h"
#include "psddl_pds2psana/genericpgp.ddl.h"
namespace psddl_pds2psana {
namespace Epix {

class AsicConfigV1 : public Psana::Epix::AsicConfigV1 {
public:
  typedef Pds::Epix::AsicConfigV1 XtcType;
  typedef Psana::Epix::AsicConfigV1 PsanaType;
  AsicConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~AsicConfigV1();
  virtual uint8_t monostPulser() const;
  virtual uint8_t dummyTest() const;
  virtual uint8_t dummyMask() const;
  virtual uint16_t pulser() const;
  virtual uint8_t pbit() const;
  virtual uint8_t atest() const;
  virtual uint8_t test() const;
  virtual uint8_t sabTest() const;
  virtual uint8_t hrTest() const;
  virtual uint8_t digMon1() const;
  virtual uint8_t digMon2() const;
  virtual uint8_t pulserDac() const;
  virtual uint8_t Dm1En() const;
  virtual uint8_t Dm2En() const;
  virtual uint8_t slvdSBit() const;
  virtual uint8_t VRefDac() const;
  virtual uint8_t TpsTComp() const;
  virtual uint8_t TpsMux() const;
  virtual uint8_t RoMonost() const;
  virtual uint8_t TpsGr() const;
  virtual uint8_t S2dGr() const;
  virtual uint8_t PpOcbS2d() const;
  virtual uint8_t Ocb() const;
  virtual uint8_t Monost() const;
  virtual uint8_t FastppEnable() const;
  virtual uint8_t Preamp() const;
  virtual uint8_t PixelCb() const;
  virtual uint8_t S2dTComp() const;
  virtual uint8_t FilterDac() const;
  virtual uint8_t TC() const;
  virtual uint8_t S2d() const;
  virtual uint8_t S2dDacBias() const;
  virtual uint8_t TpsTcDac() const;
  virtual uint8_t TpsDac() const;
  virtual uint8_t S2dTcDac() const;
  virtual uint8_t S2dDac() const;
  virtual uint8_t TestBe() const;
  virtual uint8_t IsEn() const;
  virtual uint8_t DelExec() const;
  virtual uint8_t DelCckReg() const;
  virtual uint16_t RowStartAddr() const;
  virtual uint16_t RowStopAddr() const;
  virtual uint8_t ColStartAddr() const;
  virtual uint8_t ColStopAddr() const;
  virtual uint16_t chipID() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV1 : public Psana::Epix::ConfigV1 {
public:
  typedef Pds::Epix::ConfigV1 XtcType;
  typedef Psana::Epix::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t version() const;
  virtual uint32_t runTrigDelay() const;
  virtual uint32_t daqTrigDelay() const;
  virtual uint32_t dacSetting() const;
  virtual uint8_t asicGR() const;
  virtual uint8_t asicAcq() const;
  virtual uint8_t asicR0() const;
  virtual uint8_t asicPpmat() const;
  virtual uint8_t asicPpbe() const;
  virtual uint8_t asicRoClk() const;
  virtual uint8_t asicGRControl() const;
  virtual uint8_t asicAcqControl() const;
  virtual uint8_t asicR0Control() const;
  virtual uint8_t asicPpmatControl() const;
  virtual uint8_t asicPpbeControl() const;
  virtual uint8_t asicR0ClkControl() const;
  virtual uint8_t prepulseR0En() const;
  virtual uint32_t adcStreamMode() const;
  virtual uint8_t testPatternEnable() const;
  virtual uint32_t acqToAsicR0Delay() const;
  virtual uint32_t asicR0ToAsicAcq() const;
  virtual uint32_t asicAcqWidth() const;
  virtual uint32_t asicAcqLToPPmatL() const;
  virtual uint32_t asicRoClkHalfT() const;
  virtual uint32_t adcReadsPerPixel() const;
  virtual uint32_t adcClkHalfT() const;
  virtual uint32_t asicR0Width() const;
  virtual uint32_t adcPipelineDelay() const;
  virtual uint32_t prepulseR0Width() const;
  virtual uint32_t prepulseR0Delay() const;
  virtual uint32_t digitalCardId0() const;
  virtual uint32_t digitalCardId1() const;
  virtual uint32_t analogCardId0() const;
  virtual uint32_t analogCardId1() const;
  virtual uint32_t lastRowExclusions() const;
  virtual uint32_t numberOfAsicsPerRow() const;
  virtual uint32_t numberOfAsicsPerColumn() const;
  virtual uint32_t numberOfRowsPerAsic() const;
  virtual uint32_t numberOfPixelsPerAsicRow() const;
  virtual uint32_t baseClockFrequency() const;
  virtual uint32_t asicMask() const;
  virtual const Psana::Epix::AsicConfigV1& asics(uint32_t i0) const;
  virtual ndarray<const uint32_t, 3> asicPixelTestArray() const;
  virtual ndarray<const uint32_t, 3> asicPixelMaskArray() const;
  virtual uint32_t numberOfRows() const;
  virtual uint32_t numberOfColumns() const;
  virtual uint32_t numberOfAsics() const;
  virtual std::vector<int> asics_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::Epix::AsicConfigV1 > _asics;
};


class Asic10kConfigV1 : public Psana::Epix::Asic10kConfigV1 {
public:
  typedef Pds::Epix::Asic10kConfigV1 XtcType;
  typedef Psana::Epix::Asic10kConfigV1 PsanaType;
  Asic10kConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Asic10kConfigV1();
  virtual uint8_t CompTH_DAC() const;
  virtual uint8_t CompEn_0() const;
  virtual uint8_t PulserSync() const;
  virtual uint8_t dummyTest() const;
  virtual uint8_t dummyMask() const;
  virtual uint8_t dummyG() const;
  virtual uint8_t dummyGA() const;
  virtual uint16_t dummyUpper12bits() const;
  virtual uint16_t pulser() const;
  virtual uint8_t pbit() const;
  virtual uint8_t atest() const;
  virtual uint8_t test() const;
  virtual uint8_t sabTest() const;
  virtual uint8_t hrTest() const;
  virtual uint8_t pulserR() const;
  virtual uint8_t digMon1() const;
  virtual uint8_t digMon2() const;
  virtual uint8_t pulserDac() const;
  virtual uint8_t monostPulser() const;
  virtual uint8_t CompEn_1() const;
  virtual uint8_t CompEn_2() const;
  virtual uint8_t Dm1En() const;
  virtual uint8_t Dm2En() const;
  virtual uint8_t emph_bd() const;
  virtual uint8_t emph_bc() const;
  virtual uint8_t VRefDac() const;
  virtual uint8_t vrefLow() const;
  virtual uint8_t TpsTComp() const;
  virtual uint8_t TpsMux() const;
  virtual uint8_t RoMonost() const;
  virtual uint8_t TpsGr() const;
  virtual uint8_t S2dGr() const;
  virtual uint8_t PpOcbS2d() const;
  virtual uint8_t Ocb() const;
  virtual uint8_t Monost() const;
  virtual uint8_t FastppEnable() const;
  virtual uint8_t Preamp() const;
  virtual uint8_t PixelCb() const;
  virtual uint8_t Vld1_b() const;
  virtual uint8_t S2dTComp() const;
  virtual uint8_t FilterDac() const;
  virtual uint8_t testVDTransmitter() const;
  virtual uint8_t TC() const;
  virtual uint8_t S2d() const;
  virtual uint8_t S2dDacBias() const;
  virtual uint8_t TpsTcDac() const;
  virtual uint8_t TpsDac() const;
  virtual uint8_t S2dTcDac() const;
  virtual uint8_t S2dDac() const;
  virtual uint8_t TestBe() const;
  virtual uint8_t IsEn() const;
  virtual uint8_t DelExec() const;
  virtual uint8_t DelCckReg() const;
  virtual uint8_t RO_rst_en() const;
  virtual uint8_t slvdSBit() const;
  virtual uint8_t FELmode() const;
  virtual uint8_t CompEnOn() const;
  virtual uint16_t RowStartAddr() const;
  virtual uint16_t RowStopAddr() const;
  virtual uint8_t ColStartAddr() const;
  virtual uint8_t ColStopAddr() const;
  virtual uint16_t chipID() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class Config10KV1 : public Psana::Epix::Config10KV1 {
public:
  typedef Pds::Epix::Config10KV1 XtcType;
  typedef Psana::Epix::Config10KV1 PsanaType;
  Config10KV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Config10KV1();
  virtual uint32_t version() const;
  virtual uint32_t runTrigDelay() const;
  virtual uint32_t daqTrigDelay() const;
  virtual uint32_t dacSetting() const;
  virtual uint8_t asicGR() const;
  virtual uint8_t asicAcq() const;
  virtual uint8_t asicR0() const;
  virtual uint8_t asicPpmat() const;
  virtual uint8_t asicPpbe() const;
  virtual uint8_t asicRoClk() const;
  virtual uint8_t asicGRControl() const;
  virtual uint8_t asicAcqControl() const;
  virtual uint8_t asicR0Control() const;
  virtual uint8_t asicPpmatControl() const;
  virtual uint8_t asicPpbeControl() const;
  virtual uint8_t asicR0ClkControl() const;
  virtual uint8_t prepulseR0En() const;
  virtual uint32_t adcStreamMode() const;
  virtual uint8_t testPatternEnable() const;
  virtual uint8_t SyncMode() const;
  virtual uint8_t R0Mode() const;
  virtual uint32_t DoutPipelineDelay() const;
  virtual uint32_t acqToAsicR0Delay() const;
  virtual uint32_t asicR0ToAsicAcq() const;
  virtual uint32_t asicAcqWidth() const;
  virtual uint32_t asicAcqLToPPmatL() const;
  virtual uint32_t asicRoClkHalfT() const;
  virtual uint32_t adcReadsPerPixel() const;
  virtual uint32_t adcClkHalfT() const;
  virtual uint32_t asicR0Width() const;
  virtual uint32_t adcPipelineDelay() const;
  virtual uint16_t SyncWidth() const;
  virtual uint16_t SyncDelay() const;
  virtual uint32_t prepulseR0Width() const;
  virtual uint32_t prepulseR0Delay() const;
  virtual uint32_t digitalCardId0() const;
  virtual uint32_t digitalCardId1() const;
  virtual uint32_t analogCardId0() const;
  virtual uint32_t analogCardId1() const;
  virtual uint32_t lastRowExclusions() const;
  virtual uint32_t numberOfAsicsPerRow() const;
  virtual uint32_t numberOfAsicsPerColumn() const;
  virtual uint32_t numberOfRowsPerAsic() const;
  virtual uint32_t numberOfPixelsPerAsicRow() const;
  virtual uint32_t baseClockFrequency() const;
  virtual uint32_t asicMask() const;
  virtual uint8_t scopeEnable() const;
  virtual uint8_t scopeTrigEdge() const;
  virtual uint8_t scopeTrigChan() const;
  virtual uint8_t scopeArmMode() const;
  virtual uint16_t scopeADCThreshold() const;
  virtual uint16_t scopeTrigHoldoff() const;
  virtual uint16_t scopeTrigOffset() const;
  virtual uint16_t scopeTraceLength() const;
  virtual uint16_t scopeADCsameplesToSkip() const;
  virtual uint8_t scopeChanAwaveformSelect() const;
  virtual uint8_t scopeChanBwaveformSelect() const;
  virtual const Psana::Epix::Asic10kConfigV1& asics(uint32_t i0) const;
  virtual ndarray<const uint16_t, 3> asicPixelConfigArray() const;
  virtual uint32_t numberOfRows() const;
  virtual uint32_t numberOfColumns() const;
  virtual uint32_t numberOfAsics() const;
  virtual std::vector<int> asics_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::Epix::Asic10kConfigV1 > _asics;
};


class Asic100aConfigV1 : public Psana::Epix::Asic100aConfigV1 {
public:
  typedef Pds::Epix::Asic100aConfigV1 XtcType;
  typedef Psana::Epix::Asic100aConfigV1 PsanaType;
  Asic100aConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Asic100aConfigV1();
  virtual uint8_t pulserVsPixelOnDelay() const;
  virtual uint8_t pulserSync() const;
  virtual uint8_t dummyTest() const;
  virtual uint8_t dummyMask() const;
  virtual uint16_t testPulserLevel() const;
  virtual uint8_t pulserCounterDirection() const;
  virtual uint8_t automaticTestModeEnable() const;
  virtual uint8_t testMode() const;
  virtual uint8_t testModeWithDarkFrame() const;
  virtual uint8_t highResolutionModeTest() const;
  virtual uint8_t pulserReset() const;
  virtual uint8_t digitalMonitorMux1() const;
  virtual uint8_t digitalMonitorMux2() const;
  virtual uint8_t testPulserCurrent() const;
  virtual uint8_t testPointSystemOutputDynamicRange() const;
  virtual uint8_t digitalMonitor1Enable() const;
  virtual uint8_t digitalMonitor2Enable() const;
  virtual uint8_t LVDS_ImpedenceMatchingEnable() const;
  virtual uint8_t VRefBaselineDac() const;
  virtual uint8_t extraRowsLowReferenceValue() const;
  virtual uint8_t testPointSystemTemperatureCompensationEnable() const;
  virtual uint8_t testPointSytemInputSelect() const;
  virtual uint8_t programmableReadoutDelay() const;
  virtual uint8_t outputDriverOutputDynamicRange0() const;
  virtual uint8_t outputDriverOutputDynamicRange1() const;
  virtual uint8_t balconyEnable() const;
  virtual uint8_t balconyDriverCurrent() const;
  virtual uint8_t fastPowerPulsingSpeed() const;
  virtual uint8_t fastPowerPulsingEnable() const;
  virtual uint8_t preamplifierCurrent() const;
  virtual uint8_t pixelOutputBufferCurrent() const;
  virtual uint8_t pixelBufferAndPreamplifierDrivingCapabilities() const;
  virtual uint8_t outputDriverTemperatureCompensationEnable() const;
  virtual uint8_t pixelFilterLevel() const;
  virtual uint8_t bandGapReferenceTemperatureCompensationBits() const;
  virtual uint8_t outputDriverDrivingCapabilitiesAndStability() const;
  virtual uint8_t outputDriverDacReferenceBias() const;
  virtual uint8_t testPointSystemTemperatureCompensationGain() const;
  virtual uint8_t testPointSystemInputCommonMode() const;
  virtual uint8_t outputDriverTemperatureCompensationGain0() const;
  virtual uint8_t outputDriverInputCommonMode0() const;
  virtual uint8_t testBackEnd() const;
  virtual uint8_t interleavedReadOutEnable() const;
  virtual uint8_t EXEC_DelayEnable() const;
  virtual uint8_t CCK_RegDelayEnable() const;
  virtual uint8_t syncPinEnable() const;
  virtual uint16_t RowStartAddr() const;
  virtual uint16_t RowStopAddr() const;
  virtual uint8_t ColumnStartAddr() const;
  virtual uint8_t ColumnStopAddr() const;
  virtual uint16_t chipID() const;
  virtual uint8_t outputDriverOutputDynamicRange2() const;
  virtual uint8_t outputDriverOutputDynamicRange3() const;
  virtual uint8_t outputDriverTemperatureCompensationGain1() const;
  virtual uint8_t outputDriverInputCommonMode1() const;
  virtual uint8_t outputDriverTemperatureCompensationGain2() const;
  virtual uint8_t outputDriverInputCommonMode2() const;
  virtual uint8_t outputDriverTemperatureCompensationGain3() const;
  virtual uint8_t outputDriverInputCommonMode3() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class Config100aV1 : public Psana::Epix::Config100aV1 {
public:
  typedef Pds::Epix::Config100aV1 XtcType;
  typedef Psana::Epix::Config100aV1 PsanaType;
  Config100aV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Config100aV1();
  virtual uint32_t version() const;
  virtual uint32_t runTrigDelay() const;
  virtual uint32_t daqTrigDelay() const;
  virtual uint32_t dacSetting() const;
  virtual uint8_t asicGR() const;
  virtual uint8_t asicAcq() const;
  virtual uint8_t asicR0() const;
  virtual uint8_t asicPpmat() const;
  virtual uint8_t asicPpbe() const;
  virtual uint8_t asicRoClk() const;
  virtual uint8_t asicGRControl() const;
  virtual uint8_t asicAcqControl() const;
  virtual uint8_t asicR0Control() const;
  virtual uint8_t asicPpmatControl() const;
  virtual uint8_t asicPpbeControl() const;
  virtual uint8_t asicR0ClkControl() const;
  virtual uint8_t prepulseR0En() const;
  virtual uint32_t adcStreamMode() const;
  virtual uint8_t testPatternEnable() const;
  virtual uint8_t SyncMode() const;
  virtual uint8_t R0Mode() const;
  virtual uint32_t acqToAsicR0Delay() const;
  virtual uint32_t asicR0ToAsicAcq() const;
  virtual uint32_t asicAcqWidth() const;
  virtual uint32_t asicAcqLToPPmatL() const;
  virtual uint32_t asicPPmatToReadout() const;
  virtual uint32_t asicRoClkHalfT() const;
  virtual uint32_t adcReadsPerPixel() const;
  virtual uint32_t adcClkHalfT() const;
  virtual uint32_t asicR0Width() const;
  virtual uint32_t adcPipelineDelay() const;
  virtual uint16_t SyncWidth() const;
  virtual uint16_t SyncDelay() const;
  virtual uint32_t prepulseR0Width() const;
  virtual uint32_t prepulseR0Delay() const;
  virtual uint32_t digitalCardId0() const;
  virtual uint32_t digitalCardId1() const;
  virtual uint32_t analogCardId0() const;
  virtual uint32_t analogCardId1() const;
  virtual uint32_t numberOfAsicsPerRow() const;
  virtual uint32_t numberOfAsicsPerColumn() const;
  virtual uint32_t numberOfRowsPerAsic() const;
  virtual uint32_t numberOfReadableRowsPerAsic() const;
  virtual uint32_t numberOfPixelsPerAsicRow() const;
  virtual uint32_t calibrationRowCountPerASIC() const;
  virtual uint32_t environmentalRowCountPerASIC() const;
  virtual uint32_t baseClockFrequency() const;
  virtual uint32_t asicMask() const;
  virtual uint8_t scopeEnable() const;
  virtual uint8_t scopeTrigEdge() const;
  virtual uint8_t scopeTrigChan() const;
  virtual uint8_t scopeArmMode() const;
  virtual uint16_t scopeADCThreshold() const;
  virtual uint16_t scopeTrigHoldoff() const;
  virtual uint16_t scopeTrigOffset() const;
  virtual uint16_t scopeTraceLength() const;
  virtual uint16_t scopeADCsameplesToSkip() const;
  virtual uint8_t scopeChanAwaveformSelect() const;
  virtual uint8_t scopeChanBwaveformSelect() const;
  virtual const Psana::Epix::Asic100aConfigV1& asics(uint32_t i0) const;
  virtual ndarray<const uint16_t, 2> asicPixelConfigArray() const;
  virtual ndarray<const uint8_t, 2> calibPixelConfigArray() const;
  virtual uint32_t numberOfRows() const;
  virtual uint32_t numberOfReadableRows() const;
  virtual uint32_t numberOfColumns() const;
  virtual uint32_t numberOfCalibrationRows() const;
  virtual uint32_t numberOfEnvironmentalRows() const;
  virtual uint32_t numberOfAsics() const;
  virtual std::vector<int> asics_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::Epix::Asic100aConfigV1 > _asics;
};


class Config100aV2 : public Psana::Epix::Config100aV2 {
public:
  typedef Pds::Epix::Config100aV2 XtcType;
  typedef Psana::Epix::Config100aV2 PsanaType;
  Config100aV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Config100aV2();
  virtual uint32_t version() const;
  virtual uint32_t usePgpEvr() const;
  virtual uint32_t evrRunCode() const;
  virtual uint32_t evrDaqCode() const;
  virtual uint32_t evrRunTrigDelay() const;
  virtual uint32_t epixRunTrigDelay() const;
  virtual uint32_t dacSetting() const;
  virtual uint8_t asicGR() const;
  virtual uint8_t asicAcq() const;
  virtual uint8_t asicR0() const;
  virtual uint8_t asicPpmat() const;
  virtual uint8_t asicPpbe() const;
  virtual uint8_t asicRoClk() const;
  virtual uint8_t asicGRControl() const;
  virtual uint8_t asicAcqControl() const;
  virtual uint8_t asicR0Control() const;
  virtual uint8_t asicPpmatControl() const;
  virtual uint8_t asicPpbeControl() const;
  virtual uint8_t asicR0ClkControl() const;
  virtual uint8_t prepulseR0En() const;
  virtual uint32_t adcStreamMode() const;
  virtual uint8_t testPatternEnable() const;
  virtual uint8_t SyncMode() const;
  virtual uint8_t R0Mode() const;
  virtual uint32_t acqToAsicR0Delay() const;
  virtual uint32_t asicR0ToAsicAcq() const;
  virtual uint32_t asicAcqWidth() const;
  virtual uint32_t asicAcqLToPPmatL() const;
  virtual uint32_t asicPPmatToReadout() const;
  virtual uint32_t asicRoClkHalfT() const;
  virtual uint32_t adcReadsPerPixel() const;
  virtual uint32_t adcClkHalfT() const;
  virtual uint32_t asicR0Width() const;
  virtual uint32_t adcPipelineDelay() const;
  virtual uint32_t adcPipelineDelay0() const;
  virtual uint32_t adcPipelineDelay1() const;
  virtual uint32_t adcPipelineDelay2() const;
  virtual uint32_t adcPipelineDelay3() const;
  virtual uint16_t SyncWidth() const;
  virtual uint16_t SyncDelay() const;
  virtual uint32_t prepulseR0Width() const;
  virtual uint32_t prepulseR0Delay() const;
  virtual uint32_t digitalCardId0() const;
  virtual uint32_t digitalCardId1() const;
  virtual uint32_t analogCardId0() const;
  virtual uint32_t analogCardId1() const;
  virtual uint32_t carrierId0() const;
  virtual uint32_t carrierId1() const;
  virtual uint32_t numberOfAsicsPerRow() const;
  virtual uint32_t numberOfAsicsPerColumn() const;
  virtual uint32_t numberOfRowsPerAsic() const;
  virtual uint32_t numberOfReadableRowsPerAsic() const;
  virtual uint32_t numberOfPixelsPerAsicRow() const;
  virtual uint32_t calibrationRowCountPerASIC() const;
  virtual uint32_t environmentalRowCountPerASIC() const;
  virtual uint32_t baseClockFrequency() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t enableAutomaticRunTrigger() const;
  virtual uint32_t numberOf125MhzTicksPerRunTrigger() const;
  virtual uint8_t scopeEnable() const;
  virtual uint8_t scopeTrigEdge() const;
  virtual uint8_t scopeTrigChan() const;
  virtual uint8_t scopeArmMode() const;
  virtual uint16_t scopeADCThreshold() const;
  virtual uint16_t scopeTrigHoldoff() const;
  virtual uint16_t scopeTrigOffset() const;
  virtual uint16_t scopeTraceLength() const;
  virtual uint16_t scopeADCsameplesToSkip() const;
  virtual uint8_t scopeChanAwaveformSelect() const;
  virtual uint8_t scopeChanBwaveformSelect() const;
  virtual const Psana::Epix::Asic100aConfigV1& asics(uint32_t i0) const;
  virtual ndarray<const uint16_t, 2> asicPixelConfigArray() const;
  virtual ndarray<const uint8_t, 2> calibPixelConfigArray() const;
  virtual uint32_t numberOfRows() const;
  virtual uint32_t numberOfReadableRows() const;
  virtual uint32_t numberOfColumns() const;
  virtual uint32_t numberOfCalibrationRows() const;
  virtual uint32_t numberOfEnvironmentalRows() const;
  virtual uint32_t numberOfAsics() const;
  virtual std::vector<int> asics_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::Epix::Asic100aConfigV1 > _asics;
};


class Asic10kaConfigV1 : public Psana::Epix::Asic10kaConfigV1 {
public:
  typedef Pds::Epix::Asic10kaConfigV1 XtcType;
  typedef Psana::Epix::Asic10kaConfigV1 PsanaType;
  Asic10kaConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Asic10kaConfigV1();
  virtual uint8_t CompTH_DAC() const;
  virtual uint8_t CompEn_lowBit() const;
  virtual uint8_t PulserSync() const;
  virtual uint8_t pixelDummy() const;
  virtual uint16_t Pulser() const;
  virtual uint8_t Pbit() const;
  virtual uint8_t atest() const;
  virtual uint8_t test() const;
  virtual uint8_t Sab_test() const;
  virtual uint8_t Hrtest() const;
  virtual uint8_t PulserR() const;
  virtual uint8_t DM1() const;
  virtual uint8_t DM2() const;
  virtual uint8_t Pulser_DAC() const;
  virtual uint8_t Monost_Pulser() const;
  virtual uint8_t CompEn_topTwoBits() const;
  virtual uint8_t DM1en() const;
  virtual uint8_t DM2en() const;
  virtual uint8_t emph_bd() const;
  virtual uint8_t emph_bc() const;
  virtual uint8_t VREF_DAC() const;
  virtual uint8_t VrefLow() const;
  virtual uint8_t TPS_tcomp() const;
  virtual uint8_t TPS_MUX() const;
  virtual uint8_t RO_Monost() const;
  virtual uint8_t TPS_GR() const;
  virtual uint8_t S2D0_GR() const;
  virtual uint8_t PP_OCB_S2D() const;
  virtual uint8_t OCB() const;
  virtual uint8_t Monost() const;
  virtual uint8_t fastPP_enable() const;
  virtual uint8_t Preamp() const;
  virtual uint8_t PixelCB() const;
  virtual uint8_t Vld1_b() const;
  virtual uint8_t S2D_tcomp() const;
  virtual uint8_t Filter_DAC() const;
  virtual uint8_t testLVDTransmitter() const;
  virtual uint8_t tc() const;
  virtual uint8_t S2D() const;
  virtual uint8_t S2D_DAC_Bias() const;
  virtual uint8_t TPS_tcDAC() const;
  virtual uint8_t TPS_DAC() const;
  virtual uint8_t S2D0_tcDAC() const;
  virtual uint8_t S2D0_DAC() const;
  virtual uint8_t testBE() const;
  virtual uint8_t is_en() const;
  virtual uint8_t DelEXEC() const;
  virtual uint8_t DelCCKreg() const;
  virtual uint8_t RO_rst_en() const;
  virtual uint8_t SLVDSbit() const;
  virtual uint8_t FELmode() const;
  virtual uint8_t CompEnOn() const;
  virtual uint16_t RowStart() const;
  virtual uint16_t RowStop() const;
  virtual uint8_t ColumnStart() const;
  virtual uint8_t ColumnStop() const;
  virtual uint16_t chipID() const;
  virtual uint8_t S2D1_GR() const;
  virtual uint8_t S2D2_GR() const;
  virtual uint8_t S2D3_GR() const;
  virtual uint8_t trbit() const;
  virtual uint8_t S2D1_tcDAC() const;
  virtual uint8_t S2D1_DAC() const;
  virtual uint8_t S2D2_tcDAC() const;
  virtual uint8_t S2D2_DAC() const;
  virtual uint8_t S2D3_tcDAC() const;
  virtual uint8_t S2D3_DAC() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class Config10kaV1 : public Psana::Epix::Config10kaV1 {
public:
  typedef Pds::Epix::Config10kaV1 XtcType;
  typedef Psana::Epix::Config10kaV1 PsanaType;
  Config10kaV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~Config10kaV1();
  virtual uint32_t version() const;
  virtual uint32_t usePgpEvr() const;
  virtual uint32_t evrRunCode() const;
  virtual uint32_t evrDaqCode() const;
  virtual uint32_t evrRunTrigDelay() const;
  virtual uint32_t epixRunTrigDelay() const;
  virtual uint32_t dacSetting() const;
  virtual uint8_t asicGR() const;
  virtual uint8_t asicAcq() const;
  virtual uint8_t asicR0() const;
  virtual uint8_t asicPpmat() const;
  virtual uint8_t asicPpbe() const;
  virtual uint8_t asicRoClk() const;
  virtual uint8_t asicGRControl() const;
  virtual uint8_t asicAcqControl() const;
  virtual uint8_t asicR0Control() const;
  virtual uint8_t asicPpmatControl() const;
  virtual uint8_t asicPpbeControl() const;
  virtual uint8_t asicR0ClkControl() const;
  virtual uint8_t prepulseR0En() const;
  virtual uint32_t adcStreamMode() const;
  virtual uint8_t testPatternEnable() const;
  virtual uint8_t SyncMode() const;
  virtual uint8_t R0Mode() const;
  virtual uint32_t acqToAsicR0Delay() const;
  virtual uint32_t asicR0ToAsicAcq() const;
  virtual uint32_t asicAcqWidth() const;
  virtual uint32_t asicAcqLToPPmatL() const;
  virtual uint32_t asicPPmatToReadout() const;
  virtual uint32_t asicRoClkHalfT() const;
  virtual uint32_t adcReadsPerPixel() const;
  virtual uint32_t adcClkHalfT() const;
  virtual uint32_t asicR0Width() const;
  virtual uint32_t adcPipelineDelay() const;
  virtual uint32_t adcPipelineDelay0() const;
  virtual uint32_t adcPipelineDelay1() const;
  virtual uint32_t adcPipelineDelay2() const;
  virtual uint32_t adcPipelineDelay3() const;
  virtual uint16_t SyncWidth() const;
  virtual uint16_t SyncDelay() const;
  virtual uint32_t prepulseR0Width() const;
  virtual uint32_t prepulseR0Delay() const;
  virtual uint32_t digitalCardId0() const;
  virtual uint32_t digitalCardId1() const;
  virtual uint32_t analogCardId0() const;
  virtual uint32_t analogCardId1() const;
  virtual uint32_t carrierId0() const;
  virtual uint32_t carrierId1() const;
  virtual uint32_t numberOfAsicsPerRow() const;
  virtual uint32_t numberOfAsicsPerColumn() const;
  virtual uint32_t numberOfRowsPerAsic() const;
  virtual uint32_t numberOfReadableRowsPerAsic() const;
  virtual uint32_t numberOfPixelsPerAsicRow() const;
  virtual uint32_t calibrationRowCountPerASIC() const;
  virtual uint32_t environmentalRowCountPerASIC() const;
  virtual uint32_t baseClockFrequency() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t enableAutomaticRunTrigger() const;
  virtual uint32_t numberOf125MhzTicksPerRunTrigger() const;
  virtual uint8_t scopeEnable() const;
  virtual uint8_t scopeTrigEdge() const;
  virtual uint8_t scopeTrigChan() const;
  virtual uint8_t scopeArmMode() const;
  virtual uint16_t scopeADCThreshold() const;
  virtual uint16_t scopeTrigHoldoff() const;
  virtual uint16_t scopeTrigOffset() const;
  virtual uint16_t scopeTraceLength() const;
  virtual uint16_t scopeADCsameplesToSkip() const;
  virtual uint8_t scopeChanAwaveformSelect() const;
  virtual uint8_t scopeChanBwaveformSelect() const;
  virtual const Psana::Epix::Asic10kaConfigV1& asics(uint32_t i0) const;
  virtual ndarray<const uint16_t, 2> asicPixelConfigArray() const;
  virtual ndarray<const uint8_t, 2> calibPixelConfigArray() const;
  virtual uint32_t numberOfRows() const;
  virtual uint32_t numberOfReadableRows() const;
  virtual uint32_t numberOfColumns() const;
  virtual uint32_t numberOfCalibrationRows() const;
  virtual uint32_t numberOfEnvironmentalRows() const;
  virtual uint32_t numberOfAsics() const;
  virtual std::vector<int> asics_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::Epix::Asic10kaConfigV1 > _asics;
};


template <typename Config>
class ElementV1 : public Psana::Epix::ElementV1 {
public:
  typedef Pds::Epix::ElementV1 XtcType;
  typedef Psana::Epix::ElementV1 PsanaType;
  ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV1();
  virtual uint8_t vc() const;
  virtual uint8_t lane() const;
  virtual uint16_t acqCount() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 2> frame() const;
  virtual ndarray<const uint16_t, 2> excludedRows() const;
  virtual ndarray<const uint16_t, 1> temperatures() const;
  virtual uint32_t lastWord() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};


template <typename Config>
class ElementV2 : public Psana::Epix::ElementV2 {
public:
  typedef Pds::Epix::ElementV2 XtcType;
  typedef Psana::Epix::ElementV2 PsanaType;
  ElementV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV2();
  virtual uint8_t vc() const;
  virtual uint8_t lane() const;
  virtual uint16_t acqCount() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 2> frame() const;
  virtual ndarray<const uint16_t, 2> calibrationRows() const;
  virtual ndarray<const uint16_t, 2> environmentalRows() const;
  virtual ndarray<const uint16_t, 1> temperatures() const;
  virtual uint32_t lastWord() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};


template <typename Config>
class ElementV3 : public Psana::Epix::ElementV3 {
public:
  typedef Pds::Epix::ElementV3 XtcType;
  typedef Psana::Epix::ElementV3 PsanaType;
  ElementV3(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV3();
  virtual uint8_t vc() const;
  virtual uint8_t lane() const;
  virtual uint16_t acqCount() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 2> frame() const;
  virtual ndarray<const uint16_t, 2> calibrationRows() const;
  virtual ndarray<const uint32_t, 2> environmentalRows() const;
  virtual ndarray<const uint16_t, 1> temperatures() const;
  virtual uint32_t lastWord() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};

} // namespace Epix
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_EPIX_DDL_H
