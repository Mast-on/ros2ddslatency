#ifndef _H_545E5EEEFBA73089648C33CD021B081E_SetMessage_DCPS_H_
#define _H_545E5EEEFBA73089648C33CD021B081E_SetMessage_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetMessage_.h"


namespace hello_world_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class SetMessage_Request_TypeSupportInterface;

            typedef SetMessage_Request_TypeSupportInterface * SetMessage_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Request_TypeSupportInterface> SetMessage_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetMessage_Request_TypeSupportInterface> SetMessage_Request_TypeSupportInterface_out;


            class SetMessage_Request_DataWriter;

            typedef SetMessage_Request_DataWriter * SetMessage_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Request_DataWriter> SetMessage_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetMessage_Request_DataWriter> SetMessage_Request_DataWriter_out;


            class SetMessage_Request_DataReader;

            typedef SetMessage_Request_DataReader * SetMessage_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Request_DataReader> SetMessage_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetMessage_Request_DataReader> SetMessage_Request_DataReader_out;


            class SetMessage_Request_DataReaderView;

            typedef SetMessage_Request_DataReaderView * SetMessage_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Request_DataReaderView> SetMessage_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetMessage_Request_DataReaderView> SetMessage_Request_DataReaderView_out;

            struct SetMessage_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetMessage_Request_, struct SetMessage_Request_Seq_uniq_> SetMessage_Request_Seq;
            typedef DDS_DCPSSequence_var < SetMessage_Request_Seq> SetMessage_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetMessage_Request_Seq> SetMessage_Request_Seq_out;

            class  SetMessage_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetMessage_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetMessage_Request_TypeSupportInterface_var _var_type;

                static SetMessage_Request_TypeSupportInterface_ptr _duplicate (SetMessage_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetMessage_Request_TypeSupportInterface () {};
                ~SetMessage_Request_TypeSupportInterface () {};
            private:
                SetMessage_Request_TypeSupportInterface (const SetMessage_Request_TypeSupportInterface &);
                SetMessage_Request_TypeSupportInterface & operator = (const SetMessage_Request_TypeSupportInterface &);
            };

            class  SetMessage_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetMessage_Request_DataWriter_ptr _ptr_type;
                typedef SetMessage_Request_DataWriter_var _var_type;

                static SetMessage_Request_DataWriter_ptr _duplicate (SetMessage_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetMessage_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetMessage_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetMessage_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMessage_Request_& instance_data) = 0;

            protected:
                SetMessage_Request_DataWriter () {};
                ~SetMessage_Request_DataWriter () {};
            private:
                SetMessage_Request_DataWriter (const SetMessage_Request_DataWriter &);
                SetMessage_Request_DataWriter & operator = (const SetMessage_Request_DataWriter &);
            };

            class  SetMessage_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetMessage_Request_DataReader_ptr _ptr_type;
                typedef SetMessage_Request_DataReader_var _var_type;

                static SetMessage_Request_DataReader_ptr _duplicate (SetMessage_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMessage_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMessage_Request_& instance) = 0;

            protected:
                SetMessage_Request_DataReader () {};
                ~SetMessage_Request_DataReader () {};
            private:
                SetMessage_Request_DataReader (const SetMessage_Request_DataReader &);
                SetMessage_Request_DataReader & operator = (const SetMessage_Request_DataReader &);
            };

            class  SetMessage_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetMessage_Request_DataReaderView_ptr _ptr_type;
                typedef SetMessage_Request_DataReaderView_var _var_type;

                static SetMessage_Request_DataReaderView_ptr _duplicate (SetMessage_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMessage_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMessage_Request_& instance) = 0;

            protected:
                SetMessage_Request_DataReaderView () {};
                ~SetMessage_Request_DataReaderView () {};
            private:
                SetMessage_Request_DataReaderView (const SetMessage_Request_DataReaderView &);
                SetMessage_Request_DataReaderView & operator = (const SetMessage_Request_DataReaderView &);
            };
            class SetMessage_Response_TypeSupportInterface;

            typedef SetMessage_Response_TypeSupportInterface * SetMessage_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Response_TypeSupportInterface> SetMessage_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetMessage_Response_TypeSupportInterface> SetMessage_Response_TypeSupportInterface_out;


            class SetMessage_Response_DataWriter;

            typedef SetMessage_Response_DataWriter * SetMessage_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Response_DataWriter> SetMessage_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetMessage_Response_DataWriter> SetMessage_Response_DataWriter_out;


            class SetMessage_Response_DataReader;

            typedef SetMessage_Response_DataReader * SetMessage_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Response_DataReader> SetMessage_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetMessage_Response_DataReader> SetMessage_Response_DataReader_out;


            class SetMessage_Response_DataReaderView;

            typedef SetMessage_Response_DataReaderView * SetMessage_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetMessage_Response_DataReaderView> SetMessage_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetMessage_Response_DataReaderView> SetMessage_Response_DataReaderView_out;

            struct SetMessage_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SetMessage_Response_, struct SetMessage_Response_Seq_uniq_> SetMessage_Response_Seq;
            typedef DDS_DCPSSequence_var < SetMessage_Response_Seq> SetMessage_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetMessage_Response_Seq> SetMessage_Response_Seq_out;

            class  SetMessage_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetMessage_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetMessage_Response_TypeSupportInterface_var _var_type;

                static SetMessage_Response_TypeSupportInterface_ptr _duplicate (SetMessage_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetMessage_Response_TypeSupportInterface () {};
                ~SetMessage_Response_TypeSupportInterface () {};
            private:
                SetMessage_Response_TypeSupportInterface (const SetMessage_Response_TypeSupportInterface &);
                SetMessage_Response_TypeSupportInterface & operator = (const SetMessage_Response_TypeSupportInterface &);
            };

            class  SetMessage_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetMessage_Response_DataWriter_ptr _ptr_type;
                typedef SetMessage_Response_DataWriter_var _var_type;

                static SetMessage_Response_DataWriter_ptr _duplicate (SetMessage_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetMessage_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetMessage_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetMessage_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMessage_Response_& instance_data) = 0;

            protected:
                SetMessage_Response_DataWriter () {};
                ~SetMessage_Response_DataWriter () {};
            private:
                SetMessage_Response_DataWriter (const SetMessage_Response_DataWriter &);
                SetMessage_Response_DataWriter & operator = (const SetMessage_Response_DataWriter &);
            };

            class  SetMessage_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetMessage_Response_DataReader_ptr _ptr_type;
                typedef SetMessage_Response_DataReader_var _var_type;

                static SetMessage_Response_DataReader_ptr _duplicate (SetMessage_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMessage_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMessage_Response_& instance) = 0;

            protected:
                SetMessage_Response_DataReader () {};
                ~SetMessage_Response_DataReader () {};
            private:
                SetMessage_Response_DataReader (const SetMessage_Response_DataReader &);
                SetMessage_Response_DataReader & operator = (const SetMessage_Response_DataReader &);
            };

            class  SetMessage_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetMessage_Response_DataReaderView_ptr _ptr_type;
                typedef SetMessage_Response_DataReaderView_var _var_type;

                static SetMessage_Response_DataReaderView_ptr _duplicate (SetMessage_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetMessage_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetMessage_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetMessage_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetMessage_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetMessage_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetMessage_Response_& instance) = 0;

            protected:
                SetMessage_Response_DataReaderView () {};
                ~SetMessage_Response_DataReaderView () {};
            private:
                SetMessage_Response_DataReaderView (const SetMessage_Response_DataReaderView &);
                SetMessage_Response_DataReaderView & operator = (const SetMessage_Response_DataReaderView &);
            };
            class Sample_SetMessage_Request_TypeSupportInterface;

            typedef Sample_SetMessage_Request_TypeSupportInterface * Sample_SetMessage_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Request_TypeSupportInterface> Sample_SetMessage_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Request_TypeSupportInterface> Sample_SetMessage_Request_TypeSupportInterface_out;


            class Sample_SetMessage_Request_DataWriter;

            typedef Sample_SetMessage_Request_DataWriter * Sample_SetMessage_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Request_DataWriter> Sample_SetMessage_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Request_DataWriter> Sample_SetMessage_Request_DataWriter_out;


            class Sample_SetMessage_Request_DataReader;

            typedef Sample_SetMessage_Request_DataReader * Sample_SetMessage_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Request_DataReader> Sample_SetMessage_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Request_DataReader> Sample_SetMessage_Request_DataReader_out;


            class Sample_SetMessage_Request_DataReaderView;

            typedef Sample_SetMessage_Request_DataReaderView * Sample_SetMessage_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Request_DataReaderView> Sample_SetMessage_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Request_DataReaderView> Sample_SetMessage_Request_DataReaderView_out;

            struct Sample_SetMessage_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetMessage_Request_, struct Sample_SetMessage_Request_Seq_uniq_> Sample_SetMessage_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetMessage_Request_Seq> Sample_SetMessage_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetMessage_Request_Seq> Sample_SetMessage_Request_Seq_out;

            class  Sample_SetMessage_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetMessage_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetMessage_Request_TypeSupportInterface_var _var_type;

                static Sample_SetMessage_Request_TypeSupportInterface_ptr _duplicate (Sample_SetMessage_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetMessage_Request_TypeSupportInterface () {};
                ~Sample_SetMessage_Request_TypeSupportInterface () {};
            private:
                Sample_SetMessage_Request_TypeSupportInterface (const Sample_SetMessage_Request_TypeSupportInterface &);
                Sample_SetMessage_Request_TypeSupportInterface & operator = (const Sample_SetMessage_Request_TypeSupportInterface &);
            };

            class  Sample_SetMessage_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetMessage_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetMessage_Request_DataWriter_var _var_type;

                static Sample_SetMessage_Request_DataWriter_ptr _duplicate (Sample_SetMessage_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetMessage_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetMessage_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetMessage_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetMessage_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMessage_Request_& instance_data) = 0;

            protected:
                Sample_SetMessage_Request_DataWriter () {};
                ~Sample_SetMessage_Request_DataWriter () {};
            private:
                Sample_SetMessage_Request_DataWriter (const Sample_SetMessage_Request_DataWriter &);
                Sample_SetMessage_Request_DataWriter & operator = (const Sample_SetMessage_Request_DataWriter &);
            };

            class  Sample_SetMessage_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetMessage_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetMessage_Request_DataReader_var _var_type;

                static Sample_SetMessage_Request_DataReader_ptr _duplicate (Sample_SetMessage_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMessage_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMessage_Request_& instance) = 0;

            protected:
                Sample_SetMessage_Request_DataReader () {};
                ~Sample_SetMessage_Request_DataReader () {};
            private:
                Sample_SetMessage_Request_DataReader (const Sample_SetMessage_Request_DataReader &);
                Sample_SetMessage_Request_DataReader & operator = (const Sample_SetMessage_Request_DataReader &);
            };

            class  Sample_SetMessage_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetMessage_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetMessage_Request_DataReaderView_var _var_type;

                static Sample_SetMessage_Request_DataReaderView_ptr _duplicate (Sample_SetMessage_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMessage_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMessage_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMessage_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMessage_Request_& instance) = 0;

            protected:
                Sample_SetMessage_Request_DataReaderView () {};
                ~Sample_SetMessage_Request_DataReaderView () {};
            private:
                Sample_SetMessage_Request_DataReaderView (const Sample_SetMessage_Request_DataReaderView &);
                Sample_SetMessage_Request_DataReaderView & operator = (const Sample_SetMessage_Request_DataReaderView &);
            };
            class Sample_SetMessage_Response_TypeSupportInterface;

            typedef Sample_SetMessage_Response_TypeSupportInterface * Sample_SetMessage_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Response_TypeSupportInterface> Sample_SetMessage_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Response_TypeSupportInterface> Sample_SetMessage_Response_TypeSupportInterface_out;


            class Sample_SetMessage_Response_DataWriter;

            typedef Sample_SetMessage_Response_DataWriter * Sample_SetMessage_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Response_DataWriter> Sample_SetMessage_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Response_DataWriter> Sample_SetMessage_Response_DataWriter_out;


            class Sample_SetMessage_Response_DataReader;

            typedef Sample_SetMessage_Response_DataReader * Sample_SetMessage_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Response_DataReader> Sample_SetMessage_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Response_DataReader> Sample_SetMessage_Response_DataReader_out;


            class Sample_SetMessage_Response_DataReaderView;

            typedef Sample_SetMessage_Response_DataReaderView * Sample_SetMessage_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetMessage_Response_DataReaderView> Sample_SetMessage_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetMessage_Response_DataReaderView> Sample_SetMessage_Response_DataReaderView_out;

            struct Sample_SetMessage_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SetMessage_Response_, struct Sample_SetMessage_Response_Seq_uniq_> Sample_SetMessage_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetMessage_Response_Seq> Sample_SetMessage_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetMessage_Response_Seq> Sample_SetMessage_Response_Seq_out;

            class  Sample_SetMessage_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetMessage_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetMessage_Response_TypeSupportInterface_var _var_type;

                static Sample_SetMessage_Response_TypeSupportInterface_ptr _duplicate (Sample_SetMessage_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetMessage_Response_TypeSupportInterface () {};
                ~Sample_SetMessage_Response_TypeSupportInterface () {};
            private:
                Sample_SetMessage_Response_TypeSupportInterface (const Sample_SetMessage_Response_TypeSupportInterface &);
                Sample_SetMessage_Response_TypeSupportInterface & operator = (const Sample_SetMessage_Response_TypeSupportInterface &);
            };

            class  Sample_SetMessage_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetMessage_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetMessage_Response_DataWriter_var _var_type;

                static Sample_SetMessage_Response_DataWriter_ptr _duplicate (Sample_SetMessage_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetMessage_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetMessage_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetMessage_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetMessage_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMessage_Response_& instance_data) = 0;

            protected:
                Sample_SetMessage_Response_DataWriter () {};
                ~Sample_SetMessage_Response_DataWriter () {};
            private:
                Sample_SetMessage_Response_DataWriter (const Sample_SetMessage_Response_DataWriter &);
                Sample_SetMessage_Response_DataWriter & operator = (const Sample_SetMessage_Response_DataWriter &);
            };

            class  Sample_SetMessage_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetMessage_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetMessage_Response_DataReader_var _var_type;

                static Sample_SetMessage_Response_DataReader_ptr _duplicate (Sample_SetMessage_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMessage_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMessage_Response_& instance) = 0;

            protected:
                Sample_SetMessage_Response_DataReader () {};
                ~Sample_SetMessage_Response_DataReader () {};
            private:
                Sample_SetMessage_Response_DataReader (const Sample_SetMessage_Response_DataReader &);
                Sample_SetMessage_Response_DataReader & operator = (const Sample_SetMessage_Response_DataReader &);
            };

            class  Sample_SetMessage_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetMessage_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetMessage_Response_DataReaderView_var _var_type;

                static Sample_SetMessage_Response_DataReaderView_ptr _duplicate (Sample_SetMessage_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetMessage_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetMessage_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetMessage_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetMessage_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetMessage_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetMessage_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetMessage_Response_& instance) = 0;

            protected:
                Sample_SetMessage_Response_DataReaderView () {};
                ~Sample_SetMessage_Response_DataReaderView () {};
            private:
                Sample_SetMessage_Response_DataReaderView (const Sample_SetMessage_Response_DataReaderView &);
                Sample_SetMessage_Response_DataReaderView & operator = (const Sample_SetMessage_Response_DataReaderView &);
            };
        }

    }

}

#endif
