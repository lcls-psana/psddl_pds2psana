#ifndef PSDDL_PDS2PSANA_ZYLA_DDL_H
#define PSDDL_PDS2PSANA_ZYLA_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/zyla.ddl.h"
#include "pdsdata/psddl/zyla.ddl.h"
#include "psddl_pds2psana/istar.ddl.h"
namespace psddl_pds2psana {
namespace Zyla {

class ConfigV1 : public Psana::Zyla::ConfigV1 {
public:
  typedef Pds::Zyla::ConfigV1 XtcType;
  typedef Psana::Zyla::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual Psana::Zyla::ConfigV1::ATBool cooling() const;
  virtual Psana::Zyla::ConfigV1::ATBool overlap() const;
  virtual Psana::Zyla::ConfigV1::ATBool noiseFilter() const;
  virtual Psana::Zyla::ConfigV1::ATBool blemishCorrection() const;
  virtual Psana::Zyla::ConfigV1::ShutteringMode shutter() const;
  virtual Psana::Zyla::ConfigV1::FanSpeed fanSpeed() const;
  virtual Psana::Zyla::ConfigV1::ReadoutRate readoutRate() const;
  virtual Psana::Zyla::ConfigV1::TriggerMode triggerMode() const;
  virtual Psana::Zyla::ConfigV1::GainMode gainMode() const;
  virtual Psana::Zyla::ConfigV1::CoolingSetpoint setpoint() const;
  virtual uint32_t width() const;
  virtual uint32_t height() const;
  virtual uint32_t orgX() const;
  virtual uint32_t orgY() const;
  virtual uint32_t binX() const;
  virtual uint32_t binY() const;
  virtual double exposureTime() const;
  virtual double triggerDelay() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixelsX() const;
  virtual uint32_t numPixelsY() const;
  virtual uint32_t numPixels() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


template <typename Config>
class FrameV1 : public Psana::Zyla::FrameV1 {
public:
  typedef Pds::Zyla::FrameV1 XtcType;
  typedef Psana::Zyla::FrameV1 PsanaType;
  FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~FrameV1();
  virtual uint64_t timestamp() const;
  virtual ndarray<const uint16_t, 2> data() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};

} // namespace Zyla
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_ZYLA_DDL_H
