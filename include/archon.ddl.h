#ifndef PSDDL_PDS2PSANA_ARCHON_DDL_H
#define PSDDL_PDS2PSANA_ARCHON_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/archon.ddl.h"
#include "pdsdata/psddl/archon.ddl.h"
namespace psddl_pds2psana {
namespace Archon {

class ConfigV1 : public Psana::Archon::ConfigV1 {
public:
  typedef Pds::Archon::ConfigV1 XtcType;
  typedef Psana::Archon::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual Psana::Archon::ConfigV1::ReadoutMode readoutMode() const;
  virtual uint16_t sweepCount() const;
  virtual uint32_t integrationTime() const;
  virtual uint32_t nonIntegrationTime() const;
  virtual uint32_t preSkipPixels() const;
  virtual uint32_t pixels() const;
  virtual uint32_t postSkipPixels() const;
  virtual uint32_t overscanPixels() const;
  virtual uint16_t preSkipLines() const;
  virtual uint16_t lines() const;
  virtual uint16_t postSkipLines() const;
  virtual uint16_t overScanLines() const;
  virtual uint16_t horizontalBinning() const;
  virtual uint16_t verticalBinning() const;
  virtual uint16_t rgh() const;
  virtual uint16_t rgl() const;
  virtual uint16_t shp() const;
  virtual uint16_t shd() const;
  virtual uint16_t st() const;
  virtual uint16_t stm1() const;
  virtual uint16_t at() const;
  virtual uint16_t dwell1() const;
  virtual uint16_t dwell2() const;
  virtual int16_t rgHigh() const;
  virtual int16_t rgLow() const;
  virtual int16_t sHigh() const;
  virtual int16_t sLow() const;
  virtual int16_t aHigh() const;
  virtual int16_t aLow() const;
  virtual int16_t rgSlew() const;
  virtual int16_t sSlew() const;
  virtual int16_t aSlew() const;
  virtual const char* config() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV2 : public Psana::Archon::ConfigV2 {
public:
  typedef Pds::Archon::ConfigV2 XtcType;
  typedef Psana::Archon::ConfigV2 PsanaType;
  ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV2();
  virtual Psana::Archon::ConfigV2::ReadoutMode readoutMode() const;
  virtual uint16_t exposureEventCode() const;
  virtual uint32_t configSize() const;
  virtual uint32_t preFrameSweepCount() const;
  virtual uint32_t idleSweepCount() const;
  virtual uint32_t integrationTime() const;
  virtual uint32_t nonIntegrationTime() const;
  virtual uint32_t batches() const;
  virtual uint32_t pixels() const;
  virtual uint32_t lines() const;
  virtual uint32_t horizontalBinning() const;
  virtual uint32_t verticalBinning() const;
  virtual uint32_t sensorPixels() const;
  virtual uint32_t sensorLines() const;
  virtual uint32_t sensorTaps() const;
  virtual uint32_t st() const;
  virtual uint32_t stm1() const;
  virtual uint32_t at() const;
  virtual const char* config() const;
  virtual std::vector<int> config_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};

} // namespace Archon
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_ARCHON_DDL_H
