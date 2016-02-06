#ifndef PSDDL_PDS2PSANA_ANDOR3D_DDL_H
#define PSDDL_PDS2PSANA_ANDOR3D_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/andor3d.ddl.h"
#include "pdsdata/psddl/andor3d.ddl.h"
namespace psddl_pds2psana {
namespace Andor3d {

class ConfigV1 : public Psana::Andor3d::ConfigV1 {
public:
  typedef Pds::Andor3d::ConfigV1 XtcType;
  typedef Psana::Andor3d::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t width() const;
  virtual uint32_t height() const;
  virtual uint32_t numSensors() const;
  virtual uint32_t orgX() const;
  virtual uint32_t orgY() const;
  virtual uint32_t binX() const;
  virtual uint32_t binY() const;
  virtual float exposureTime() const;
  virtual float coolingTemp() const;
  virtual Psana::Andor3d::ConfigV1::EnumFanMode fanMode() const;
  virtual uint8_t baselineClamp() const;
  virtual uint8_t highCapacity() const;
  virtual uint8_t gainIndex() const;
  virtual uint16_t readoutSpeedIndex() const;
  virtual uint16_t exposureEventCode() const;
  virtual uint32_t exposureStartDelay() const;
  virtual uint32_t numDelayShots() const;
  virtual uint32_t frameSize() const;
  virtual uint32_t numPixelsX() const;
  virtual uint32_t numPixelsY() const;
  virtual uint32_t numPixelsPerSensor() const;
  virtual uint32_t numPixels() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


template <typename Config>
class FrameV1 : public Psana::Andor3d::FrameV1 {
public:
  typedef Pds::Andor3d::FrameV1 XtcType;
  typedef Psana::Andor3d::FrameV1 PsanaType;
  FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~FrameV1();
  virtual uint32_t shotIdStart() const;
  virtual float readoutTime() const;
  virtual ndarray<const float, 1> temperature() const;
  virtual ndarray<const uint16_t, 3> data() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};

} // namespace Andor3d
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_ANDOR3D_DDL_H
