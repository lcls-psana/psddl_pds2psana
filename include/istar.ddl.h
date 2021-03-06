#ifndef PSDDL_PDS2PSANA_ISTAR_DDL_H
#define PSDDL_PDS2PSANA_ISTAR_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/istar.ddl.h"
#include "pdsdata/psddl/istar.ddl.h"
namespace psddl_pds2psana {
namespace iStar {

class ConfigV1 : public Psana::iStar::ConfigV1 {
public:
  typedef Pds::iStar::ConfigV1 XtcType;
  typedef Psana::iStar::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual Psana::iStar::ConfigV1::ATBool cooling() const;
  virtual Psana::iStar::ConfigV1::ATBool overlap() const;
  virtual Psana::iStar::ConfigV1::ATBool noiseFilter() const;
  virtual Psana::iStar::ConfigV1::ATBool blemishCorrection() const;
  virtual Psana::iStar::ConfigV1::ATBool mcpIntelligate() const;
  virtual Psana::iStar::ConfigV1::FanSpeed fanSpeed() const;
  virtual Psana::iStar::ConfigV1::ReadoutRate readoutRate() const;
  virtual Psana::iStar::ConfigV1::TriggerMode triggerMode() const;
  virtual Psana::iStar::ConfigV1::GainMode gainMode() const;
  virtual Psana::iStar::ConfigV1::GateMode gateMode() const;
  virtual Psana::iStar::ConfigV1::InsertionDelay insertionDelay() const;
  virtual uint16_t mcpGain() const;
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

} // namespace iStar
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_ISTAR_DDL_H
