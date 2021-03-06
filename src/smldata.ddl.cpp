
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/smldata.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace SmlData {
ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::SmlData::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::sizeThreshold() const {
  return m_xtcObj->sizeThreshold();
}

template <typename Config>
OrigDgramOffsetV1<Config>::OrigDgramOffsetV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::SmlData::OrigDgramOffsetV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
}
template <typename Config>
OrigDgramOffsetV1<Config>::~OrigDgramOffsetV1()
{
}


template <typename Config>
int64_t OrigDgramOffsetV1<Config>::fileOffset() const {
  return m_xtcObj->fileOffset();
}


template <typename Config>
uint32_t OrigDgramOffsetV1<Config>::extent() const {
  return m_xtcObj->extent();
}

template class OrigDgramOffsetV1<Pds::SmlData::ConfigV1>;
template <typename Config>
ProxyV1<Config>::ProxyV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::SmlData::ProxyV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
  , _type(xtcPtr->type())
{
}
template <typename Config>
ProxyV1<Config>::~ProxyV1()
{
}


template <typename Config>
int64_t ProxyV1<Config>::fileOffset() const {
  return m_xtcObj->fileOffset();
}

template <typename Config>
const Pds::TypeId& ProxyV1<Config>::type() const { return _type; }

template <typename Config>
uint32_t ProxyV1<Config>::extent() const {
  return m_xtcObj->extent();
}

template class ProxyV1<Pds::SmlData::ConfigV1>;
} // namespace SmlData
} // namespace psddl_pds2psana
