
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/encoder.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Encoder {
Psana::Encoder::ConfigV1::count_mode_type pds_to_psana(PsddlPds::Encoder::ConfigV1::count_mode_type e)
{
  return Psana::Encoder::ConfigV1::count_mode_type(e);
}

Psana::Encoder::ConfigV1::quad_mode pds_to_psana(PsddlPds::Encoder::ConfigV1::quad_mode e)
{
  return Psana::Encoder::ConfigV1::quad_mode(e);
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Encoder::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::chan_num() const { return m_xtcObj->chan_num(); }

Psana::Encoder::ConfigV1::count_mode_type ConfigV1::count_mode() const { return pds_to_psana(m_xtcObj->count_mode()); }

Psana::Encoder::ConfigV1::quad_mode ConfigV1::quadrature_mode() const { return pds_to_psana(m_xtcObj->quadrature_mode()); }

uint32_t ConfigV1::input_num() const { return m_xtcObj->input_num(); }

uint32_t ConfigV1::input_rising() const { return m_xtcObj->input_rising(); }

uint32_t ConfigV1::ticks_per_sec() const { return m_xtcObj->ticks_per_sec(); }
Psana::Encoder::ConfigV2::count_mode_type pds_to_psana(PsddlPds::Encoder::ConfigV2::count_mode_type e)
{
  return Psana::Encoder::ConfigV2::count_mode_type(e);
}

Psana::Encoder::ConfigV2::quad_mode pds_to_psana(PsddlPds::Encoder::ConfigV2::quad_mode e)
{
  return Psana::Encoder::ConfigV2::quad_mode(e);
}

ConfigV2::ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Encoder::ConfigV2()
  , m_xtcObj(xtcPtr)
{
}
ConfigV2::~ConfigV2()
{
}


uint32_t ConfigV2::chan_mask() const { return m_xtcObj->chan_mask(); }

Psana::Encoder::ConfigV2::count_mode_type ConfigV2::count_mode() const { return pds_to_psana(m_xtcObj->count_mode()); }

Psana::Encoder::ConfigV2::quad_mode ConfigV2::quadrature_mode() const { return pds_to_psana(m_xtcObj->quadrature_mode()); }

uint32_t ConfigV2::input_num() const { return m_xtcObj->input_num(); }

uint32_t ConfigV2::input_rising() const { return m_xtcObj->input_rising(); }

uint32_t ConfigV2::ticks_per_sec() const { return m_xtcObj->ticks_per_sec(); }
DataV1::DataV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Encoder::DataV1()
  , m_xtcObj(xtcPtr)
{
}
DataV1::~DataV1()
{
}


uint32_t DataV1::timestamp() const { return m_xtcObj->timestamp(); }

uint32_t DataV1::encoder_count() const { return m_xtcObj->encoder_count(); }

int32_t DataV1::value() const { return m_xtcObj->value(); }
DataV2::DataV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Encoder::DataV2()
  , m_xtcObj(xtcPtr)
{
}
DataV2::~DataV2()
{
}


uint32_t DataV2::timestamp() const { return m_xtcObj->timestamp(); }

ndarray<const uint32_t, 1> DataV2::encoder_count() const { return m_xtcObj->encoder_count(); }

int32_t DataV2::value(uint32_t i) const { return m_xtcObj->value(i); }
} // namespace Encoder
} // namespace psddl_pds2psana
