
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/quartz.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Quartz {
Psana::Quartz::ConfigV1::Depth pds_to_psana(PsddlPds::Quartz::ConfigV1::Depth e)
{
  return Psana::Quartz::ConfigV1::Depth(e);
}

Psana::Quartz::ConfigV1::Binning pds_to_psana(PsddlPds::Quartz::ConfigV1::Binning e)
{
  return Psana::Quartz::ConfigV1::Binning(e);
}

Psana::Quartz::ConfigV1::Mirroring pds_to_psana(PsddlPds::Quartz::ConfigV1::Mirroring e)
{
  return Psana::Quartz::ConfigV1::Mirroring(e);
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Quartz::ConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<const PsddlPds::Camera::FrameCoord, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->defect_pixel_coordinates();
    _defectPixels_ndarray_storage_.reserve(xtc_ndarr.size());
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it) {
      _defectPixels_ndarray_storage_.push_back(psddl_pds2psana::Camera::pds_to_psana(*it));
    }
    const unsigned* shape = xtc_ndarr.shape();
    std::copy(shape, shape+1, _defectPixels_ndarray_shape_);
  }
}
ConfigV1::~ConfigV1()
{
}


uint16_t ConfigV1::black_level() const { return m_xtcObj->black_level(); }

uint16_t ConfigV1::gain_percent() const { return m_xtcObj->gain_percent(); }

Psana::Quartz::ConfigV1::Depth ConfigV1::output_resolution() const { return pds_to_psana(m_xtcObj->output_resolution()); }

Psana::Quartz::ConfigV1::Binning ConfigV1::horizontal_binning() const { return pds_to_psana(m_xtcObj->horizontal_binning()); }

Psana::Quartz::ConfigV1::Binning ConfigV1::vertical_binning() const { return pds_to_psana(m_xtcObj->vertical_binning()); }

Psana::Quartz::ConfigV1::Mirroring ConfigV1::output_mirroring() const { return pds_to_psana(m_xtcObj->output_mirroring()); }

uint8_t ConfigV1::output_lookup_table_enabled() const { return m_xtcObj->output_lookup_table_enabled(); }

uint8_t ConfigV1::defect_pixel_correction_enabled() const { return m_xtcObj->defect_pixel_correction_enabled(); }

uint32_t ConfigV1::number_of_defect_pixels() const { return m_xtcObj->number_of_defect_pixels(); }

ndarray<const uint16_t, 1> ConfigV1::output_lookup_table() const { return m_xtcObj->output_lookup_table(); }

ndarray<const Psana::Camera::FrameCoord, 1> ConfigV1::defect_pixel_coordinates() const { return ndarray<const Psana::Camera::FrameCoord, 1>(&_defectPixels_ndarray_storage_[0], _defectPixels_ndarray_shape_); }

uint16_t ConfigV1::output_offset() const { return m_xtcObj->output_offset(); }

uint32_t ConfigV1::output_resolution_bits() const { return m_xtcObj->output_resolution_bits(); }
} // namespace Quartz
} // namespace psddl_pds2psana
