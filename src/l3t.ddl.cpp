
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/l3t.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace L3T {
ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::L3T::ConfigV1()
  , m_xtcObj(xtcPtr)
{
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::module_id_len() const {
  return m_xtcObj->module_id_len();
}


uint32_t ConfigV1::desc_len() const {
  return m_xtcObj->desc_len();
}


const char* ConfigV1::module_id() const {
  return m_xtcObj->module_id();
}


const char* ConfigV1::desc() const {
  return m_xtcObj->desc();
}


std::vector<int> ConfigV1::module_id_shape() const {
  return m_xtcObj->module_id_shape();
}


std::vector<int> ConfigV1::desc_shape() const {
  return m_xtcObj->desc_shape();
}

DataV1::DataV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::L3T::DataV1()
  , m_xtcObj(xtcPtr)
{
}
DataV1::~DataV1()
{
}


uint32_t DataV1::accept() const {
  return m_xtcObj->accept();
}

Psana::L3T::DataV2::Result pds_to_psana(Pds::L3T::DataV2::Result e)
{
  return Psana::L3T::DataV2::Result(e);
}

Psana::L3T::DataV2::Bias pds_to_psana(Pds::L3T::DataV2::Bias e)
{
  return Psana::L3T::DataV2::Bias(e);
}

DataV2::DataV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::L3T::DataV2()
  , m_xtcObj(xtcPtr)
{
}
DataV2::~DataV2()
{
}


uint32_t DataV2::accept() const {
  return m_xtcObj->accept();
}


Psana::L3T::DataV2::Result DataV2::result() const {
  return pds_to_psana(m_xtcObj->result());
}


Psana::L3T::DataV2::Bias DataV2::bias() const {
  return pds_to_psana(m_xtcObj->bias());
}

} // namespace L3T
} // namespace psddl_pds2psana
