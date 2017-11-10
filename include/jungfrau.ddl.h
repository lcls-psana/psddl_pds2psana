#ifndef PSDDL_PDS2PSANA_JUNGFRAU_DDL_H
#define PSDDL_PDS2PSANA_JUNGFRAU_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/jungfrau.ddl.h"
#include "pdsdata/psddl/jungfrau.ddl.h"
namespace psddl_pds2psana {
namespace Jungfrau {

class ModuleConfigV1 : public Psana::Jungfrau::ModuleConfigV1 {
public:
  typedef Pds::Jungfrau::ModuleConfigV1 XtcType;
  typedef Psana::Jungfrau::ModuleConfigV1 PsanaType;
  ModuleConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ModuleConfigV1();
  virtual uint64_t serialNumber() const;
  virtual uint64_t moduleVersion() const;
  virtual uint64_t firmwareVersion() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV1 : public Psana::Jungfrau::ConfigV1 {
public:
  typedef Pds::Jungfrau::ConfigV1 XtcType;
  typedef Psana::Jungfrau::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t numberOfModules() const;
  virtual uint32_t numberOfRowsPerModule() const;
  virtual uint32_t numberOfColumnsPerModule() const;
  virtual uint32_t biasVoltage() const;
  virtual Psana::Jungfrau::ConfigV1::GainMode gainMode() const;
  virtual Psana::Jungfrau::ConfigV1::SpeedMode speedMode() const;
  virtual double triggerDelay() const;
  virtual double exposureTime() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixels() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV2 : public Psana::Jungfrau::ConfigV2 {
public:
  typedef Pds::Jungfrau::ConfigV2 XtcType;
  typedef Psana::Jungfrau::ConfigV2 PsanaType;
  ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV2();
  virtual uint32_t numberOfModules() const;
  virtual uint32_t numberOfRowsPerModule() const;
  virtual uint32_t numberOfColumnsPerModule() const;
  virtual uint32_t biasVoltage() const;
  virtual Psana::Jungfrau::ConfigV2::GainMode gainMode() const;
  virtual Psana::Jungfrau::ConfigV2::SpeedMode speedMode() const;
  virtual double triggerDelay() const;
  virtual double exposureTime() const;
  virtual double exposurePeriod() const;
  virtual uint16_t vb_ds() const;
  virtual uint16_t vb_comp() const;
  virtual uint16_t vb_pixbuf() const;
  virtual uint16_t vref_ds() const;
  virtual uint16_t vref_comp() const;
  virtual uint16_t vref_prech() const;
  virtual uint16_t vin_com() const;
  virtual uint16_t vdd_prot() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixels() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV3 : public Psana::Jungfrau::ConfigV3 {
public:
  typedef Pds::Jungfrau::ConfigV3 XtcType;
  typedef Psana::Jungfrau::ConfigV3 PsanaType;
  ConfigV3(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV3();
  virtual uint32_t numberOfModules() const;
  virtual uint32_t numberOfRowsPerModule() const;
  virtual uint32_t numberOfColumnsPerModule() const;
  virtual uint32_t biasVoltage() const;
  virtual Psana::Jungfrau::ConfigV3::GainMode gainMode() const;
  virtual Psana::Jungfrau::ConfigV3::SpeedMode speedMode() const;
  virtual double triggerDelay() const;
  virtual double exposureTime() const;
  virtual double exposurePeriod() const;
  virtual uint16_t vb_ds() const;
  virtual uint16_t vb_comp() const;
  virtual uint16_t vb_pixbuf() const;
  virtual uint16_t vref_ds() const;
  virtual uint16_t vref_comp() const;
  virtual uint16_t vref_prech() const;
  virtual uint16_t vin_com() const;
  virtual uint16_t vdd_prot() const;
  virtual const Psana::Jungfrau::ModuleConfigV1& moduleConfig(uint32_t i0) const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixels() const;
  virtual std::vector<int> moduleConfig_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::Jungfrau::ModuleConfigV1 > _moduleConfig;
};


class ModuleInfoV1 : public Psana::Jungfrau::ModuleInfoV1 {
public:
  typedef Pds::Jungfrau::ModuleInfoV1 XtcType;
  typedef Psana::Jungfrau::ModuleInfoV1 PsanaType;
  ModuleInfoV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ModuleInfoV1();
  virtual uint64_t timestamp() const;
  virtual uint32_t exposureTime() const;
  virtual uint16_t moduleID() const;
  virtual uint16_t xCoord() const;
  virtual uint16_t yCoord() const;
  virtual uint16_t zCoord() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


template <typename Config>
class ElementV1 : public Psana::Jungfrau::ElementV1 {
public:
  typedef Pds::Jungfrau::ElementV1 XtcType;
  typedef Psana::Jungfrau::ElementV1 PsanaType;
  ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV1();
  virtual uint32_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 3> frame() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};


template <typename Config>
class ElementV2 : public Psana::Jungfrau::ElementV2 {
public:
  typedef Pds::Jungfrau::ElementV2 XtcType;
  typedef Psana::Jungfrau::ElementV2 PsanaType;
  ElementV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV2();
  virtual uint64_t frameNumber() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual const Psana::Jungfrau::ModuleInfoV1& moduleInfo(uint32_t i0) const;
  virtual ndarray<const uint16_t, 3> frame() const;
  virtual std::vector<int> moduleInfo_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
  std::vector< psddl_pds2psana::Jungfrau::ModuleInfoV1 > _moduleInfo;
};

} // namespace Jungfrau
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_JUNGFRAU_DDL_H
