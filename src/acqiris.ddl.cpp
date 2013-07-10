
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/acqiris.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace Acqiris {
Psana::Acqiris::VertV1::Coupling pds_to_psana(PsddlPds::Acqiris::VertV1::Coupling e)
{
  return Psana::Acqiris::VertV1::Coupling(e);
}

Psana::Acqiris::VertV1::Bandwidth pds_to_psana(PsddlPds::Acqiris::VertV1::Bandwidth e)
{
  return Psana::Acqiris::VertV1::Bandwidth(e);
}

Psana::Acqiris::VertV1 pds_to_psana(PsddlPds::Acqiris::VertV1 pds)
{
  return Psana::Acqiris::VertV1(pds.fullScale(), pds.offset(), pds.coupling(), pds.bandwidth());
}

Psana::Acqiris::HorizV1 pds_to_psana(PsddlPds::Acqiris::HorizV1 pds)
{
  return Psana::Acqiris::HorizV1(pds.sampInterval(), pds.delayTime(), pds.nbrSamples(), pds.nbrSegments());
}

Psana::Acqiris::TrigV1::Source pds_to_psana(PsddlPds::Acqiris::TrigV1::Source e)
{
  return Psana::Acqiris::TrigV1::Source(e);
}

Psana::Acqiris::TrigV1::Coupling pds_to_psana(PsddlPds::Acqiris::TrigV1::Coupling e)
{
  return Psana::Acqiris::TrigV1::Coupling(e);
}

Psana::Acqiris::TrigV1::Slope pds_to_psana(PsddlPds::Acqiris::TrigV1::Slope e)
{
  return Psana::Acqiris::TrigV1::Slope(e);
}

Psana::Acqiris::TrigV1 pds_to_psana(PsddlPds::Acqiris::TrigV1 pds)
{
  return Psana::Acqiris::TrigV1(pds.coupling(), pds.input(), pds.slope(), pds.level());
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Acqiris::ConfigV1()
  , m_xtcObj(xtcPtr)
  , _trig(psddl_pds2psana::Acqiris::pds_to_psana(xtcPtr->trig()))
  , _horiz(psddl_pds2psana::Acqiris::pds_to_psana(xtcPtr->horiz()))
{
  {
    typedef ndarray<Psana::Acqiris::VertV1, 1> NDArray;
    typedef ndarray<const PsddlPds::Acqiris::VertV1, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->vert();
    _vert_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _vert_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::Acqiris::pds_to_psana(*it);
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::nbrConvertersPerChannel() const {
  return m_xtcObj->nbrConvertersPerChannel();
}


uint32_t ConfigV1::channelMask() const {
  return m_xtcObj->channelMask();
}


uint32_t ConfigV1::nbrBanks() const {
  return m_xtcObj->nbrBanks();
}

const Psana::Acqiris::TrigV1& ConfigV1::trig() const { return _trig; }
const Psana::Acqiris::HorizV1& ConfigV1::horiz() const { return _horiz; }
ndarray<const Psana::Acqiris::VertV1, 1> ConfigV1::vert() const { return _vert_ndarray_storage_; }

uint32_t ConfigV1::nbrChannels() const {
  return m_xtcObj->nbrChannels();
}

Psana::Acqiris::TimestampV1 pds_to_psana(PsddlPds::Acqiris::TimestampV1 pds)
{
  return Psana::Acqiris::TimestampV1(pds.pos(), pds.timeStampLo(), pds.timeStampHi());
}

template <typename Config>
DataDescV1Elem<Config>::DataDescV1Elem(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Acqiris::DataDescV1Elem()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
  {
    typedef ndarray<Psana::Acqiris::TimestampV1, 1> NDArray;
    typedef ndarray<const PsddlPds::Acqiris::TimestampV1, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->timestamp(*cfgPtr);
    _timestamps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _timestamps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::Acqiris::pds_to_psana(*it);
    }
  }
}
template <typename Config>
DataDescV1Elem<Config>::~DataDescV1Elem()
{
}


template <typename Config>
uint32_t DataDescV1Elem<Config>::nbrSamplesInSeg() const {
  return m_xtcObj->nbrSamplesInSeg();
}


template <typename Config>
uint32_t DataDescV1Elem<Config>::indexFirstPoint() const {
  return m_xtcObj->indexFirstPoint();
}


template <typename Config>
uint32_t DataDescV1Elem<Config>::nbrSegments() const {
  return m_xtcObj->nbrSegments();
}

template <typename Config>
ndarray<const Psana::Acqiris::TimestampV1, 1> DataDescV1Elem<Config>::timestamp() const { return _timestamps_ndarray_storage_; }

template <typename Config>
ndarray<const int16_t, 2> DataDescV1Elem<Config>::waveforms() const {
  return m_xtcObj->waveforms(*m_cfgPtr, m_xtcObj);
}

template class DataDescV1Elem<PsddlPds::Acqiris::ConfigV1>;
template <typename Config>
DataDescV1<Config>::DataDescV1(const boost::shared_ptr<const XtcType>& xtcPtr, const boost::shared_ptr<const Config>& cfgPtr)
  : Psana::Acqiris::DataDescV1()
  , m_xtcObj(xtcPtr)
  , m_cfgPtr(cfgPtr)
{
  {
    const std::vector<int>& dims = xtcPtr->data_shape(*cfgPtr);
    _data.reserve(dims[0]);
    for (int i0=0; i0 != dims[0]; ++i0) {
      const PsddlPds::Acqiris::DataDescV1Elem& d = xtcPtr->data(*cfgPtr, i0);
      boost::shared_ptr<const PsddlPds::Acqiris::DataDescV1Elem> dPtr(m_xtcObj, &d);
      _data.push_back(psddl_pds2psana::Acqiris::DataDescV1Elem<Config>(dPtr, cfgPtr));
    }
  }
}
template <typename Config>
DataDescV1<Config>::~DataDescV1()
{
}

template <typename Config>
const Psana::Acqiris::DataDescV1Elem& DataDescV1<Config>::data(uint32_t i0) const { return _data[i0]; }
template <typename Config>
std::vector<int> DataDescV1<Config>::data_shape() const
{
  std::vector<int> shape;
  shape.reserve(1);
  shape.push_back(_data.size());
  return shape;
}

template class DataDescV1<PsddlPds::Acqiris::ConfigV1>;
Psana::Acqiris::TdcChannel::Channel pds_to_psana(PsddlPds::Acqiris::TdcChannel::Channel e)
{
  return Psana::Acqiris::TdcChannel::Channel(e);
}

Psana::Acqiris::TdcChannel::Mode pds_to_psana(PsddlPds::Acqiris::TdcChannel::Mode e)
{
  return Psana::Acqiris::TdcChannel::Mode(e);
}

Psana::Acqiris::TdcChannel::Slope pds_to_psana(PsddlPds::Acqiris::TdcChannel::Slope e)
{
  return Psana::Acqiris::TdcChannel::Slope(e);
}

Psana::Acqiris::TdcChannel pds_to_psana(PsddlPds::Acqiris::TdcChannel pds)
{
  return Psana::Acqiris::TdcChannel(pds_to_psana(pds.channel()), pds_to_psana(pds.slope()), pds_to_psana(pds.mode()), pds.level());
}

Psana::Acqiris::TdcAuxIO::Channel pds_to_psana(PsddlPds::Acqiris::TdcAuxIO::Channel e)
{
  return Psana::Acqiris::TdcAuxIO::Channel(e);
}

Psana::Acqiris::TdcAuxIO::Mode pds_to_psana(PsddlPds::Acqiris::TdcAuxIO::Mode e)
{
  return Psana::Acqiris::TdcAuxIO::Mode(e);
}

Psana::Acqiris::TdcAuxIO::Termination pds_to_psana(PsddlPds::Acqiris::TdcAuxIO::Termination e)
{
  return Psana::Acqiris::TdcAuxIO::Termination(e);
}

Psana::Acqiris::TdcAuxIO pds_to_psana(PsddlPds::Acqiris::TdcAuxIO pds)
{
  return Psana::Acqiris::TdcAuxIO(pds_to_psana(pds.channel()), pds_to_psana(pds.mode()), pds_to_psana(pds.term()));
}

Psana::Acqiris::TdcVetoIO::Channel pds_to_psana(PsddlPds::Acqiris::TdcVetoIO::Channel e)
{
  return Psana::Acqiris::TdcVetoIO::Channel(e);
}

Psana::Acqiris::TdcVetoIO::Mode pds_to_psana(PsddlPds::Acqiris::TdcVetoIO::Mode e)
{
  return Psana::Acqiris::TdcVetoIO::Mode(e);
}

Psana::Acqiris::TdcVetoIO::Termination pds_to_psana(PsddlPds::Acqiris::TdcVetoIO::Termination e)
{
  return Psana::Acqiris::TdcVetoIO::Termination(e);
}

Psana::Acqiris::TdcVetoIO pds_to_psana(PsddlPds::Acqiris::TdcVetoIO pds)
{
  return Psana::Acqiris::TdcVetoIO(pds_to_psana(pds.mode()), pds_to_psana(pds.term()));
}

TdcConfigV1::TdcConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::Acqiris::TdcConfigV1()
  , m_xtcObj(xtcPtr)
  , _veto(psddl_pds2psana::Acqiris::pds_to_psana(xtcPtr->veto()))
{
  {
    typedef ndarray<Psana::Acqiris::TdcChannel, 1> NDArray;
    typedef ndarray<const PsddlPds::Acqiris::TdcChannel, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->channels();
    _channel_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _channel_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::Acqiris::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::Acqiris::TdcAuxIO, 1> NDArray;
    typedef ndarray<const PsddlPds::Acqiris::TdcAuxIO, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->auxio();
    _auxIO_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _auxIO_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::Acqiris::pds_to_psana(*it);
    }
  }
}
TdcConfigV1::~TdcConfigV1()
{
}

ndarray<const Psana::Acqiris::TdcChannel, 1> TdcConfigV1::channels() const { return _channel_ndarray_storage_; }
ndarray<const Psana::Acqiris::TdcAuxIO, 1> TdcConfigV1::auxio() const { return _auxIO_ndarray_storage_; }
const Psana::Acqiris::TdcVetoIO& TdcConfigV1::veto() const { return _veto; }
Psana::Acqiris::TdcDataV1_Item::Source pds_to_psana(PsddlPds::Acqiris::TdcDataV1_Item::Source e)
{
  return Psana::Acqiris::TdcDataV1_Item::Source(e);
}

Psana::Acqiris::TdcDataV1_Item pds_to_psana(PsddlPds::Acqiris::TdcDataV1_Item pds)
{
  return Psana::Acqiris::TdcDataV1_Item(pds.bf_val_(), pds_to_psana(pds.source()), pds.bf_ofv_());
}

Psana::Acqiris::TdcDataV1Marker::Type pds_to_psana(PsddlPds::Acqiris::TdcDataV1Marker::Type e)
{
  return Psana::Acqiris::TdcDataV1Marker::Type(e);
}

TdcDataV1::~TdcDataV1()
{
}

ndarray<const Psana::Acqiris::TdcDataV1_Item, 1> TdcDataV1::data() const { return _data_ndarray_storage_; }
} // namespace Acqiris
} // namespace psddl_pds2psana
