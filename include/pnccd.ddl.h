#ifndef PSDDL_PDS2PSANA_PNCCD_DDL_H
#define PSDDL_PDS2PSANA_PNCCD_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/pnccd.ddl.h"
#include "psddl_pdsdata/pnccd.ddl.h"
namespace psddl_pds2psana {
namespace PNCCD {

class ConfigV1 : public Psana::PNCCD::ConfigV1 {
public:
  typedef PsddlPds::PNCCD::ConfigV1 XtcType;
  typedef Psana::PNCCD::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t numLinks() const;
  virtual uint32_t payloadSizePerLink() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class ConfigV2 : public Psana::PNCCD::ConfigV2 {
public:
  typedef PsddlPds::PNCCD::ConfigV2 XtcType;
  typedef Psana::PNCCD::ConfigV2 PsanaType;
  ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV2();
  virtual uint32_t numLinks() const;
  virtual uint32_t payloadSizePerLink() const;
  virtual uint32_t numChannels() const;
  virtual uint32_t numRows() const;
  virtual uint32_t numSubmoduleChannels() const;
  virtual uint32_t numSubmoduleRows() const;
  virtual uint32_t numSubmodules() const;
  virtual uint32_t camexMagic() const;
  virtual const char* info() const;
  virtual const char* timingFName() const;
  virtual std::vector<int> info_shape() const;
  virtual std::vector<int> timingFName_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
};


class FrameV1 : public Psana::PNCCD::FrameV1 {
public:
  typedef PsddlPds::PNCCD::FrameV1 XtcType;
  typedef Psana::PNCCD::FrameV1 PsanaType;
  FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::PNCCD::ConfigV1>& cfgPtr);
  FrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::PNCCD::ConfigV2>& cfgPtr);
  virtual ~FrameV1();
  virtual uint32_t specialWord() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t timeStampHi() const;
  virtual uint32_t timeStampLo() const;
  virtual ndarray<const uint16_t, 1> _data() const;
  virtual ndarray<const uint16_t, 2> data() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const PsddlPds::PNCCD::ConfigV1> m_cfgPtr0;
  boost::shared_ptr<const PsddlPds::PNCCD::ConfigV2> m_cfgPtr1;
};


class FullFrameV1 : public Psana::PNCCD::FullFrameV1 {
public:
  typedef PsddlPds::PNCCD::FullFrameV1 XtcType;
  typedef Psana::PNCCD::FullFrameV1 PsanaType;
  FullFrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::PNCCD::ConfigV1>& cfgPtr);
  FullFrameV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::PNCCD::ConfigV2>& cfgPtr);
  virtual ~FullFrameV1();
  virtual uint32_t specialWord() const;
  virtual uint32_t frameNumber() const;
  virtual uint32_t timeStampHi() const;
  virtual uint32_t timeStampLo() const;
  virtual ndarray<const uint16_t, 2> data() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const PsddlPds::PNCCD::ConfigV1> m_cfgPtr0;
  boost::shared_ptr<const PsddlPds::PNCCD::ConfigV2> m_cfgPtr1;
};


class FramesV1 : public Psana::PNCCD::FramesV1 {
public:
  typedef PsddlPds::PNCCD::FramesV1 XtcType;
  typedef Psana::PNCCD::FramesV1 PsanaType;
  FramesV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::PNCCD::ConfigV1>& cfgPtr);
  FramesV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const PsddlPds::PNCCD::ConfigV2>& cfgPtr);
  virtual ~FramesV1();
  virtual const Psana::PNCCD::FrameV1& frame(uint32_t i0) const;
  virtual uint32_t numLinks() const;
  virtual std::vector<int> frame_shape() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  boost::shared_ptr<const PsddlPds::PNCCD::ConfigV1> m_cfgPtr0;
  boost::shared_ptr<const PsddlPds::PNCCD::ConfigV2> m_cfgPtr1;
  std::vector< psddl_pds2psana::PNCCD::FrameV1 > _frames;
};

} // namespace PNCCD
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_PNCCD_DDL_H
