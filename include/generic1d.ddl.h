#ifndef PSDDL_PDS2PSANA_GENERIC1D_DDL_H
#define PSDDL_PDS2PSANA_GENERIC1D_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/generic1d.ddl.h"
#include "pdsdata/psddl/generic1d.ddl.h"
namespace psddl_pds2psana {
namespace Generic1D {

class ConfigV0 : public Psana::Generic1D::ConfigV0 {
public:
  typedef Pds::Generic1D::ConfigV0 XtcType;
  typedef Psana::Generic1D::ConfigV0 PsanaType;
  ConfigV0(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV0();
  virtual uint32_t NChannels() const;
  virtual ndarray<const uint32_t, 1> Length() const;
  virtual ndarray<const uint32_t, 1> SampleType() const;
  virtual ndarray<const int32_t, 1> Offset() const;
  virtual ndarray<const double, 1> Period() const;
  virtual int32_t data_offset(uint32_t channel) const;
  virtual uint32_t Depth(uint32_t channel) const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


template <typename Config>
class DataV0 : public Psana::Generic1D::DataV0 {
public:
  typedef Pds::Generic1D::DataV0 XtcType;
  typedef Psana::Generic1D::DataV0 PsanaType;
  DataV0(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~DataV0();
  virtual uint32_t data_size() const;
  virtual ndarray<const uint8_t, 1> _int_data() const;
  virtual ndarray<const uint8_t, 1> data_u8(uint32_t channel) const;
  virtual ndarray<const uint16_t, 1> data_u16(uint32_t channel) const;
  virtual ndarray<const uint32_t, 1> data_u32(uint32_t channel) const;
  virtual ndarray<const float, 1> data_f32(uint32_t channel) const;
  virtual ndarray<const double, 1> data_f64(uint32_t channel) const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
};

} // namespace Generic1D
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_GENERIC1D_DDL_H
