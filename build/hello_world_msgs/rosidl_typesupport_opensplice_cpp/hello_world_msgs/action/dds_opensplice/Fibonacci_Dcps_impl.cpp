#include "Fibonacci_Dcps_impl.h"
#include "Fibonacci_SplDcps.h"
//

extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_Goal___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_Goal_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_Goal_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_Goal___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_Goal_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder::Fibonacci_Goal_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_Goal_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_Goal___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_Goal___copyOut;
    metaDescriptorArrLength = 3;
    metaDescriptorLength = 228;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Goal_\"><Member name=\"order_\"><Long/></Member></Struct></Module></Module></Module>",
"</MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder::~Fibonacci_Goal_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Goal_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::Fibonacci_Goal_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport::~Fibonacci_Goal_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Goal_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::Fibonacci_Goal_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::~Fibonacci_Goal_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_Goal_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::write_w_timestamp (
    const Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_Goal_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::get_key_value (
    Fibonacci_Goal_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Goal_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::Fibonacci_Goal_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::~Fibonacci_Goal_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Goal_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Goal_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_Goal_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_Goal_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Goal_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_Goal_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Goal_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Goal_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Goal_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_Goal___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Goal_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_Goal___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_Goal_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::Fibonacci_Goal_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::~Fibonacci_Goal_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Goal_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Goal_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_Goal_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_Goal_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_Goal_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Goal_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_SendGoal_Request___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_SendGoal_Request_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_SendGoal_Request___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder::Fibonacci_SendGoal_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_SendGoal_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_SendGoal_Request___copyOut;
    metaDescriptorArrLength = 7;
    metaDescriptorLength = 756;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Goal_\"><Member name=\"order_\"><Long/></Member></Struct></Module></Module></Module>",
"<Module name=\"unique_identifier_msgs\"><Module name=\"msg\"><Module name=\"dds_\"><Struct name=\"UUID_\">",
"<Member name=\"uuid_\"><Array size=\"16\"><Octet/></Array></Member></Struct></Module></Module></Module>",
"<Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\"><Struct name=\"Fibonacci_SendGoal_Request_\">",
"<Member name=\"goal_id_\"><Type name=\"::unique_identifier_msgs::msg::dds_::UUID_\"/></Member><Member name=\"goal_\">",
"<Type name=\"Fibonacci_Goal_\"/></Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder::~Fibonacci_SendGoal_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::Fibonacci_SendGoal_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport::~Fibonacci_SendGoal_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::Fibonacci_SendGoal_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::~Fibonacci_SendGoal_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_SendGoal_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::write_w_timestamp (
    const Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::get_key_value (
    Fibonacci_SendGoal_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::Fibonacci_SendGoal_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::~Fibonacci_SendGoal_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_SendGoal_Request___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_SendGoal_Request___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::Fibonacci_SendGoal_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::~Fibonacci_SendGoal_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_SendGoal_Response___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_SendGoal_Response_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_SendGoal_Response___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder::Fibonacci_SendGoal_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_SendGoal_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_SendGoal_Response___copyOut;
    metaDescriptorArrLength = 5;
    metaDescriptorLength = 554;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"builtin_interfaces\"><Module name=\"msg\"><Module name=\"dds_\">",
"<Struct name=\"Time_\"><Member name=\"sec_\"><Long/></Member><Member name=\"nanosec_\"><ULong/></Member>",
"</Struct></Module></Module></Module><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_SendGoal_Response_\"><Member name=\"accepted_\"><Boolean/></Member><Member name=\"stamp_\">",
"<Type name=\"::builtin_interfaces::msg::dds_::Time_\"/></Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder::~Fibonacci_SendGoal_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::Fibonacci_SendGoal_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport::~Fibonacci_SendGoal_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::Fibonacci_SendGoal_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::~Fibonacci_SendGoal_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_SendGoal_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::write_w_timestamp (
    const Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::get_key_value (
    Fibonacci_SendGoal_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::Fibonacci_SendGoal_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::~Fibonacci_SendGoal_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_SendGoal_Response___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_SendGoal_Response___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::Fibonacci_SendGoal_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::~Fibonacci_SendGoal_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ *from,
    struct _hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request_ *to);

extern void
__hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyOut;
    metaDescriptorArrLength = 10;
    metaDescriptorLength = 1056;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Goal_\"><Member name=\"order_\"><Long/></Member></Struct></Module></Module></Module>",
"<Module name=\"unique_identifier_msgs\"><Module name=\"msg\"><Module name=\"dds_\"><Struct name=\"UUID_\">",
"<Member name=\"uuid_\"><Array size=\"16\"><Octet/></Array></Member></Struct></Module></Module></Module>",
"<Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\"><Struct name=\"Fibonacci_SendGoal_Request_\">",
"<Member name=\"goal_id_\"><Type name=\"::unique_identifier_msgs::msg::dds_::UUID_\"/></Member><Member name=\"goal_\">",
"<Type name=\"Fibonacci_Goal_\"/></Member></Struct><Struct name=\"Sample_Fibonacci_SendGoal_Request_\">",
"<Member name=\"client_guid_0_\"><ULongLong/></Member><Member name=\"client_guid_1_\"><ULongLong/></Member>",
"<Member name=\"sequence_number_\"><LongLong/></Member><Member name=\"request_\"><Type name=\"Fibonacci_SendGoal_Request_\"/>",
"</Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder::~Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ TypeSupport Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupport::Sample_Fibonacci_SendGoal_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupport::~Sample_Fibonacci_SendGoal_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::Sample_Fibonacci_SendGoal_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::~Sample_Fibonacci_SendGoal_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::register_instance_w_timestamp (
    const Sample_Fibonacci_SendGoal_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::write_w_timestamp (
    const Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::dispose_w_timestamp (
    const Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::writedispose_w_timestamp (
    const Sample_Fibonacci_SendGoal_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::get_key_value (
    Sample_Fibonacci_SendGoal_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::Sample_Fibonacci_SendGoal_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::~Sample_Fibonacci_SendGoal_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Request___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::~Sample_Fibonacci_SendGoal_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ *from,
    struct _hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response_ *to);

extern void
__hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyOut;
    metaDescriptorArrLength = 8;
    metaDescriptorLength = 857;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"builtin_interfaces\"><Module name=\"msg\"><Module name=\"dds_\">",
"<Struct name=\"Time_\"><Member name=\"sec_\"><Long/></Member><Member name=\"nanosec_\"><ULong/></Member>",
"</Struct></Module></Module></Module><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_SendGoal_Response_\"><Member name=\"accepted_\"><Boolean/></Member><Member name=\"stamp_\">",
"<Type name=\"::builtin_interfaces::msg::dds_::Time_\"/></Member></Struct><Struct name=\"Sample_Fibonacci_SendGoal_Response_\">",
"<Member name=\"client_guid_0_\"><ULongLong/></Member><Member name=\"client_guid_1_\"><ULongLong/></Member>",
"<Member name=\"sequence_number_\"><LongLong/></Member><Member name=\"response_\"><Type name=\"Fibonacci_SendGoal_Response_\"/>",
"</Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder::~Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ TypeSupport Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupport::Sample_Fibonacci_SendGoal_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupport::~Sample_Fibonacci_SendGoal_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::Sample_Fibonacci_SendGoal_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::~Sample_Fibonacci_SendGoal_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::register_instance_w_timestamp (
    const Sample_Fibonacci_SendGoal_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::write_w_timestamp (
    const Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::dispose_w_timestamp (
    const Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::writedispose_w_timestamp (
    const Sample_Fibonacci_SendGoal_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::get_key_value (
    Sample_Fibonacci_SendGoal_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::Sample_Fibonacci_SendGoal_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::~Sample_Fibonacci_SendGoal_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_SendGoal_Response___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::~Sample_Fibonacci_SendGoal_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_Result___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_Result_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_Result_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_Result___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_Result_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder::Fibonacci_Result_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_Result_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_Result___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_Result___copyOut;
    metaDescriptorArrLength = 3;
    metaDescriptorLength = 254;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Result_\"><Member name=\"sequence_\"><Sequence><Long/></Sequence></Member></Struct>",
"</Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder::~Fibonacci_Result_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Result_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::Fibonacci_Result_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport::~Fibonacci_Result_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Result_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::Fibonacci_Result_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::~Fibonacci_Result_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_Result_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::write_w_timestamp (
    const Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_Result_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::get_key_value (
    Fibonacci_Result_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Result_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::Fibonacci_Result_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::~Fibonacci_Result_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Result_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Result_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_Result_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_Result_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Result_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_Result_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Result_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Result_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Result_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_Result___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Result_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_Result___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_Result_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::Fibonacci_Result_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::~Fibonacci_Result_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Result_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Result_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_Result_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_Result_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_Result_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Result_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_GetResult_Request___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_GetResult_Request_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_GetResult_Request___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder::Fibonacci_GetResult_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_GetResult_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_GetResult_Request___copyOut;
    metaDescriptorArrLength = 5;
    metaDescriptorLength = 504;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"unique_identifier_msgs\"><Module name=\"msg\"><Module name=\"dds_\">",
"<Struct name=\"UUID_\"><Member name=\"uuid_\"><Array size=\"16\"><Octet/></Array></Member></Struct></Module>",
"</Module></Module><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\"><Struct name=\"Fibonacci_GetResult_Request_\">",
"<Member name=\"goal_id_\"><Type name=\"::unique_identifier_msgs::msg::dds_::UUID_\"/></Member></Struct>",
"</Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder::~Fibonacci_GetResult_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::Fibonacci_GetResult_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport::~Fibonacci_GetResult_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::Fibonacci_GetResult_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::~Fibonacci_GetResult_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_GetResult_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::write_w_timestamp (
    const Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::get_key_value (
    Fibonacci_GetResult_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::Fibonacci_GetResult_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::~Fibonacci_GetResult_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_GetResult_Request___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_GetResult_Request___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::Fibonacci_GetResult_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::~Fibonacci_GetResult_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_GetResult_Response___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_GetResult_Response_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_GetResult_Response___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder::Fibonacci_GetResult_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_GetResult_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_GetResult_Response___copyOut;
    metaDescriptorArrLength = 4;
    metaDescriptorLength = 420;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Result_\"><Member name=\"sequence_\"><Sequence><Long/></Sequence></Member></Struct>",
"<Struct name=\"Fibonacci_GetResult_Response_\"><Member name=\"status_\"><Octet/></Member><Member name=\"result_\">",
"<Type name=\"Fibonacci_Result_\"/></Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder::~Fibonacci_GetResult_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::Fibonacci_GetResult_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport::~Fibonacci_GetResult_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::Fibonacci_GetResult_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::~Fibonacci_GetResult_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_GetResult_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::write_w_timestamp (
    const Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::get_key_value (
    Fibonacci_GetResult_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::Fibonacci_GetResult_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::~Fibonacci_GetResult_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_GetResult_Response___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_GetResult_Response___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::Fibonacci_GetResult_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::~Fibonacci_GetResult_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ *from,
    struct _hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request_ *to);

extern void
__hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyOut;
    metaDescriptorArrLength = 8;
    metaDescriptorLength = 806;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"unique_identifier_msgs\"><Module name=\"msg\"><Module name=\"dds_\">",
"<Struct name=\"UUID_\"><Member name=\"uuid_\"><Array size=\"16\"><Octet/></Array></Member></Struct></Module>",
"</Module></Module><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\"><Struct name=\"Fibonacci_GetResult_Request_\">",
"<Member name=\"goal_id_\"><Type name=\"::unique_identifier_msgs::msg::dds_::UUID_\"/></Member></Struct>",
"<Struct name=\"Sample_Fibonacci_GetResult_Request_\"><Member name=\"client_guid_0_\"><ULongLong/></Member>",
"<Member name=\"client_guid_1_\"><ULongLong/></Member><Member name=\"sequence_number_\"><LongLong/></Member>",
"<Member name=\"request_\"><Type name=\"Fibonacci_GetResult_Request_\"/></Member></Struct></Module></Module>",
"</Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder::~Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ TypeSupport Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupport::Sample_Fibonacci_GetResult_Request_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupport::~Sample_Fibonacci_GetResult_Request_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::Sample_Fibonacci_GetResult_Request_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::~Sample_Fibonacci_GetResult_Request_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::register_instance_w_timestamp (
    const Sample_Fibonacci_GetResult_Request_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::write_w_timestamp (
    const Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::dispose_w_timestamp (
    const Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::writedispose_w_timestamp (
    const Sample_Fibonacci_GetResult_Request_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::get_key_value (
    Sample_Fibonacci_GetResult_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::Sample_Fibonacci_GetResult_Request_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::~Sample_Fibonacci_GetResult_Request_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Request___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::Sample_Fibonacci_GetResult_Request_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::~Sample_Fibonacci_GetResult_Request_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ *from,
    struct _hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response_ *to);

extern void
__hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyOut;
    metaDescriptorArrLength = 7;
    metaDescriptorLength = 725;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Result_\"><Member name=\"sequence_\"><Sequence><Long/></Sequence></Member></Struct>",
"<Struct name=\"Fibonacci_GetResult_Response_\"><Member name=\"status_\"><Octet/></Member><Member name=\"result_\">",
"<Type name=\"Fibonacci_Result_\"/></Member></Struct><Struct name=\"Sample_Fibonacci_GetResult_Response_\">",
"<Member name=\"client_guid_0_\"><ULongLong/></Member><Member name=\"client_guid_1_\"><ULongLong/></Member>",
"<Member name=\"sequence_number_\"><LongLong/></Member><Member name=\"response_\"><Type name=\"Fibonacci_GetResult_Response_\"/>",
"</Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder::~Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ TypeSupport Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupport::Sample_Fibonacci_GetResult_Response_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupport::~Sample_Fibonacci_GetResult_Response_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::Sample_Fibonacci_GetResult_Response_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::~Sample_Fibonacci_GetResult_Response_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::register_instance_w_timestamp (
    const Sample_Fibonacci_GetResult_Response_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::unregister_instance_w_timestamp (
    const Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::write_w_timestamp (
    const Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::dispose_w_timestamp (
    const Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::writedispose_w_timestamp (
    const Sample_Fibonacci_GetResult_Response_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::get_key_value (
    Sample_Fibonacci_GetResult_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::Sample_Fibonacci_GetResult_Response_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::~Sample_Fibonacci_GetResult_Response_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ *>(to);
    __hello_world_msgs_action_dds__Sample_Fibonacci_GetResult_Response___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::Sample_Fibonacci_GetResult_Response_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::~Sample_Fibonacci_GetResult_Response_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_Feedback___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_Feedback_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_Feedback_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_Feedback___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_Feedback_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder::Fibonacci_Feedback_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_Feedback_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_Feedback___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_Feedback___copyOut;
    metaDescriptorArrLength = 3;
    metaDescriptorLength = 256;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Feedback_\"><Member name=\"sequence_\"><Sequence><Long/></Sequence></Member>",
"</Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder::~Fibonacci_Feedback_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Feedback_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::Fibonacci_Feedback_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport::~Fibonacci_Feedback_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Feedback_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::Fibonacci_Feedback_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::~Fibonacci_Feedback_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_Feedback_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::write_w_timestamp (
    const Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_Feedback_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::get_key_value (
    Fibonacci_Feedback_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_Feedback_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::Fibonacci_Feedback_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::~Fibonacci_Feedback_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Feedback_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_Feedback___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_Feedback_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_Feedback___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_Feedback_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::Fibonacci_Feedback_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::~Fibonacci_Feedback_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_Feedback_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_Feedback_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
extern v_copyin_result
__hello_world_msgs_action_dds__Fibonacci_FeedbackMessage___copyIn (
    c_base base,
    const struct hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ *from,
    struct _hello_world_msgs_action_dds__Fibonacci_FeedbackMessage_ *to);

extern void
__hello_world_msgs_action_dds__Fibonacci_FeedbackMessage___copyOut (
    const void *_from,
    void *_to);

// DDS hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ TypeSupportMetaHolder Object Body
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder::Fibonacci_FeedbackMessage_TypeSupportMetaHolder () :
        DDS::OpenSplice::TypeSupportMetaHolder ("hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_", "", "")
{
    copyIn = (DDS::OpenSplice::cxxCopyIn) __hello_world_msgs_action_dds__Fibonacci_FeedbackMessage___copyIn;
    copyOut = (DDS::OpenSplice::cxxCopyOut) __hello_world_msgs_action_dds__Fibonacci_FeedbackMessage___copyOut;
    metaDescriptorArrLength = 7;
    metaDescriptorLength = 791;
    const char *tmp[] = {"<MetaData version=\"1.0.0\"><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\">",
"<Struct name=\"Fibonacci_Feedback_\"><Member name=\"sequence_\"><Sequence><Long/></Sequence></Member>",
"</Struct></Module></Module></Module><Module name=\"unique_identifier_msgs\"><Module name=\"msg\"><Module name=\"dds_\">",
"<Struct name=\"UUID_\"><Member name=\"uuid_\"><Array size=\"16\"><Octet/></Array></Member></Struct></Module>",
"</Module></Module><Module name=\"hello_world_msgs\"><Module name=\"action\"><Module name=\"dds_\"><Struct name=\"Fibonacci_FeedbackMessage_\">",
"<Member name=\"goal_id_\"><Type name=\"::unique_identifier_msgs::msg::dds_::UUID_\"/></Member><Member name=\"feedback_\">",
"<Type name=\"Fibonacci_Feedback_\"/></Member></Struct></Module></Module></Module></MetaData>"};
    metaDescriptor = new const char*[metaDescriptorArrLength];
    memcpy(metaDescriptor, tmp, sizeof(tmp));
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder::~Fibonacci_FeedbackMessage_TypeSupportMetaHolder ()
{
    // Rely on parent destructor.
}

::DDS::OpenSplice::TypeSupportMetaHolder *
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder::clone()
{
    return new hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder();
}

::DDS::OpenSplice::DataWriter *
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder::create_datawriter ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl();
}

::DDS::OpenSplice::DataReader *
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder::create_datareader ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl();
}

::DDS::OpenSplice::DataReaderView *
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder::create_view ()
{
    return new hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl();
}

// DDS hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ TypeSupport Object Body
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::Fibonacci_FeedbackMessage_TypeSupport () :
        DDS::OpenSplice::TypeSupport()
{
    tsMetaHolder = new hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportMetaHolder();
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport::~Fibonacci_FeedbackMessage_TypeSupport ()
{
    DDS::release(tsMetaHolder);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ DataWriter_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::Fibonacci_FeedbackMessage_DataWriter_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::~Fibonacci_FeedbackMessage_DataWriter_impl ()
{
    // Parent destructor takes care of everything.
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::init (
        DDS::OpenSplice::Publisher *publisher,
        DDS::OpenSplice::DomainParticipant *participant,
        const DDS::DataWriterQos &qos,
        DDS::OpenSplice::Topic *a_topic,
        const char *name,
        DDS::OpenSplice::cxxCopyIn copyIn,
        DDS::OpenSplice::cxxCopyOut copyOut,
        u_writerCopy writerCopy,
        void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataWriter_impl::nlReq_init(
            publisher, participant, qos, a_topic, name, copyIn, copyOut, writerCopy, cdrMarshaler);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::register_instance (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance(&instance_data);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::register_instance_w_timestamp (
    const Fibonacci_FeedbackMessage_ & instance_data,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::register_instance_w_timestamp(&instance_data, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::unregister_instance (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::unregister_instance_w_timestamp (
    const Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::unregister_instance_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::write (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::write_w_timestamp (
    const Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::write_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::dispose (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::dispose_w_timestamp (
    const Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::dispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::writedispose (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose(&instance_data, handle);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::writedispose_w_timestamp (
    const Fibonacci_FeedbackMessage_ & instance_data,
    ::DDS::InstanceHandle_t handle,
    const ::DDS::Time_t & source_timestamp) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::writedispose_w_timestamp(&instance_data, handle, source_timestamp);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::get_key_value (
    Fibonacci_FeedbackMessage_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance_data) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataWriter_impl::lookup_instance(&instance_data);
}

// DDS hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ DataReader_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::Fibonacci_FeedbackMessage_DataReader_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::~Fibonacci_FeedbackMessage_DataReader_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::init (
    DDS::OpenSplice::Subscriber *subscriber,
    const DDS::DataReaderQos &qos,
    DDS::OpenSplice::TopicDescription *a_topic,
    const char *name,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut,
    DDS::OpenSplice::cxxReaderCopy readerCopy,
    void *cdrMarshaler)
{
    return DDS::OpenSplice::FooDataReader_impl::nlReq_init(
            subscriber, qos, a_topic, name, copyIn, copyOut, readerCopy, cdrMarshaler,
            this->dataSeqAlloc, this->dataSeqLength, this->dataSeqGetBuffer, this->dataSeqCopyOut);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status = DDS::RETCODE_OK;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReader_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReader_impl::wlReq_return_loan( received_data.get_buffer(),
                                                                                     info_seq.get_buffer() );
                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReader_impl::lookup_instance(&instance);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples)
{
    if ((max_samples < 0) && (max_samples != DDS::LENGTH_UNLIMITED)) {
        return DDS::RETCODE_BAD_PARAMETER;
    }

    /* Rule 1 : The values of len, max_len, and owns
     * for the two collections must be identical.
     */
    if ((received_data.length()  != info_seq.length())  ||
        (received_data.maximum() != info_seq.maximum()) ||
        (received_data.release() != info_seq.release()))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 4: If the input max_len>0 and the input owns==FALSE,
     * then the read operation will fail.
     */
    if ((info_seq.maximum() > 0) &&
        (info_seq.release() == false))
    {
        return DDS::RETCODE_PRECONDITION_NOT_MET;
    }

    /* Rule 5: If input max_len>0 and the input owns==TRUE,
     * then the read operation will...
     */
    if (info_seq.maximum() > 0) { /* owns is true, because of rule 4. */
        /* Rule 5a: If max_samples = LENGTH_UNLIMITED,
         * then at most max_len values will be copied.
         * Rule 5b: If max_samples <= max_len,
         * then at most max_samples values will be copied.
         */
        /* Rule 5c: If max_samples > max_len,
         * then the read operation will fail.
         */
        if ((max_samples != DDS::LENGTH_UNLIMITED) &&
            ((DDS::ULong)max_samples > info_seq.maximum())) {
            return DDS::RETCODE_PRECONDITION_NOT_MET;
        }
    }

    if ((max_samples == 0) ||
        ((info_seq.maximum() == 0) && (info_seq.release()))) {
        return DDS::RETCODE_NO_DATA;
    }

    return DDS::RETCODE_OK;
}

void *
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::dataSeqAlloc (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq *>(received_data);
    data_seq->replace(len, len, data_seq->allocbuf(len), false);
    return data_seq->get_buffer();
}

void *
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::dataSeqGetBuffer (
    void * received_data,
    DDS::ULong index)
{
	hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq *>(received_data);
	return &((*data_seq)[index]);
}

void
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::dataSeqLength (
    void * received_data,
    DDS::ULong len)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq *data_seq = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq *>(received_data);
    data_seq->length(len);
}

void
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::dataSeqCopyOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_FeedbackMessage___copyOut(from, data);
}

void
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::copyDataOut (
    const void * from,
    void * to)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ *data = reinterpret_cast<hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ *>(to);
    __hello_world_msgs_action_dds__Fibonacci_FeedbackMessage___copyOut(from, data);
}


// DDS hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ DataReaderView_impl Object Body
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::Fibonacci_FeedbackMessage_DataReaderView_impl ()
{
    // Parent constructor takes care of everything.
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::~Fibonacci_FeedbackMessage_DataReaderView_impl ()
{
    // Parent destructor takes care of everything.
}

DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::init (
    DDS::OpenSplice::DataReader *reader,
    const char *name,
    const DDS::DataReaderViewQos &qos,
    DDS::OpenSplice::cxxCopyIn copyIn,
    DDS::OpenSplice::cxxCopyOut copyOut)
{
    return DDS::OpenSplice::FooDataReaderView_impl::nlReq_init(
            reader, name, qos, copyIn, copyOut, hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::dataSeqAlloc,
            hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::dataSeqLength);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::read (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::take (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take(&received_data, info_seq, max_samples, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::read_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::take_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_w_condition(&received_data, info_seq, max_samples, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::read_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::read_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::take_next_sample (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & received_data,
    ::DDS::SampleInfo & sample_info) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::take_next_sample(&received_data, sample_info);
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::read_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::take_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::read_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::take_next_instance (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::SampleStateMask sample_states,
    ::DDS::ViewStateMask view_states,
    ::DDS::InstanceStateMask instance_states) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance(&received_data, info_seq, max_samples, a_handle, sample_states, view_states, instance_states);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::read_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::read_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::take_next_instance_w_condition (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq,
    ::DDS::Long max_samples,
    ::DDS::InstanceHandle_t a_handle,
    ::DDS::ReadCondition_ptr a_condition) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t status;

    status = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_impl::check_preconditions(received_data, info_seq, max_samples);
    if ( status == ::DDS::RETCODE_OK ) {
        status = DDS::OpenSplice::FooDataReaderView_impl::take_next_instance_w_condition(&received_data, info_seq, max_samples, a_handle, a_condition);
    }
    return status;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::return_loan (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq & received_data,
    ::DDS::SampleInfoSeq & info_seq) THROW_ORB_EXCEPTIONS
{
    ::DDS::ReturnCode_t result = ::DDS::RETCODE_OK;

    result = this->write_lock ();
    if (result == DDS::RETCODE_OK) {
        if ( received_data.length() > 0 ) {
            if (received_data.length() == info_seq.length() &&
                received_data.release() == info_seq.release() ) {
                if (!received_data.release()) {
                    result = DDS::OpenSplice::FooDataReaderView_impl::wlReq_return_loan( received_data.get_buffer(),
                                                           info_seq.get_buffer() );

                    if ( result == ::DDS::RETCODE_OK ) {
                        if ( !received_data.release() ) {
                            hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq::freebuf( received_data.get_buffer(false) );
                            received_data.replace(0, 0, NULL, false);
                            ::DDS::SampleInfoSeq::freebuf( info_seq.get_buffer(false) );
                            info_seq.replace(0, 0, NULL, false);
                        }
                    } else if ( result == ::DDS::RETCODE_NO_DATA ) {
                        if ( received_data.release() ) {
                            result = ::DDS::RETCODE_OK;
                        } else {
                            result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
                        }
                    }
                }
            } else {
                result = ::DDS::RETCODE_PRECONDITION_NOT_MET;
            }
        }
        this->unlock();
    }
    return result;
}

::DDS::ReturnCode_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::get_key_value (
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & key_holder,
    ::DDS::InstanceHandle_t handle) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::get_key_value(&key_holder, handle);
}

::DDS::InstanceHandle_t
hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_impl::lookup_instance (
    const hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_ & instance) THROW_ORB_EXCEPTIONS
{
    return DDS::OpenSplice::FooDataReaderView_impl::lookup_instance(&instance);
}
