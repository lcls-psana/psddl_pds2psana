
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/alias.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Alias {
Psana::Alias::SrcAlias pds_to_psana(Pds::Alias::SrcAlias pds)
{
  return Psana::Alias::SrcAlias(pds.src(), pds.aliasName());
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Alias::ConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::Alias::SrcAlias, 1> NDArray;
    typedef ndarray<const Pds::Alias::SrcAlias, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->srcAlias();
    _srcAlias_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _srcAlias_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::Alias::pds_to_psana(*it);
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::numSrcAlias() const {
  return m_xtcObj->numSrcAlias();
}

ndarray<const Psana::Alias::SrcAlias, 1> ConfigV1::srcAlias() const { return _srcAlias_ndarray_storage_; }
} // namespace Alias
} // namespace psddl_pds2psana
