#ifndef PSDDL_PDS2PSANA_PULNIX_DDL_H
#define PSDDL_PDS2PSANA_PULNIX_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/pulnix.ddl.h"
#include "pdsdata/psddl/pulnix.ddl.h"
namespace psddl_pds2psana {
namespace Pulnix {

class TM6740ConfigV1 : public Psana::Pulnix::TM6740ConfigV1 {
public:
  typedef Pds::Pulnix::TM6740ConfigV1 XtcType;
  typedef Psana::Pulnix::TM6740ConfigV1 PsanaType;
  TM6740ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~TM6740ConfigV1();
  virtual uint16_t gain_a() const;
  virtual uint16_t gain_b() const;
  virtual uint16_t vref() const;
  virtual uint16_t shutter_width() const;
  virtual uint8_t gain_balance() const;
  virtual Psana::Pulnix::TM6740ConfigV1::Depth output_resolution() const;
  virtual Psana::Pulnix::TM6740ConfigV1::Binning horizontal_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV1::Binning vertical_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV1::LookupTable lookuptable_mode() const;
  virtual uint8_t output_resolution_bits() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class TM6740ConfigV2 : public Psana::Pulnix::TM6740ConfigV2 {
public:
  typedef Pds::Pulnix::TM6740ConfigV2 XtcType;
  typedef Psana::Pulnix::TM6740ConfigV2 PsanaType;
  TM6740ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~TM6740ConfigV2();
  virtual uint16_t gain_a() const;
  virtual uint16_t gain_b() const;
  virtual uint16_t vref_a() const;
  virtual uint16_t vref_b() const;
  virtual uint8_t gain_balance() const;
  virtual Psana::Pulnix::TM6740ConfigV2::Depth output_resolution() const;
  virtual Psana::Pulnix::TM6740ConfigV2::Binning horizontal_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV2::Binning vertical_binning() const;
  virtual Psana::Pulnix::TM6740ConfigV2::LookupTable lookuptable_mode() const;
  virtual uint8_t output_resolution_bits() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

} // namespace Pulnix
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_PULNIX_DDL_H
