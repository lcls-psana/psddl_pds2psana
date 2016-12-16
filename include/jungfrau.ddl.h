#ifndef PSDDL_PDS2PSANA_JUNGFRAU_DDL_H
#define PSDDL_PDS2PSANA_JUNGFRAU_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/jungfrau.ddl.h"
#include "pdsdata/psddl/jungfrau.ddl.h"
namespace psddl_pds2psana {
namespace Jungfrau {

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

} // namespace Jungfrau
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_JUNGFRAU_DDL_H
