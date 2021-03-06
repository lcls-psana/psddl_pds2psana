#ifndef PSDDL_PDS2PSANA_PIXIS_DDL_H
#define PSDDL_PDS2PSANA_PIXIS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/pixis.ddl.h"
#include "pdsdata/psddl/pixis.ddl.h"
namespace psddl_pds2psana {
namespace Pixis {

class ConfigV1 : public Psana::Pixis::ConfigV1 {
public:
  typedef Pds::Pixis::ConfigV1 XtcType;
  typedef Psana::Pixis::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t width() const;
  virtual uint32_t height() const;
  virtual uint32_t orgX() const;
  virtual uint32_t orgY() const;
  virtual uint32_t binX() const;
  virtual uint32_t binY() const;
  virtual float exposureTime() const;
  virtual float coolingTemp() const;
  virtual float readoutSpeed() const;
  virtual Psana::Pixis::ConfigV1::GainMode gainMode() const;
  virtual Psana::Pixis::ConfigV1::AdcMode adcMode() const;
  virtual Psana::Pixis::ConfigV1::TriggerMode triggerMode() const;
  virtual uint32_t activeWidth() const;
  virtual uint32_t activeHeight() const;
  virtual uint32_t activeTopMargin() const;
  virtual uint32_t activeBottomMargin() const;
  virtual uint32_t activeLeftMargin() const;
  virtual uint32_t activeRightMargin() const;
  virtual uint32_t cleanCycleCount() const;
  virtual uint32_t cleanCycleHeight() const;
  virtual uint32_t cleanFinalHeight() const;
  virtual uint32_t cleanFinalHeightCount() const;
  virtual uint32_t maskedHeight() const;
  virtual uint32_t kineticHeight() const;
  virtual float vsSpeed() const;
  virtual int16_t infoReportInterval() const;
  virtual uint16_t exposureEventCode() const;
  virtual uint32_t numIntegrationShots() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixelsX() const;
  virtual uint32_t numPixelsY() const;
  virtual uint32_t numPixels() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


template <typename Config>
class FrameV1 : public Psana::Pixis::FrameV1 {
public:
  typedef Pds::Pixis::FrameV1 XtcType;
  typedef Psana::Pixis::FrameV1 PsanaType;
  FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~FrameV1();
  virtual uint32_t shotIdStart() const;
  virtual float readoutTime() const;
  virtual float temperature() const;
  virtual ndarray<const uint16_t, 2> data() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};

} // namespace Pixis
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_PIXIS_DDL_H
