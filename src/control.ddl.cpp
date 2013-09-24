
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/control.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace ControlData {
Psana::ControlData::PVControl pds_to_psana(Pds::ControlData::PVControl pds)
{
  return Psana::ControlData::PVControl(pds.name(), pds.index(), pds.value());
}

Psana::ControlData::PVMonitor pds_to_psana(Pds::ControlData::PVMonitor pds)
{
  return Psana::ControlData::PVMonitor(pds.name(), pds.index(), pds.loValue(), pds.hiValue());
}

Psana::ControlData::PVLabel pds_to_psana(Pds::ControlData::PVLabel pds)
{
  return Psana::ControlData::PVLabel(pds.name(), pds.value());
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::ControlData::ConfigV1()
  , m_xtcObj(xtcPtr)
  , _duration(xtcPtr->duration())
{
  {
    typedef ndarray<Psana::ControlData::PVControl, 1> NDArray;
    typedef ndarray<const Pds::ControlData::PVControl, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pvControls();
    _pvControls_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pvControls_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::ControlData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::ControlData::PVMonitor, 1> NDArray;
    typedef ndarray<const Pds::ControlData::PVMonitor, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pvMonitors();
    _pvMonitors_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pvMonitors_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::ControlData::pds_to_psana(*it);
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::events() const {
  return m_xtcObj->events();
}


uint8_t ConfigV1::uses_duration() const {
  return m_xtcObj->uses_duration();
}


uint8_t ConfigV1::uses_events() const {
  return m_xtcObj->uses_events();
}

const Pds::ClockTime& ConfigV1::duration() const { return _duration; }

uint32_t ConfigV1::npvControls() const {
  return m_xtcObj->npvControls();
}


uint32_t ConfigV1::npvMonitors() const {
  return m_xtcObj->npvMonitors();
}

ndarray<const Psana::ControlData::PVControl, 1> ConfigV1::pvControls() const { return _pvControls_ndarray_storage_; }
ndarray<const Psana::ControlData::PVMonitor, 1> ConfigV1::pvMonitors() const { return _pvMonitors_ndarray_storage_; }
ConfigV2::ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::ControlData::ConfigV2()
  , m_xtcObj(xtcPtr)
  , _duration(xtcPtr->duration())
{
  {
    typedef ndarray<Psana::ControlData::PVControl, 1> NDArray;
    typedef ndarray<const Pds::ControlData::PVControl, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pvControls();
    _pvControls_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pvControls_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::ControlData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::ControlData::PVMonitor, 1> NDArray;
    typedef ndarray<const Pds::ControlData::PVMonitor, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pvMonitors();
    _pvMonitors_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pvMonitors_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::ControlData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::ControlData::PVLabel, 1> NDArray;
    typedef ndarray<const Pds::ControlData::PVLabel, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pvLabels();
    _pvLabels_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pvLabels_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::ControlData::pds_to_psana(*it);
    }
  }
}
ConfigV2::~ConfigV2()
{
}


uint32_t ConfigV2::events() const {
  return m_xtcObj->events();
}


uint8_t ConfigV2::uses_duration() const {
  return m_xtcObj->uses_duration();
}


uint8_t ConfigV2::uses_events() const {
  return m_xtcObj->uses_events();
}

const Pds::ClockTime& ConfigV2::duration() const { return _duration; }

uint32_t ConfigV2::npvControls() const {
  return m_xtcObj->npvControls();
}


uint32_t ConfigV2::npvMonitors() const {
  return m_xtcObj->npvMonitors();
}


uint32_t ConfigV2::npvLabels() const {
  return m_xtcObj->npvLabels();
}

ndarray<const Psana::ControlData::PVControl, 1> ConfigV2::pvControls() const { return _pvControls_ndarray_storage_; }
ndarray<const Psana::ControlData::PVMonitor, 1> ConfigV2::pvMonitors() const { return _pvMonitors_ndarray_storage_; }
ndarray<const Psana::ControlData::PVLabel, 1> ConfigV2::pvLabels() const { return _pvLabels_ndarray_storage_; }
} // namespace ControlData
} // namespace psddl_pds2psana
