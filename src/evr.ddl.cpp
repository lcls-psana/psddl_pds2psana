
// *** Do not edit this file, it is auto-generated ***

#include "psddl_pds2psana/evr.ddl.h"

#include <cstddef>

#include <stdexcept>

namespace psddl_pds2psana {
namespace EvrData {
Psana::EvrData::PulseConfig pds_to_psana(Pds::EvrData::PulseConfig pds)
{
  return Psana::EvrData::PulseConfig(pds.pulse(), pds.trigger(), pds.set(), pds.clear(), pds.polarity(), pds.map_set_enable(), pds.map_reset_enable(), pds.map_trigger_enable(), pds.prescale(), pds.delay(), pds.width());
}

Psana::EvrData::PulseConfigV3 pds_to_psana(Pds::EvrData::PulseConfigV3 pds)
{
  return Psana::EvrData::PulseConfigV3(pds.pulseId(), pds.polarity(), pds.prescale(), pds.delay(), pds.width());
}

Psana::EvrData::EventCodeV3 pds_to_psana(Pds::EvrData::EventCodeV3 pds)
{
  return Psana::EvrData::EventCodeV3(pds.code(), pds.isReadout(), pds.isTerminator(), pds.maskTrigger(), pds.maskSet(), pds.maskClear());
}

Psana::EvrData::EventCodeV4 pds_to_psana(Pds::EvrData::EventCodeV4 pds)
{
  return Psana::EvrData::EventCodeV4(pds.code(), pds.isReadout(), pds.isTerminator(), pds.reportDelay(), pds.reportWidth(), pds.maskTrigger(), pds.maskSet(), pds.maskClear());
}

Psana::EvrData::EventCodeV5 pds_to_psana(Pds::EvrData::EventCodeV5 pds)
{
  return Psana::EvrData::EventCodeV5(pds.code(), pds.isReadout(), pds.isCommand(), pds.isLatch(), pds.reportDelay(), pds.reportWidth(), pds.maskTrigger(), pds.maskSet(), pds.maskClear(), pds.desc());
}

Psana::EvrData::EventCodeV6 pds_to_psana(Pds::EvrData::EventCodeV6 pds)
{
  return Psana::EvrData::EventCodeV6(pds.code(), pds.isReadout(), pds.isCommand(), pds.isLatch(), pds.reportDelay(), pds.reportWidth(), pds.maskTrigger(), pds.maskSet(), pds.maskClear(), pds.desc(), pds.readoutGroup());
}

Psana::EvrData::OutputMap::Source pds_to_psana(Pds::EvrData::OutputMap::Source e)
{
  return Psana::EvrData::OutputMap::Source(e);
}

Psana::EvrData::OutputMap::Conn pds_to_psana(Pds::EvrData::OutputMap::Conn e)
{
  return Psana::EvrData::OutputMap::Conn(e);
}

Psana::EvrData::OutputMap pds_to_psana(Pds::EvrData::OutputMap pds)
{
  return Psana::EvrData::OutputMap(pds_to_psana(pds.source()), pds.source_id(), pds_to_psana(pds.conn()), pds.conn_id());
}

Psana::EvrData::OutputMapV2::Source pds_to_psana(Pds::EvrData::OutputMapV2::Source e)
{
  return Psana::EvrData::OutputMapV2::Source(e);
}

Psana::EvrData::OutputMapV2::Conn pds_to_psana(Pds::EvrData::OutputMapV2::Conn e)
{
  return Psana::EvrData::OutputMapV2::Conn(e);
}

Psana::EvrData::OutputMapV2 pds_to_psana(Pds::EvrData::OutputMapV2 pds)
{
  return Psana::EvrData::OutputMapV2(pds_to_psana(pds.source()), pds.source_id(), pds_to_psana(pds.conn()), pds.conn_id(), pds.module());
}

ConfigV1::ConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::PulseConfig, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfig, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMap, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMap, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV1::~ConfigV1()
{
}


uint32_t ConfigV1::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV1::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::PulseConfig, 1> ConfigV1::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMap, 1> ConfigV1::output_maps() const { return _output_maps_ndarray_storage_; }
Psana::EvrData::ConfigV2::RateCode pds_to_psana(Pds::EvrData::ConfigV2::RateCode e)
{
  return Psana::EvrData::ConfigV2::RateCode(e);
}

Psana::EvrData::ConfigV2::BeamCode pds_to_psana(Pds::EvrData::ConfigV2::BeamCode e)
{
  return Psana::EvrData::ConfigV2::BeamCode(e);
}

ConfigV2::ConfigV2(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV2()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::PulseConfig, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfig, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMap, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMap, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV2::~ConfigV2()
{
}


uint32_t ConfigV2::opcode() const {
  return m_xtcObj->opcode();
}


uint32_t ConfigV2::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV2::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::PulseConfig, 1> ConfigV2::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMap, 1> ConfigV2::output_maps() const { return _output_maps_ndarray_storage_; }

Psana::EvrData::ConfigV2::BeamCode ConfigV2::beam() const {
  return pds_to_psana(m_xtcObj->beam());
}


Psana::EvrData::ConfigV2::RateCode ConfigV2::rate() const {
  return pds_to_psana(m_xtcObj->rate());
}

ConfigV3::ConfigV3(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV3()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::EventCodeV3, 1> NDArray;
    typedef ndarray<const Pds::EvrData::EventCodeV3, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->eventcodes();
    _eventcodes_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _eventcodes_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::PulseConfigV3, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfigV3, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMap, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMap, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV3::~ConfigV3()
{
}


uint32_t ConfigV3::neventcodes() const {
  return m_xtcObj->neventcodes();
}


uint32_t ConfigV3::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV3::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::EventCodeV3, 1> ConfigV3::eventcodes() const { return _eventcodes_ndarray_storage_; }
ndarray<const Psana::EvrData::PulseConfigV3, 1> ConfigV3::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMap, 1> ConfigV3::output_maps() const { return _output_maps_ndarray_storage_; }
ConfigV4::ConfigV4(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV4()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::EventCodeV4, 1> NDArray;
    typedef ndarray<const Pds::EvrData::EventCodeV4, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->eventcodes();
    _eventcodes_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _eventcodes_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::PulseConfigV3, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfigV3, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMap, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMap, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV4::~ConfigV4()
{
}


uint32_t ConfigV4::neventcodes() const {
  return m_xtcObj->neventcodes();
}


uint32_t ConfigV4::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV4::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::EventCodeV4, 1> ConfigV4::eventcodes() const { return _eventcodes_ndarray_storage_; }
ndarray<const Psana::EvrData::PulseConfigV3, 1> ConfigV4::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMap, 1> ConfigV4::output_maps() const { return _output_maps_ndarray_storage_; }
Psana::EvrData::SequencerEntry pds_to_psana(Pds::EvrData::SequencerEntry pds)
{
  return Psana::EvrData::SequencerEntry(pds.eventcode(), pds.delay());
}

Psana::EvrData::SequencerConfigV1::Source pds_to_psana(Pds::EvrData::SequencerConfigV1::Source e)
{
  return Psana::EvrData::SequencerConfigV1::Source(e);
}

SequencerConfigV1::SequencerConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::SequencerConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::SequencerEntry, 1> NDArray;
    typedef ndarray<const Pds::EvrData::SequencerEntry, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->entries();
    _entries_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _entries_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
SequencerConfigV1::~SequencerConfigV1()
{
}


Psana::EvrData::SequencerConfigV1::Source SequencerConfigV1::sync_source() const {
  return pds_to_psana(m_xtcObj->sync_source());
}


Psana::EvrData::SequencerConfigV1::Source SequencerConfigV1::beam_source() const {
  return pds_to_psana(m_xtcObj->beam_source());
}


uint32_t SequencerConfigV1::length() const {
  return m_xtcObj->length();
}


uint32_t SequencerConfigV1::cycles() const {
  return m_xtcObj->cycles();
}

ndarray<const Psana::EvrData::SequencerEntry, 1> SequencerConfigV1::entries() const { return _entries_ndarray_storage_; }
ConfigV5::ConfigV5(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV5()
  , m_xtcObj(xtcPtr)
  , _seq_config(boost::shared_ptr<const Pds::EvrData::SequencerConfigV1>(xtcPtr, &xtcPtr->seq_config()))
{
  {
    typedef ndarray<Psana::EvrData::EventCodeV5, 1> NDArray;
    typedef ndarray<const Pds::EvrData::EventCodeV5, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->eventcodes();
    _eventcodes_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _eventcodes_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::PulseConfigV3, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfigV3, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMap, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMap, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV5::~ConfigV5()
{
}


uint32_t ConfigV5::neventcodes() const {
  return m_xtcObj->neventcodes();
}


uint32_t ConfigV5::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV5::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::EventCodeV5, 1> ConfigV5::eventcodes() const { return _eventcodes_ndarray_storage_; }
ndarray<const Psana::EvrData::PulseConfigV3, 1> ConfigV5::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMap, 1> ConfigV5::output_maps() const { return _output_maps_ndarray_storage_; }
const Psana::EvrData::SequencerConfigV1& ConfigV5::seq_config() const { return _seq_config; }
ConfigV6::ConfigV6(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV6()
  , m_xtcObj(xtcPtr)
  , _seq_config(boost::shared_ptr<const Pds::EvrData::SequencerConfigV1>(xtcPtr, &xtcPtr->seq_config()))
{
  {
    typedef ndarray<Psana::EvrData::EventCodeV5, 1> NDArray;
    typedef ndarray<const Pds::EvrData::EventCodeV5, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->eventcodes();
    _eventcodes_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _eventcodes_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::PulseConfigV3, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfigV3, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMapV2, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMapV2, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV6::~ConfigV6()
{
}


uint32_t ConfigV6::neventcodes() const {
  return m_xtcObj->neventcodes();
}


uint32_t ConfigV6::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV6::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::EventCodeV5, 1> ConfigV6::eventcodes() const { return _eventcodes_ndarray_storage_; }
ndarray<const Psana::EvrData::PulseConfigV3, 1> ConfigV6::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMapV2, 1> ConfigV6::output_maps() const { return _output_maps_ndarray_storage_; }
const Psana::EvrData::SequencerConfigV1& ConfigV6::seq_config() const { return _seq_config; }
ConfigV7::ConfigV7(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::ConfigV7()
  , m_xtcObj(xtcPtr)
  , _seq_config(boost::shared_ptr<const Pds::EvrData::SequencerConfigV1>(xtcPtr, &xtcPtr->seq_config()))
{
  {
    typedef ndarray<Psana::EvrData::EventCodeV6, 1> NDArray;
    typedef ndarray<const Pds::EvrData::EventCodeV6, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->eventcodes();
    _eventcodes_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _eventcodes_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::PulseConfigV3, 1> NDArray;
    typedef ndarray<const Pds::EvrData::PulseConfigV3, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->pulses();
    _pulses_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _pulses_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
  {
    typedef ndarray<Psana::EvrData::OutputMapV2, 1> NDArray;
    typedef ndarray<const Pds::EvrData::OutputMapV2, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->output_maps();
    _output_maps_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _output_maps_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
ConfigV7::~ConfigV7()
{
}


uint32_t ConfigV7::neventcodes() const {
  return m_xtcObj->neventcodes();
}


uint32_t ConfigV7::npulses() const {
  return m_xtcObj->npulses();
}


uint32_t ConfigV7::noutputs() const {
  return m_xtcObj->noutputs();
}

ndarray<const Psana::EvrData::EventCodeV6, 1> ConfigV7::eventcodes() const { return _eventcodes_ndarray_storage_; }
ndarray<const Psana::EvrData::PulseConfigV3, 1> ConfigV7::pulses() const { return _pulses_ndarray_storage_; }
ndarray<const Psana::EvrData::OutputMapV2, 1> ConfigV7::output_maps() const { return _output_maps_ndarray_storage_; }
const Psana::EvrData::SequencerConfigV1& ConfigV7::seq_config() const { return _seq_config; }
Psana::EvrData::FIFOEvent pds_to_psana(Pds::EvrData::FIFOEvent pds)
{
  return Psana::EvrData::FIFOEvent(pds.timestampHigh(), pds.timestampLow(), pds.eventCode());
}

DataV3::DataV3(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::DataV3()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::FIFOEvent, 1> NDArray;
    typedef ndarray<const Pds::EvrData::FIFOEvent, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->fifoEvents();
    _fifoEvents_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _fifoEvents_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
DataV3::~DataV3()
{
}


uint32_t DataV3::numFifoEvents() const {
  return m_xtcObj->numFifoEvents();
}

ndarray<const Psana::EvrData::FIFOEvent, 1> DataV3::fifoEvents() const { return _fifoEvents_ndarray_storage_; }
Psana::EvrData::IOChannel pds_to_psana(Pds::EvrData::IOChannel pds)
{
  return Psana::EvrData::IOChannel(pds.name(), pds.ninfo(), pds.infos().data());
}

IOConfigV1::IOConfigV1(const boost::shared_ptr<const XtcType>& xtcPtr)
  : Psana::EvrData::IOConfigV1()
  , m_xtcObj(xtcPtr)
{
  {
    typedef ndarray<Psana::EvrData::IOChannel, 1> NDArray;
    typedef ndarray<const Pds::EvrData::IOChannel, 1> XtcNDArray;
    const XtcNDArray& xtc_ndarr = xtcPtr->channels();
    _channels_ndarray_storage_ = NDArray(xtc_ndarr.shape());
    NDArray::iterator out = _channels_ndarray_storage_.begin();
    for (XtcNDArray::iterator it = xtc_ndarr.begin(); it != xtc_ndarr.end(); ++ it, ++ out) {
      *out = psddl_pds2psana::EvrData::pds_to_psana(*it);
    }
  }
}
IOConfigV1::~IOConfigV1()
{
}


uint16_t IOConfigV1::nchannels() const {
  return m_xtcObj->nchannels();
}

ndarray<const Psana::EvrData::IOChannel, 1> IOConfigV1::channels() const { return _channels_ndarray_storage_; }

Psana::EvrData::OutputMap::Conn IOConfigV1::conn() const {
  return pds_to_psana(m_xtcObj->conn());
}

} // namespace EvrData
} // namespace psddl_pds2psana
