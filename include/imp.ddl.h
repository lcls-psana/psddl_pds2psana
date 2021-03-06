#ifndef PSDDL_PDS2PSANA_IMP_DDL_H
#define PSDDL_PDS2PSANA_IMP_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/imp.ddl.h"
#include "pdsdata/psddl/imp.ddl.h"
namespace psddl_pds2psana {
namespace Imp {

class ConfigV1 : public Psana::Imp::ConfigV1 {
public:
  typedef Pds::Imp::ConfigV1 XtcType;
  typedef Psana::Imp::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t range() const;
  virtual uint32_t calRange() const;
  virtual uint32_t reset() const;
  virtual uint32_t biasData() const;
  virtual uint32_t calData() const;
  virtual uint32_t biasDacData() const;
  virtual uint32_t calStrobe() const;
  virtual uint32_t numberOfSamples() const;
  virtual uint32_t trigDelay() const;
  virtual uint32_t adcDelay() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

Psana::Imp::Sample pds_to_psana(Pds::Imp::Sample pds);

Psana::Imp::LaneStatus pds_to_psana(Pds::Imp::LaneStatus pds);


template <typename Config>
class ElementV1 : public Psana::Imp::ElementV1 {
public:
  typedef Pds::Imp::ElementV1 XtcType;
  typedef Psana::Imp::ElementV1 PsanaType;
  ElementV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr);
  virtual ~ElementV1();
  virtual uint8_t vc() const;
  virtual uint8_t lane() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t range() const;
  virtual const Psana::Imp::LaneStatus& laneStatus() const;
  virtual ndarray<const Psana::Imp::Sample, 1> samples() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const Config> m_cfgPtr;
  Psana::Imp::LaneStatus _laneStatus;
  ndarray<Psana::Imp::Sample, 1> _samples_ndarray_storage_;
};

} // namespace Imp
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_IMP_DDL_H
