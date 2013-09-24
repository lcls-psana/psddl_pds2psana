#ifndef PSDDL_PDS2PSANA_CONTROL_DDL_H
#define PSDDL_PDS2PSANA_CONTROL_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/control.ddl.h"
#include "pdsdata/psddl/control.ddl.h"
#include "pdsdata/xtc/ClockTime.hh"
namespace psddl_pds2psana {
namespace ControlData {
Psana::ControlData::PVControl pds_to_psana(Pds::ControlData::PVControl pds);

Psana::ControlData::PVMonitor pds_to_psana(Pds::ControlData::PVMonitor pds);

Psana::ControlData::PVLabel pds_to_psana(Pds::ControlData::PVLabel pds);


class ConfigV1 : public Psana::ControlData::ConfigV1 {
public:
  typedef Pds::ControlData::ConfigV1 XtcType;
  typedef Psana::ControlData::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t events() const;
  virtual uint8_t uses_duration() const;
  virtual uint8_t uses_events() const;
  virtual const Pds::ClockTime& duration() const;
  virtual uint32_t npvControls() const;
  virtual uint32_t npvMonitors() const;
  virtual ndarray<const Psana::ControlData::PVControl, 1> pvControls() const;
  virtual ndarray<const Psana::ControlData::PVMonitor, 1> pvMonitors() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  Pds::ClockTime _duration;
  ndarray<Psana::ControlData::PVControl, 1> _pvControls_ndarray_storage_;
  ndarray<Psana::ControlData::PVMonitor, 1> _pvMonitors_ndarray_storage_;
};


class ConfigV2 : public Psana::ControlData::ConfigV2 {
public:
  typedef Pds::ControlData::ConfigV2 XtcType;
  typedef Psana::ControlData::ConfigV2 PsanaType;
  ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV2();
  virtual uint32_t events() const;
  virtual uint8_t uses_duration() const;
  virtual uint8_t uses_events() const;
  virtual const Pds::ClockTime& duration() const;
  virtual uint32_t npvControls() const;
  virtual uint32_t npvMonitors() const;
  virtual uint32_t npvLabels() const;
  virtual ndarray<const Psana::ControlData::PVControl, 1> pvControls() const;
  virtual ndarray<const Psana::ControlData::PVMonitor, 1> pvMonitors() const;
  virtual ndarray<const Psana::ControlData::PVLabel, 1> pvLabels() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  Pds::ClockTime _duration;
  ndarray<Psana::ControlData::PVControl, 1> _pvControls_ndarray_storage_;
  ndarray<Psana::ControlData::PVMonitor, 1> _pvMonitors_ndarray_storage_;
  ndarray<Psana::ControlData::PVLabel, 1> _pvLabels_ndarray_storage_;
};

} // namespace ControlData
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_CONTROL_DDL_H
