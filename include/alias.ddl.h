#ifndef PSDDL_PDS2PSANA_ALIAS_DDL_H
#define PSDDL_PDS2PSANA_ALIAS_DDL_H 1

// *** Do not edit this file, it is auto-generated ***

#include <vector>
#include <boost/shared_ptr.hpp>
#include "psddl_psana/alias.ddl.h"
#include "pdsdata/psddl/alias.ddl.h"
#include "pdsdata/xtc/Src.hh"
namespace psddl_pds2psana {
namespace Alias {
Psana::Alias::SrcAlias pds_to_psana(Pds::Alias::SrcAlias pds);


class ConfigV1 : public Psana::Alias::ConfigV1 {
public:
  typedef Pds::Alias::ConfigV1 XtcType;
  typedef Psana::Alias::ConfigV1 PsanaType;
  ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr);
  virtual ~ConfigV1();
  virtual uint32_t numSrcAlias() const;
  virtual ndarray<const Psana::Alias::SrcAlias, 1> srcAlias() const;
  const XtcType& _xtcObj() const { return *m_xtcObj; }
private:
  boost::shared_ptr<const XtcType> m_xtcObj;
  ndarray<Psana::Alias::SrcAlias, 1> _srcAlias_ndarray_storage_;
};

} // namespace Alias
} // namespace psddl_pds2psana
#endif // PSDDL_PDS2PSANA_ALIAS_DDL_H
