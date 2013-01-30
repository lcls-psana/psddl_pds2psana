#ifndef PSDDL_PDS2PSANA_OCEANOPTICS_DDL_H
#define PSDDL_PDS2PSANA_OCEANOPTICS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/oceanoptics.ddl.h"
#include "psddl_pdsdata/oceanoptics.ddl.h"
namespace psddl_pds2psana {
namespace OceanOptics {

class ConfigV1 : public Psana::OceanOptics::ConfigV1 {
public:
  typedef PsddlPds::OceanOptics::ConfigV1 XtcType;
  typedef Psana::OceanOptics::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual float exposureTime() const;
  virtual ndarray<const double, 1> waveLenCalib() const;
  virtual ndarray<const double, 1> nonlinCorrect() const;
  virtual double strayLightConstant() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

Psana::OceanOptics::timespec64 pds_to_psana(PsddlPds::OceanOptics::timespec64 pds);


class DataV1 : public Psana::OceanOptics::DataV1 {
public:
  typedef PsddlPds::OceanOptics::DataV1 XtcType;
  typedef Psana::OceanOptics::DataV1 PsanaType;
  DataV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::OceanOptics::ConfigV1>& cfgPtr);
  virtual ~DataV1();
  virtual ndarray<const uint16_t, 1> data() const;
  virtual uint64_t frameCounter() const;
  virtual uint64_t numDelayedFrames() const;
  virtual uint64_t numDiscardFrames() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameStart() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameFirstData() const;
  virtual const Psana::OceanOptics::timespec64& timeFrameEnd() const;
  virtual int32_t version() const;
  virtual int8_t numSpectraInData() const;
  virtual int8_t numSpectraInQueue() const;
  virtual int8_t numSpectraUnused() const;
  virtual double durationOfFrame() const;
  virtual double nonlinerCorrected(uint32_t iPixel) const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const PsddlPds::OceanOptics::ConfigV1> m_cfgPtr0;
  Psana::OceanOptics::timespec64 _tsTimeFrameStart;
  Psana::OceanOptics::timespec64 _tsTimeFrameFirstData;
  Psana::OceanOptics::timespec64 _tsTimeFrameEnd;
};

} // namespace OceanOptics
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_OCEANOPTICS_DDL_H
