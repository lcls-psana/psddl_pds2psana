#ifndef PSDDL_PDS2PSANA_BLD_DDL_H
#define PSDDL_PDS2PSANA_BLD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/bld.ddl.h"
#include "pdsdata/psddl/bld.ddl.h"
#include "psddl_pds2psana/acqiris.ddl.h"
#include "psddl_pds2psana/camera.ddl.h"
#include "psddl_pds2psana/ipimb.ddl.h"
#include "psddl_pds2psana/lusi.ddl.h"
#include "psddl_pds2psana/pulnix.ddl.h"
#include "psddl_pds2psana/usdusb.ddl.h"
namespace psddl_pds2psana {
namespace Bld {
Psana::Bld::BldDataFEEGasDetEnergy pds_to_psana(Pds::Bld::BldDataFEEGasDetEnergy pds);

Psana::Bld::BldDataFEEGasDetEnergyV1 pds_to_psana(Pds::Bld::BldDataFEEGasDetEnergyV1 pds);

Psana::Bld::BldDataEBeamV0 pds_to_psana(Pds::Bld::BldDataEBeamV0 pds);

Psana::Bld::BldDataEBeamV1 pds_to_psana(Pds::Bld::BldDataEBeamV1 pds);

Psana::Bld::BldDataEBeamV2 pds_to_psana(Pds::Bld::BldDataEBeamV2 pds);

Psana::Bld::BldDataEBeamV3 pds_to_psana(Pds::Bld::BldDataEBeamV3 pds);

Psana::Bld::BldDataEBeamV4 pds_to_psana(Pds::Bld::BldDataEBeamV4 pds);

Psana::Bld::BldDataEBeamV5 pds_to_psana(Pds::Bld::BldDataEBeamV5 pds);

Psana::Bld::BldDataEBeamV6 pds_to_psana(Pds::Bld::BldDataEBeamV6 pds);

Psana::Bld::BldDataEBeamV7 pds_to_psana(Pds::Bld::BldDataEBeamV7 pds);


class BldDataEOrbitsV0 : public Psana::Bld::BldDataEOrbitsV0 {
public:
  typedef Pds::Bld::BldDataEOrbitsV0 XtcType;
  typedef Psana::Bld::BldDataEOrbitsV0 PsanaType;
  BldDataEOrbitsV0(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataEOrbitsV0();
  virtual uint32_t nBPMS() const;
  virtual ndarray<const double, 1> fBPM_X() const;
  virtual ndarray<const double, 1> fBPM_Y() const;
  virtual ndarray<const double, 1> fBPM_TMIT() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

Psana::Bld::BldDataPhaseCavity pds_to_psana(Pds::Bld::BldDataPhaseCavity pds);


class BldDataIpimbV0 : public Psana::Bld::BldDataIpimbV0 {
public:
  typedef Pds::Bld::BldDataIpimbV0 XtcType;
  typedef Psana::Bld::BldDataIpimbV0 PsanaType;
  BldDataIpimbV0(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataIpimbV0();
  virtual const Psana::Ipimb::DataV1& ipimbData() const;
  virtual const Psana::Ipimb::ConfigV1& ipimbConfig() const;
  virtual const Psana::Lusi::IpmFexV1& ipmFexData() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  psddl_pds2psana::Ipimb::DataV1 _ipimbData;
  psddl_pds2psana::Ipimb::ConfigV1 _ipimbConfig;
  Psana::Lusi::IpmFexV1 _ipmFexData;
};


class BldDataIpimbV1 : public Psana::Bld::BldDataIpimbV1 {
public:
  typedef Pds::Bld::BldDataIpimbV1 XtcType;
  typedef Psana::Bld::BldDataIpimbV1 PsanaType;
  BldDataIpimbV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataIpimbV1();
  virtual const Psana::Ipimb::DataV2& ipimbData() const;
  virtual const Psana::Ipimb::ConfigV2& ipimbConfig() const;
  virtual const Psana::Lusi::IpmFexV1& ipmFexData() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  psddl_pds2psana::Ipimb::DataV2 _ipimbData;
  psddl_pds2psana::Ipimb::ConfigV2 _ipimbConfig;
  Psana::Lusi::IpmFexV1 _ipmFexData;
};


class BldDataPimV1 : public Psana::Bld::BldDataPimV1 {
public:
  typedef Pds::Bld::BldDataPimV1 XtcType;
  typedef Psana::Bld::BldDataPimV1 PsanaType;
  BldDataPimV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataPimV1();
  virtual const Psana::Pulnix::TM6740ConfigV2& camConfig() const;
  virtual const Psana::Lusi::PimImageConfigV1& pimConfig() const;
  virtual const Psana::Camera::FrameV1& frame() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  psddl_pds2psana::Pulnix::TM6740ConfigV2 _camConfig;
  Psana::Lusi::PimImageConfigV1 _pimConfig;
  psddl_pds2psana::Camera::FrameV1 _frame;
};


class BldDataUsdUsbV1 : public Psana::Bld::BldDataUsdUsbV1 {
public:
  typedef Pds::Bld::BldDataUsdUsbV1 XtcType;
  typedef Psana::Bld::BldDataUsdUsbV1 PsanaType;
  BldDataUsdUsbV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataUsdUsbV1();
  virtual const Psana::UsdUsb::ConfigV1& config() const;
  virtual const Psana::UsdUsb::FexConfigV1& fexConfig() const;
  virtual const Psana::UsdUsb::DataV1& data() const;
  virtual const Psana::UsdUsb::FexDataV1& fexData() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  psddl_pds2psana::UsdUsb::ConfigV1 _config;
  psddl_pds2psana::UsdUsb::FexConfigV1 _fexConfig;
  psddl_pds2psana::UsdUsb::DataV1 _data;
  psddl_pds2psana::UsdUsb::FexDataV1 _fexData;
};


class BldDataGMDV0 : public Psana::Bld::BldDataGMDV0 {
public:
  typedef Pds::Bld::BldDataGMDV0 XtcType;
  typedef Psana::Bld::BldDataGMDV0 PsanaType;
  BldDataGMDV0(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataGMDV0();
  virtual const char* gasType() const;
  virtual double pressure() const;
  virtual double temperature() const;
  virtual double current() const;
  virtual double hvMeshElectron() const;
  virtual double hvMeshIon() const;
  virtual double hvMultIon() const;
  virtual double chargeQ() const;
  virtual double photonEnergy() const;
  virtual double multPulseIntensity() const;
  virtual double keithleyPulseIntensity() const;
  virtual double pulseEnergy() const;
  virtual double pulseEnergyFEE() const;
  virtual double transmission() const;
  virtual double transmissionFEE() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class BldDataGMDV1 : public Psana::Bld::BldDataGMDV1 {
public:
  typedef Pds::Bld::BldDataGMDV1 XtcType;
  typedef Psana::Bld::BldDataGMDV1 PsanaType;
  BldDataGMDV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataGMDV1();
  virtual double milliJoulesPerPulse() const;
  virtual double milliJoulesAverage() const;
  virtual double correctedSumPerPulse() const;
  virtual double bgValuePerSample() const;
  virtual double relativeEnergyPerPulse() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class BldDataGMDV2 : public Psana::Bld::BldDataGMDV2 {
public:
  typedef Pds::Bld::BldDataGMDV2 XtcType;
  typedef Psana::Bld::BldDataGMDV2 PsanaType;
  BldDataGMDV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataGMDV2();
  virtual double milliJoulesPerPulse() const;
  virtual double milliJoulesAverage() const;
  virtual double sumAllPeaksFiltBkgd() const;
  virtual double rawAvgBkgd() const;
  virtual double relativeEnergyPerPulse() const;
  virtual double sumAllPeaksRawBkgd() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


template <typename Config>
class BldDataAcqADCV1 : public Psana::Bld::BldDataAcqADCV1 {
public:
  typedef Pds::Bld::BldDataAcqADCV1 XtcType;
  typedef Psana::Bld::BldDataAcqADCV1 PsanaType;
  BldDataAcqADCV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~BldDataAcqADCV1();
  virtual const Psana::Acqiris::ConfigV1& config() const;
  virtual const Psana::Acqiris::DataDescV1& data() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
  psddl_pds2psana::Acqiris::ConfigV1 _config;
  psddl_pds2psana::Acqiris::DataDescV1<Config> _data;
};


class BldDataSpectrometerV0 : public Psana::Bld::BldDataSpectrometerV0 {
public:
  typedef Pds::Bld::BldDataSpectrometerV0 XtcType;
  typedef Psana::Bld::BldDataSpectrometerV0 PsanaType;
  BldDataSpectrometerV0(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataSpectrometerV0();
  virtual ndarray<const uint32_t, 1> hproj() const;
  virtual ndarray<const uint32_t, 1> vproj() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class BldDataSpectrometerV1 : public Psana::Bld::BldDataSpectrometerV1 {
public:
  typedef Pds::Bld::BldDataSpectrometerV1 XtcType;
  typedef Psana::Bld::BldDataSpectrometerV1 PsanaType;
  BldDataSpectrometerV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataSpectrometerV1();
  virtual uint32_t width() const;
  virtual uint32_t hproj_y1() const;
  virtual uint32_t hproj_y2() const;
  virtual double comRaw() const;
  virtual double baseline() const;
  virtual double com() const;
  virtual double integral() const;
  virtual uint32_t nPeaks() const;
  virtual ndarray<const int32_t, 1> hproj() const;
  virtual ndarray<const double, 1> peakPos() const;
  virtual ndarray<const double, 1> peakHeight() const;
  virtual ndarray<const double, 1> FWHM() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class BldDataAnalogInputV1 : public Psana::Bld::BldDataAnalogInputV1 {
public:
  typedef Pds::Bld::BldDataAnalogInputV1 XtcType;
  typedef Psana::Bld::BldDataAnalogInputV1 PsanaType;
  BldDataAnalogInputV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataAnalogInputV1();
  virtual uint32_t numChannels() const;
  virtual ndarray<const double, 1> channelVoltages() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class BldDataBeamMonitorV1 : public Psana::Bld::BldDataBeamMonitorV1 {
public:
  typedef Pds::Bld::BldDataBeamMonitorV1 XtcType;
  typedef Psana::Bld::BldDataBeamMonitorV1 PsanaType;
  BldDataBeamMonitorV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~BldDataBeamMonitorV1();
  virtual double TotalIntensity() const;
  virtual double X_Position() const;
  virtual double Y_Position() const;
  virtual double peakA() const;
  virtual double peakT() const;
  virtual ndarray<const double, 1> Channel_Intensity() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

} // namespace Bld
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_BLD_DDL_H
