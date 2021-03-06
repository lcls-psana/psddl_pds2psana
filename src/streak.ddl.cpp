
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/streak.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Streak {
Psana::Streak::ConfigV1::DeviceMode pds_to_psana(Pds::Streak::ConfigV1::DeviceMode e)
{
  return Psana::Streak::ConfigV1::DeviceMode(e);
}

Psana::Streak::ConfigV1::ShutterMode pds_to_psana(Pds::Streak::ConfigV1::ShutterMode e)
{
  return Psana::Streak::ConfigV1::ShutterMode(e);
}

Psana::Streak::ConfigV1::GateMode pds_to_psana(Pds::Streak::ConfigV1::GateMode e)
{
  return Psana::Streak::ConfigV1::GateMode(e);
}

Psana::Streak::ConfigV1::TriggerMode pds_to_psana(Pds::Streak::ConfigV1::TriggerMode e)
{
  return Psana::Streak::ConfigV1::TriggerMode(e);
}

Psana::Streak::ConfigV1::CalibScale pds_to_psana(Pds::Streak::ConfigV1::CalibScale e)
{
  return Psana::Streak::ConfigV1::CalibScale(e);
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Streak::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


uint64_t ConfigV1::timeRange() const {
  return m_xtcObj->timeRange();
}


Psana::Streak::ConfigV1::DeviceMode ConfigV1::mode() const {
  return pds_to_psana(m_xtcObj->mode());
}


Psana::Streak::ConfigV1::GateMode ConfigV1::gate() const {
  return pds_to_psana(m_xtcObj->gate());
}


uint32_t ConfigV1::gain() const {
  return m_xtcObj->gain();
}


Psana::Streak::ConfigV1::ShutterMode ConfigV1::shutter() const {
  return pds_to_psana(m_xtcObj->shutter());
}


Psana::Streak::ConfigV1::TriggerMode ConfigV1::triggerMode() const {
  return pds_to_psana(m_xtcObj->triggerMode());
}


uint32_t ConfigV1::focusTimeOver() const {
  return m_xtcObj->focusTimeOver();
}


double ConfigV1::exposureTime() const {
  return m_xtcObj->exposureTime();
}


Psana::Streak::ConfigV1::CalibScale ConfigV1::calibScale() const {
  return pds_to_psana(m_xtcObj->calibScale());
}


ndarray<const double, 1> ConfigV1::calib() const {
  return m_xtcObj->calib(m_xtcObj);
}


double ConfigV1::calibScaleFactor() const {
  return m_xtcObj->calibScaleFactor();
}


ndarray<const double, 1> ConfigV1::calibTimes() const {
  return m_xtcObj->calibTimes();
}


ndarray<const double, 1> ConfigV1::calibTimesInSeconds() const {
  return m_xtcObj->calibTimesInSeconds();
}

} // namespace Streak
} // namespace psddl_pds2psana
