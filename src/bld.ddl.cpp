
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/bld.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Bld {
Psana::Bld::BldDataFEEGasDetEnergy pds_to_psana(Pds::Bld::BldDataFEEGasDetEnergy pds)
{
  return Psana::Bld::BldDataFEEGasDetEnergy(pds.f_11_ENRC(), pds.f_12_ENRC(), pds.f_21_ENRC(), pds.f_22_ENRC());
}

Psana::Bld::BldDataFEEGasDetEnergyV1 pds_to_psana(Pds::Bld::BldDataFEEGasDetEnergyV1 pds)
{
  return Psana::Bld::BldDataFEEGasDetEnergyV1(pds.f_11_ENRC(), pds.f_12_ENRC(), pds.f_21_ENRC(), pds.f_22_ENRC(), pds.f_63_ENRC(), pds.f_64_ENRC());
}

Psana::Bld::BldDataEBeamV0::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV0::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV0::DamageMask(e);
}

Psana::Bld::BldDataEBeamV0 pds_to_psana(Pds::Bld::BldDataEBeamV0 pds)
{
  return Psana::Bld::BldDataEBeamV0(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY());
}

Psana::Bld::BldDataEBeamV1::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV1::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV1::DamageMask(e);
}

Psana::Bld::BldDataEBeamV1 pds_to_psana(Pds::Bld::BldDataEBeamV1 pds)
{
  return Psana::Bld::BldDataEBeamV1(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2());
}

Psana::Bld::BldDataEBeamV2::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV2::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV2::DamageMask(e);
}

Psana::Bld::BldDataEBeamV2 pds_to_psana(Pds::Bld::BldDataEBeamV2 pds)
{
  return Psana::Bld::BldDataEBeamV2(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2(), pds.ebeamEnergyBC2());
}

Psana::Bld::BldDataEBeamV3::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV3::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV3::DamageMask(e);
}

Psana::Bld::BldDataEBeamV3 pds_to_psana(Pds::Bld::BldDataEBeamV3 pds)
{
  return Psana::Bld::BldDataEBeamV3(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2(), pds.ebeamEnergyBC2(), pds.ebeamPkCurrBC1(), pds.ebeamEnergyBC1());
}

Psana::Bld::BldDataEBeamV4::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV4::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV4::DamageMask(e);
}

Psana::Bld::BldDataEBeamV4 pds_to_psana(Pds::Bld::BldDataEBeamV4 pds)
{
  return Psana::Bld::BldDataEBeamV4(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2(), pds.ebeamEnergyBC2(), pds.ebeamPkCurrBC1(), pds.ebeamEnergyBC1(), pds.ebeamUndPosX(), pds.ebeamUndPosY(), pds.ebeamUndAngX(), pds.ebeamUndAngY());
}

Psana::Bld::BldDataEBeamV5::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV5::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV5::DamageMask(e);
}

Psana::Bld::BldDataEBeamV5 pds_to_psana(Pds::Bld::BldDataEBeamV5 pds)
{
  return Psana::Bld::BldDataEBeamV5(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2(), pds.ebeamEnergyBC2(), pds.ebeamPkCurrBC1(), pds.ebeamEnergyBC1(), pds.ebeamUndPosX(), pds.ebeamUndPosY(), pds.ebeamUndAngX(), pds.ebeamUndAngY(), pds.ebeamXTCAVAmpl(), pds.ebeamXTCAVPhase(), pds.ebeamDumpCharge());
}

Psana::Bld::BldDataEBeamV6::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV6::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV6::DamageMask(e);
}

Psana::Bld::BldDataEBeamV6 pds_to_psana(Pds::Bld::BldDataEBeamV6 pds)
{
  return Psana::Bld::BldDataEBeamV6(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2(), pds.ebeamEnergyBC2(), pds.ebeamPkCurrBC1(), pds.ebeamEnergyBC1(), pds.ebeamUndPosX(), pds.ebeamUndPosY(), pds.ebeamUndAngX(), pds.ebeamUndAngY(), pds.ebeamXTCAVAmpl(), pds.ebeamXTCAVPhase(), pds.ebeamDumpCharge(), pds.ebeamPhotonEnergy(), pds.ebeamLTU250(), pds.ebeamLTU450());
}

Psana::Bld::BldDataEBeamV7::DamageMask pds_to_psana(Pds::Bld::BldDataEBeamV7::DamageMask e)
{
  return Psana::Bld::BldDataEBeamV7::DamageMask(e);
}

Psana::Bld::BldDataEBeamV7 pds_to_psana(Pds::Bld::BldDataEBeamV7 pds)
{
  return Psana::Bld::BldDataEBeamV7(pds.damageMask(), pds.ebeamCharge(), pds.ebeamL3Energy(), pds.ebeamLTUPosX(), pds.ebeamLTUPosY(), pds.ebeamLTUAngX(), pds.ebeamLTUAngY(), pds.ebeamPkCurrBC2(), pds.ebeamEnergyBC2(), pds.ebeamPkCurrBC1(), pds.ebeamEnergyBC1(), pds.ebeamUndPosX(), pds.ebeamUndPosY(), pds.ebeamUndAngX(), pds.ebeamUndAngY(), pds.ebeamXTCAVAmpl(), pds.ebeamXTCAVPhase(), pds.ebeamDumpCharge(), pds.ebeamPhotonEnergy(), pds.ebeamLTU250(), pds.ebeamLTU450());
}

BldDataEOrbitsV0::BldDataEOrbitsV0(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataEOrbitsV0()
  , m_xtcObj(xtcPtr)
{
}
BldDataEOrbitsV0::~BldDataEOrbitsV0()
{
}


uint32_t BldDataEOrbitsV0::nBPMS() const {
  return m_xtcObj->nBPMS();
}


ndarray<const double, 1> BldDataEOrbitsV0::fBPM_X() const {
  return m_xtcObj->fBPM_X(m_xtcObj);
}


ndarray<const double, 1> BldDataEOrbitsV0::fBPM_Y() const {
  return m_xtcObj->fBPM_Y(m_xtcObj);
}


ndarray<const double, 1> BldDataEOrbitsV0::fBPM_TMIT() const {
  return m_xtcObj->fBPM_TMIT(m_xtcObj);
}

Psana::Bld::BldDataPhaseCavity pds_to_psana(Pds::Bld::BldDataPhaseCavity pds)
{
  return Psana::Bld::BldDataPhaseCavity(pds.fitTime1(), pds.fitTime2(), pds.charge1(), pds.charge2());
}

BldDataIpimbV0::BldDataIpimbV0(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataIpimbV0()
  , m_xtcObj(xtcPtr)
  , _ipimbData(boost::shared_ptr<const Pds::Ipimb::DataV1>(xtcPtr, &xtcPtr->ipimbData()))
  , _ipimbConfig(boost::shared_ptr<const Pds::Ipimb::ConfigV1>(xtcPtr, &xtcPtr->ipimbConfig()))
  , _ipmFexData(psddl_pds2psana::Lusi::pds_to_psana(xtcPtr->ipmFexData()))
{
}
BldDataIpimbV0::~BldDataIpimbV0()
{
}

const Psana::Ipimb::DataV1& BldDataIpimbV0::ipimbData() const { return _ipimbData; }
const Psana::Ipimb::ConfigV1& BldDataIpimbV0::ipimbConfig() const { return _ipimbConfig; }
const Psana::Lusi::IpmFexV1& BldDataIpimbV0::ipmFexData() const { return _ipmFexData; }
BldDataIpimbV1::BldDataIpimbV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataIpimbV1()
  , m_xtcObj(xtcPtr)
  , _ipimbData(boost::shared_ptr<const Pds::Ipimb::DataV2>(xtcPtr, &xtcPtr->ipimbData()))
  , _ipimbConfig(boost::shared_ptr<const Pds::Ipimb::ConfigV2>(xtcPtr, &xtcPtr->ipimbConfig()))
  , _ipmFexData(psddl_pds2psana::Lusi::pds_to_psana(xtcPtr->ipmFexData()))
{
}
BldDataIpimbV1::~BldDataIpimbV1()
{
}

const Psana::Ipimb::DataV2& BldDataIpimbV1::ipimbData() const { return _ipimbData; }
const Psana::Ipimb::ConfigV2& BldDataIpimbV1::ipimbConfig() const { return _ipimbConfig; }
const Psana::Lusi::IpmFexV1& BldDataIpimbV1::ipmFexData() const { return _ipmFexData; }
BldDataPimV1::BldDataPimV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataPimV1()
  , m_xtcObj(xtcPtr)
  , _camConfig(boost::shared_ptr<const Pds::Pulnix::TM6740ConfigV2>(xtcPtr, &xtcPtr->camConfig()))
  , _pimConfig(psddl_pds2psana::Lusi::pds_to_psana(xtcPtr->pimConfig()))
  , _frame(boost::shared_ptr<const Pds::Camera::FrameV1>(xtcPtr, &xtcPtr->frame()))
{
}
BldDataPimV1::~BldDataPimV1()
{
}

const Psana::Pulnix::TM6740ConfigV2& BldDataPimV1::camConfig() const { return _camConfig; }
const Psana::Lusi::PimImageConfigV1& BldDataPimV1::pimConfig() const { return _pimConfig; }
const Psana::Camera::FrameV1& BldDataPimV1::frame() const { return _frame; }
BldDataUsdUsbV1::BldDataUsdUsbV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataUsdUsbV1()
  , m_xtcObj(xtcPtr)
  , _config(boost::shared_ptr<const Pds::UsdUsb::ConfigV1>(xtcPtr, &xtcPtr->config()))
  , _fexConfig(boost::shared_ptr<const Pds::UsdUsb::FexConfigV1>(xtcPtr, &xtcPtr->fexConfig()))
  , _data(boost::shared_ptr<const Pds::UsdUsb::DataV1>(xtcPtr, &xtcPtr->data()))
  , _fexData(boost::shared_ptr<const Pds::UsdUsb::FexDataV1>(xtcPtr, &xtcPtr->fexData()))
{
}
BldDataUsdUsbV1::~BldDataUsdUsbV1()
{
}

const Psana::UsdUsb::ConfigV1& BldDataUsdUsbV1::config() const { return _config; }
const Psana::UsdUsb::FexConfigV1& BldDataUsdUsbV1::fexConfig() const { return _fexConfig; }
const Psana::UsdUsb::DataV1& BldDataUsdUsbV1::data() const { return _data; }
const Psana::UsdUsb::FexDataV1& BldDataUsdUsbV1::fexData() const { return _fexData; }
BldDataGMDV0::BldDataGMDV0(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataGMDV0()
  , m_xtcObj(xtcPtr)
{
}
BldDataGMDV0::~BldDataGMDV0()
{
}


const char* BldDataGMDV0::gasType() const {
  return m_xtcObj->gasType();
}


double BldDataGMDV0::pressure() const {
  return m_xtcObj->pressure();
}


double BldDataGMDV0::temperature() const {
  return m_xtcObj->temperature();
}


double BldDataGMDV0::current() const {
  return m_xtcObj->current();
}


double BldDataGMDV0::hvMeshElectron() const {
  return m_xtcObj->hvMeshElectron();
}


double BldDataGMDV0::hvMeshIon() const {
  return m_xtcObj->hvMeshIon();
}


double BldDataGMDV0::hvMultIon() const {
  return m_xtcObj->hvMultIon();
}


double BldDataGMDV0::chargeQ() const {
  return m_xtcObj->chargeQ();
}


double BldDataGMDV0::photonEnergy() const {
  return m_xtcObj->photonEnergy();
}


double BldDataGMDV0::multPulseIntensity() const {
  return m_xtcObj->multPulseIntensity();
}


double BldDataGMDV0::keithleyPulseIntensity() const {
  return m_xtcObj->keithleyPulseIntensity();
}


double BldDataGMDV0::pulseEnergy() const {
  return m_xtcObj->pulseEnergy();
}


double BldDataGMDV0::pulseEnergyFEE() const {
  return m_xtcObj->pulseEnergyFEE();
}


double BldDataGMDV0::transmission() const {
  return m_xtcObj->transmission();
}


double BldDataGMDV0::transmissionFEE() const {
  return m_xtcObj->transmissionFEE();
}

BldDataGMDV1::BldDataGMDV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataGMDV1()
  , m_xtcObj(xtcPtr)
{
}
BldDataGMDV1::~BldDataGMDV1()
{
}


double BldDataGMDV1::milliJoulesPerPulse() const {
  return m_xtcObj->milliJoulesPerPulse();
}


double BldDataGMDV1::milliJoulesAverage() const {
  return m_xtcObj->milliJoulesAverage();
}


double BldDataGMDV1::correctedSumPerPulse() const {
  return m_xtcObj->correctedSumPerPulse();
}


double BldDataGMDV1::bgValuePerSample() const {
  return m_xtcObj->bgValuePerSample();
}


double BldDataGMDV1::relativeEnergyPerPulse() const {
  return m_xtcObj->relativeEnergyPerPulse();
}

BldDataGMDV2::BldDataGMDV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataGMDV2()
  , m_xtcObj(xtcPtr)
{
}
BldDataGMDV2::~BldDataGMDV2()
{
}


double BldDataGMDV2::milliJoulesPerPulse() const {
  return m_xtcObj->milliJoulesPerPulse();
}


double BldDataGMDV2::milliJoulesAverage() const {
  return m_xtcObj->milliJoulesAverage();
}


double BldDataGMDV2::sumAllPeaksFiltBkgd() const {
  return m_xtcObj->sumAllPeaksFiltBkgd();
}


double BldDataGMDV2::rawAvgBkgd() const {
  return m_xtcObj->rawAvgBkgd();
}


double BldDataGMDV2::relativeEnergyPerPulse() const {
  return m_xtcObj->relativeEnergyPerPulse();
}


double BldDataGMDV2::sumAllPeaksRawBkgd() const {
  return m_xtcObj->sumAllPeaksRawBkgd();
}

template <typename Config>
BldDataAcqADCV1<Config>::BldDataAcqADCV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Bld::BldDataAcqADCV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
  , _config(boost::shared_ptr<const Pds::Acqiris::ConfigV1>(xtcPtr, &xtcPtr->config()))
  , _data(boost::shared_ptr<const Pds::Acqiris::DataDescV1>(xtcPtr, &xtcPtr->data()), cfgPtr)
{
}
template <typename Config>
BldDataAcqADCV1<Config>::~BldDataAcqADCV1()
{
}

template <typename Config>
const Psana::Acqiris::ConfigV1& BldDataAcqADCV1<Config>::config() const { return _config; }
template <typename Config>
const Psana::Acqiris::DataDescV1& BldDataAcqADCV1<Config>::data() const { return _data; }
template class BldDataAcqADCV1<Pds::Acqiris::ConfigV1>;
BldDataSpectrometerV0::BldDataSpectrometerV0(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataSpectrometerV0()
  , m_xtcObj(xtcPtr)
{
}
BldDataSpectrometerV0::~BldDataSpectrometerV0()
{
}


ndarray<const uint32_t, 1> BldDataSpectrometerV0::hproj() const {
  return m_xtcObj->hproj(m_xtcObj);
}


ndarray<const uint32_t, 1> BldDataSpectrometerV0::vproj() const {
  return m_xtcObj->vproj(m_xtcObj);
}

BldDataSpectrometerV1::BldDataSpectrometerV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataSpectrometerV1()
  , m_xtcObj(xtcPtr)
{
}
BldDataSpectrometerV1::~BldDataSpectrometerV1()
{
}


uint32_t BldDataSpectrometerV1::width() const {
  return m_xtcObj->width();
}


uint32_t BldDataSpectrometerV1::hproj_y1() const {
  return m_xtcObj->hproj_y1();
}


uint32_t BldDataSpectrometerV1::hproj_y2() const {
  return m_xtcObj->hproj_y2();
}


double BldDataSpectrometerV1::comRaw() const {
  return m_xtcObj->comRaw();
}


double BldDataSpectrometerV1::baseline() const {
  return m_xtcObj->baseline();
}


double BldDataSpectrometerV1::com() const {
  return m_xtcObj->com();
}


double BldDataSpectrometerV1::integral() const {
  return m_xtcObj->integral();
}


uint32_t BldDataSpectrometerV1::nPeaks() const {
  return m_xtcObj->nPeaks();
}


ndarray<const int32_t, 1> BldDataSpectrometerV1::hproj() const {
  return m_xtcObj->hproj(m_xtcObj);
}


ndarray<const double, 1> BldDataSpectrometerV1::peakPos() const {
  return m_xtcObj->peakPos(m_xtcObj);
}


ndarray<const double, 1> BldDataSpectrometerV1::peakHeight() const {
  return m_xtcObj->peakHeight(m_xtcObj);
}


ndarray<const double, 1> BldDataSpectrometerV1::FWHM() const {
  return m_xtcObj->FWHM(m_xtcObj);
}

BldDataAnalogInputV1::BldDataAnalogInputV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataAnalogInputV1()
  , m_xtcObj(xtcPtr)
{
}
BldDataAnalogInputV1::~BldDataAnalogInputV1()
{
}


uint32_t BldDataAnalogInputV1::numChannels() const {
  return m_xtcObj->numChannels();
}


ndarray<const double, 1> BldDataAnalogInputV1::channelVoltages() const {
  return m_xtcObj->channelVoltages(m_xtcObj);
}

BldDataBeamMonitorV1::BldDataBeamMonitorV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Bld::BldDataBeamMonitorV1()
  , m_xtcObj(xtcPtr)
{
}
BldDataBeamMonitorV1::~BldDataBeamMonitorV1()
{
}


double BldDataBeamMonitorV1::TotalIntensity() const {
  return m_xtcObj->TotalIntensity();
}


double BldDataBeamMonitorV1::X_Position() const {
  return m_xtcObj->X_Position();
}


double BldDataBeamMonitorV1::Y_Position() const {
  return m_xtcObj->Y_Position();
}


double BldDataBeamMonitorV1::peakA() const {
  return m_xtcObj->peakA();
}


double BldDataBeamMonitorV1::peakT() const {
  return m_xtcObj->peakT();
}


ndarray<const double, 1> BldDataBeamMonitorV1::Channel_Intensity() const {
  return m_xtcObj->Channel_Intensity(m_xtcObj);
}

} // namespace Bld
} // namespace psddl_pds2psana
