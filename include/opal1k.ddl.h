#ifndef PSDDL_PDS2PSANA_OPAL1K_DDL_H
#define PSDDL_PDS2PSANA_OPAL1K_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/opal1k.ddl.h"
#include "pdsdata/psddl/opal1k.ddl.h"
#include "psddl_pds2psana/camera.ddl.h"
namespace psddl_pds2psana {
namespace Opal1k {

class ConfigV1 : public Psana::Opal1k::ConfigV1 {
public:
  typedef Pds::Opal1k::ConfigV1 XtcType;
  typedef Psana::Opal1k::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint16_t black_level() const;
  virtual uint16_t gain_percent() const;
  virtual Psana::Opal1k::ConfigV1::Depth output_resolution() const;
  virtual Psana::Opal1k::ConfigV1::Binning vertical_binning() const;
  virtual Psana::Opal1k::ConfigV1::Mirroring output_mirroring() const;
  virtual uint8_t vertical_remapping() const;
  virtual uint8_t defect_pixel_correction_enabled() const;
  virtual uint8_t output_lookup_table_enabled() const;
  virtual uint32_t number_of_defect_pixels() const;
  virtual ndarray<const uint16_t, 1> output_lookup_table() const;
  virtual ndarray<const Psana::Camera::FrameCoord, 1> defect_pixel_coordinates() const;
  virtual uint16_t output_offset() const;
  virtual uint32_t output_resolution_bits() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  ndarray<Psana::Camera::FrameCoord, 1> _defectPixels_ndarray_storage_;
};

} // namespace Opal1k
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_OPAL1K_DDL_H
