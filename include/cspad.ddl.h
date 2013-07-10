#ifndef PSDDL_PDS2PSANA_CSPAD_DDL_H
#define PSDDL_PDS2PSANA_CSPAD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/cspad.ddl.h"
#include "psddl_pdsdata/cspad.ddl.h"
namespace psddl_pds2psana {
namespace CsPad {

class CsPadDigitalPotsCfg : public Psana::CsPad::CsPadDigitalPotsCfg {
public:
  typedef PsddlPds::CsPad::CsPadDigitalPotsCfg XtcType;
  typedef Psana::CsPad::CsPadDigitalPotsCfg PsanaType;
  CsPadDigitalPotsCfg(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~CsPadDigitalPotsCfg();
  virtual ndarray<const uint8_t, 1> pots() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

Psana::CsPad::CsPadReadOnlyCfg pds_to_psana(PsddlPds::CsPad::CsPadReadOnlyCfg pds);

Psana::CsPad::ProtectionSystemThreshold pds_to_psana(PsddlPds::CsPad::ProtectionSystemThreshold pds);


class CsPadGainMapCfg : public Psana::CsPad::CsPadGainMapCfg {
public:
  typedef PsddlPds::CsPad::CsPadGainMapCfg XtcType;
  typedef Psana::CsPad::CsPadGainMapCfg PsanaType;
  CsPadGainMapCfg(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~CsPadGainMapCfg();
  virtual ndarray<const uint16_t, 2> gainMap() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV1QuadReg : public Psana::CsPad::ConfigV1QuadReg {
public:
  typedef PsddlPds::CsPad::ConfigV1QuadReg XtcType;
  typedef Psana::CsPad::ConfigV1QuadReg PsanaType;
  ConfigV1QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1QuadReg();
  virtual ndarray<const uint32_t, 1> shiftSelect() const;
  virtual ndarray<const uint32_t, 1> edgeSelect() const;
  virtual uint32_t readClkSet() const;
  virtual uint32_t readClkHold() const;
  virtual uint32_t dataMode() const;
  virtual uint32_t prstSel() const;
  virtual uint32_t acqDelay() const;
  virtual uint32_t intTime() const;
  virtual uint32_t digDelay() const;
  virtual uint32_t ampIdle() const;
  virtual uint32_t injTotal() const;
  virtual uint32_t rowColShiftPer() const;
  virtual const Psana::CsPad::CsPadReadOnlyCfg& ro() const;
  virtual const Psana::CsPad::CsPadDigitalPotsCfg& dp() const;
  virtual const Psana::CsPad::CsPadGainMapCfg& gm() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  Psana::CsPad::CsPadReadOnlyCfg _readOnly;
  psddl_pds2psana::CsPad::CsPadDigitalPotsCfg _digitalPots;
  psddl_pds2psana::CsPad::CsPadGainMapCfg _gainMap;
};


class ConfigV2QuadReg : public Psana::CsPad::ConfigV2QuadReg {
public:
  typedef PsddlPds::CsPad::ConfigV2QuadReg XtcType;
  typedef Psana::CsPad::ConfigV2QuadReg PsanaType;
  ConfigV2QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV2QuadReg();
  virtual ndarray<const uint32_t, 1> shiftSelect() const;
  virtual ndarray<const uint32_t, 1> edgeSelect() const;
  virtual uint32_t readClkSet() const;
  virtual uint32_t readClkHold() const;
  virtual uint32_t dataMode() const;
  virtual uint32_t prstSel() const;
  virtual uint32_t acqDelay() const;
  virtual uint32_t intTime() const;
  virtual uint32_t digDelay() const;
  virtual uint32_t ampIdle() const;
  virtual uint32_t injTotal() const;
  virtual uint32_t rowColShiftPer() const;
  virtual uint32_t ampReset() const;
  virtual uint32_t digCount() const;
  virtual uint32_t digPeriod() const;
  virtual const Psana::CsPad::CsPadReadOnlyCfg& ro() const;
  virtual const Psana::CsPad::CsPadDigitalPotsCfg& dp() const;
  virtual const Psana::CsPad::CsPadGainMapCfg& gm() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  Psana::CsPad::CsPadReadOnlyCfg _readOnly;
  psddl_pds2psana::CsPad::CsPadDigitalPotsCfg _digitalPots;
  psddl_pds2psana::CsPad::CsPadGainMapCfg _gainMap;
};


class ConfigV3QuadReg : public Psana::CsPad::ConfigV3QuadReg {
public:
  typedef PsddlPds::CsPad::ConfigV3QuadReg XtcType;
  typedef Psana::CsPad::ConfigV3QuadReg PsanaType;
  ConfigV3QuadReg(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV3QuadReg();
  virtual ndarray<const uint32_t, 1> shiftSelect() const;
  virtual ndarray<const uint32_t, 1> edgeSelect() const;
  virtual uint32_t readClkSet() const;
  virtual uint32_t readClkHold() const;
  virtual uint32_t dataMode() const;
  virtual uint32_t prstSel() const;
  virtual uint32_t acqDelay() const;
  virtual uint32_t intTime() const;
  virtual uint32_t digDelay() const;
  virtual uint32_t ampIdle() const;
  virtual uint32_t injTotal() const;
  virtual uint32_t rowColShiftPer() const;
  virtual uint32_t ampReset() const;
  virtual uint32_t digCount() const;
  virtual uint32_t digPeriod() const;
  virtual uint32_t biasTuning() const;
  virtual uint32_t pdpmndnmBalance() const;
  virtual const Psana::CsPad::CsPadReadOnlyCfg& ro() const;
  virtual const Psana::CsPad::CsPadDigitalPotsCfg& dp() const;
  virtual const Psana::CsPad::CsPadGainMapCfg& gm() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  Psana::CsPad::CsPadReadOnlyCfg _readOnly;
  psddl_pds2psana::CsPad::CsPadDigitalPotsCfg _digitalPots;
  psddl_pds2psana::CsPad::CsPadGainMapCfg _gainMap;
};


class ConfigV1 : public Psana::CsPad::ConfigV1 {
public:
  typedef PsddlPds::CsPad::ConfigV1 XtcType;
  typedef Psana::CsPad::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual const Psana::CsPad::ConfigV1QuadReg& quads(uint32_t i0) const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t numQuads() const;
  virtual uint32_t numSect() const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::CsPad::ConfigV1QuadReg > _quads;
};


class ConfigV2 : public Psana::CsPad::ConfigV2 {
public:
  typedef PsddlPds::CsPad::ConfigV2 XtcType;
  typedef Psana::CsPad::ConfigV2 PsanaType;
  ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV2();
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV1QuadReg& quads(uint32_t i0) const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t roiMask(uint32_t iq) const;
  virtual uint32_t numAsicsStored(uint32_t iq) const;
  virtual uint32_t numQuads() const;
  virtual uint32_t numSect() const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  std::vector< psddl_pds2psana::CsPad::ConfigV1QuadReg > _quads;
};


class ConfigV3 : public Psana::CsPad::ConfigV3 {
public:
  typedef PsddlPds::CsPad::ConfigV3 XtcType;
  typedef Psana::CsPad::ConfigV3 PsanaType;
  ConfigV3(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV3();
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> protectionThresholds() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV1QuadReg& quads(uint32_t i0) const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t roiMask(uint32_t iq) const;
  virtual uint32_t numAsicsStored(uint32_t iq) const;
  virtual uint32_t numQuads() const;
  virtual uint32_t numSect() const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  ndarray<Psana::CsPad::ProtectionSystemThreshold, 1> _protectionThresholds_ndarray_storage_;
  std::vector< psddl_pds2psana::CsPad::ConfigV1QuadReg > _quads;
};


class ConfigV4 : public Psana::CsPad::ConfigV4 {
public:
  typedef PsddlPds::CsPad::ConfigV4 XtcType;
  typedef Psana::CsPad::ConfigV4 PsanaType;
  ConfigV4(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV4();
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> protectionThresholds() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV2QuadReg& quads(uint32_t i0) const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t roiMask(uint32_t iq) const;
  virtual uint32_t numAsicsStored(uint32_t iq) const;
  virtual uint32_t numQuads() const;
  virtual uint32_t numSect() const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  ndarray<Psana::CsPad::ProtectionSystemThreshold, 1> _protectionThresholds_ndarray_storage_;
  std::vector< psddl_pds2psana::CsPad::ConfigV2QuadReg > _quads;
};


class ConfigV5 : public Psana::CsPad::ConfigV5 {
public:
  typedef PsddlPds::CsPad::ConfigV5 XtcType;
  typedef Psana::CsPad::ConfigV5 PsanaType;
  ConfigV5(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV5();
  virtual uint32_t concentratorVersion() const;
  virtual uint32_t runDelay() const;
  virtual uint32_t eventCode() const;
  virtual ndarray<const Psana::CsPad::ProtectionSystemThreshold, 1> protectionThresholds() const;
  virtual uint32_t protectionEnable() const;
  virtual uint32_t inactiveRunMode() const;
  virtual uint32_t activeRunMode() const;
  virtual uint32_t internalTriggerDelay() const;
  virtual uint32_t tdi() const;
  virtual uint32_t payloadSize() const;
  virtual uint32_t badAsicMask0() const;
  virtual uint32_t badAsicMask1() const;
  virtual uint32_t asicMask() const;
  virtual uint32_t quadMask() const;
  virtual uint32_t roiMasks() const;
  virtual const Psana::CsPad::ConfigV3QuadReg& quads(uint32_t i0) const;
  virtual uint32_t numAsicsRead() const;
  virtual uint32_t roiMask(uint32_t iq) const;
  virtual uint32_t numAsicsStored(uint32_t iq) const;
  virtual uint32_t numQuads() const;
  virtual uint32_t numSect() const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  ndarray<Psana::CsPad::ProtectionSystemThreshold, 1> _protectionThresholds_ndarray_storage_;
  std::vector< psddl_pds2psana::CsPad::ConfigV3QuadReg > _quads;
};


template <typename Config>
class ElementV1 : public Psana::CsPad::ElementV1 {
public:
  typedef PsddlPds::CsPad::ElementV1 XtcType;
  typedef Psana::CsPad::ElementV1 PsanaType;
  ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV1();
  virtual uint32_t virtual_channel() const;
  virtual uint32_t lane() const;
  virtual uint32_t tid() const;
  virtual uint32_t acq_count() const;
  virtual uint32_t op_code() const;
  virtual uint32_t quad() const;
  virtual uint32_t seq_count() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 1> sb_temp() const;
  virtual uint32_t frame_type() const;
  virtual ndarray<const int16_t, 3> data() const;
  virtual uint32_t sectionMask() const;
  virtual float common_mode(uint32_t section) const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};


template <typename Config>
class DataV1 : public Psana::CsPad::DataV1 {
public:
  typedef PsddlPds::CsPad::DataV1 XtcType;
  typedef Psana::CsPad::DataV1 PsanaType;
  DataV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~DataV1();
  virtual const Psana::CsPad::ElementV1& quads(uint32_t i0) const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
  std::vector< psddl_pds2psana::CsPad::ElementV1<Config> > _quads;
};


template <typename Config>
class ElementV2 : public Psana::CsPad::ElementV2 {
public:
  typedef PsddlPds::CsPad::ElementV2 XtcType;
  typedef Psana::CsPad::ElementV2 PsanaType;
  ElementV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV2();
  virtual uint32_t virtual_channel() const;
  virtual uint32_t lane() const;
  virtual uint32_t tid() const;
  virtual uint32_t acq_count() const;
  virtual uint32_t op_code() const;
  virtual uint32_t quad() const;
  virtual uint32_t seq_count() const;
  virtual uint32_t ticks() const;
  virtual uint32_t fiducials() const;
  virtual ndarray<const uint16_t, 1> sb_temp() const;
  virtual uint32_t frame_type() const;
  virtual ndarray<const int16_t, 3> data() const;
  virtual uint32_t sectionMask() const;
  virtual float common_mode(uint32_t section) const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};


template <typename Config>
class DataV2 : public Psana::CsPad::DataV2 {
public:
  typedef PsddlPds::CsPad::DataV2 XtcType;
  typedef Psana::CsPad::DataV2 PsanaType;
  DataV2(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~DataV2();
  virtual const Psana::CsPad::ElementV2& quads(uint32_t i0) const;
  virtual std::vector<int> quads_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
  std::vector< psddl_pds2psana::CsPad::ElementV2<Config> > _quads;
};

} // namespace CsPad
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_CSPAD_DDL_H
