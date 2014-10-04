
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/genericpgp.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace GenericPgp {
CDimension::CDimension(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::GenericPgp::CDimension()
  , m_xtcObj(xtcPtr)
{
}
CDimension::~CDimension()
{
}


uint32_t CDimension::rows() const {
  return m_xtcObj->rows();
}


uint32_t CDimension::columns() const {
  return m_xtcObj->columns();
}

Psana::GenericPgp::CRegister::Action pds_to_psana(Pds::GenericPgp::CRegister::Action e)
{
  return Psana::GenericPgp::CRegister::Action(e);
}

Psana::GenericPgp::CRegister pds_to_psana(Pds::GenericPgp::CRegister pds)
{
  return Psana::GenericPgp::CRegister(pds_to_psana(pds.action()), pds.datasize(), pds.address(), pds.offset(), pds.mask());
}

Psana::GenericPgp::CStream pds_to_psana(Pds::GenericPgp::CStream pds)
{
  return Psana::GenericPgp::CStream(pds.pgp_channel(), pds.data_type(), pds.config_type(), pds.config_offset());
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::GenericPgp::ConfigV1()
  , m_xtcObj(xtcPtr)
  , _frame_dim(boost::shared_ptr<const Pds::GenericPgp::CDimension>(xtcPtr, &xtcPtr->frame_dim()))
  , _aux_dim(boost::shared_ptr<const Pds::GenericPgp::CDimension>(xtcPtr, &xtcPtr->aux_dim()))
  , _env_dim(boost::shared_ptr<const Pds::GenericPgp::CDimension>(xtcPtr, &xtcPtr->env_dim()))
{
  {
    typedef ndarray<Psana::GenericPgp::CRegister, 1> NDArray;
    typedef ndarray<const Pds::GenericPgp::CRegister, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->sequence();
    _sequence_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _sequence_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::GenericPgp::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::GenericPgp::CStream, 1> NDArray;
    typedef ndarray<const Pds::GenericPgp::CStream, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->stream();
    _stream_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _stream_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::GenericPgp::pds_to_psana(*it);
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::id() const {
  return m_xtcObj->id();
}

const Psana::GenericPgp::CDimension& ConfigV1::frame_dim() const { return _frame_dim; }
const Psana::GenericPgp::CDimension& ConfigV1::aux_dim() const { return _aux_dim; }
const Psana::GenericPgp::CDimension& ConfigV1::env_dim() const { return _env_dim; }

uint32_t ConfigV1::number_of_registers() const {
  return m_xtcObj->number_of_registers();
}


uint32_t ConfigV1::number_of_sequences() const {
  return m_xtcObj->number_of_sequences();
}


uint32_t ConfigV1::number_of_streams() const {
  return m_xtcObj->number_of_streams();
}


uint32_t ConfigV1::payload_size() const {
  return m_xtcObj->payload_size();
}


ndarray<const uint32_t, 2> ConfigV1::pixel_settings() const {
  return m_xtcObj->pixel_settings(m_xtcObj);
}


ndarray<const uint32_t, 1> ConfigV1::sequence_length() const {
  return m_xtcObj->sequence_length(m_xtcObj);
}

ndarray<const Psana::GenericPgp::CRegister, 1> ConfigV1::sequence() const { return _sequence_ndarray_storage_; }
ndarray<const Psana::GenericPgp::CStream, 1> ConfigV1::stream() const { return _stream_ndarray_storage_; }

ndarray<const uint32_t, 1> ConfigV1::payload() const {
  return m_xtcObj->payload(m_xtcObj);
}


uint32_t ConfigV1::numberOfRows() const {
  return m_xtcObj->numberOfRows();
}


uint32_t ConfigV1::numberOfColumns() const {
  return m_xtcObj->numberOfColumns();
}


uint32_t ConfigV1::lastRowExclusions() const {
  return m_xtcObj->lastRowExclusions();
}


uint32_t ConfigV1::numberOfAsics() const {
  return m_xtcObj->numberOfAsics();
}

} // namespace GenericPgp
} // namespace psddl_pds2psana