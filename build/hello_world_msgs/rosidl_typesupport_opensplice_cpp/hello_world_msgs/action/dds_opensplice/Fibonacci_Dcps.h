#ifndef _H_696897253C3E1126468373BB8785F4BC_Fibonacci_DCPS_H_
#define _H_696897253C3E1126468373BB8785F4BC_Fibonacci_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Fibonacci_.h"


namespace hello_world_msgs
{
    namespace action
    {
        namespace dds_
        {
            class Fibonacci_Goal_TypeSupportInterface;

            typedef Fibonacci_Goal_TypeSupportInterface * Fibonacci_Goal_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Goal_TypeSupportInterface> Fibonacci_Goal_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Goal_TypeSupportInterface> Fibonacci_Goal_TypeSupportInterface_out;


            class Fibonacci_Goal_DataWriter;

            typedef Fibonacci_Goal_DataWriter * Fibonacci_Goal_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Goal_DataWriter> Fibonacci_Goal_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Goal_DataWriter> Fibonacci_Goal_DataWriter_out;


            class Fibonacci_Goal_DataReader;

            typedef Fibonacci_Goal_DataReader * Fibonacci_Goal_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Goal_DataReader> Fibonacci_Goal_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Goal_DataReader> Fibonacci_Goal_DataReader_out;


            class Fibonacci_Goal_DataReaderView;

            typedef Fibonacci_Goal_DataReaderView * Fibonacci_Goal_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Goal_DataReaderView> Fibonacci_Goal_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Goal_DataReaderView> Fibonacci_Goal_DataReaderView_out;

            struct Fibonacci_Goal_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Fibonacci_Goal_, struct Fibonacci_Goal_Seq_uniq_> Fibonacci_Goal_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_Goal_Seq> Fibonacci_Goal_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_Goal_Seq> Fibonacci_Goal_Seq_out;

            class  Fibonacci_Goal_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_Goal_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_Goal_TypeSupportInterface_var _var_type;

                static Fibonacci_Goal_TypeSupportInterface_ptr _duplicate (Fibonacci_Goal_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Goal_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Goal_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_Goal_TypeSupportInterface () {};
                ~Fibonacci_Goal_TypeSupportInterface () {};
            private:
                Fibonacci_Goal_TypeSupportInterface (const Fibonacci_Goal_TypeSupportInterface &);
                Fibonacci_Goal_TypeSupportInterface & operator = (const Fibonacci_Goal_TypeSupportInterface &);
            };

            class  Fibonacci_Goal_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_Goal_DataWriter_ptr _ptr_type;
                typedef Fibonacci_Goal_DataWriter_var _var_type;

                static Fibonacci_Goal_DataWriter_ptr _duplicate (Fibonacci_Goal_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Goal_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Goal_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_Goal_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_Goal_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_Goal_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_Goal_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Goal_& instance_data) = 0;

            protected:
                Fibonacci_Goal_DataWriter () {};
                ~Fibonacci_Goal_DataWriter () {};
            private:
                Fibonacci_Goal_DataWriter (const Fibonacci_Goal_DataWriter &);
                Fibonacci_Goal_DataWriter & operator = (const Fibonacci_Goal_DataWriter &);
            };

            class  Fibonacci_Goal_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_Goal_DataReader_ptr _ptr_type;
                typedef Fibonacci_Goal_DataReader_var _var_type;

                static Fibonacci_Goal_DataReader_ptr _duplicate (Fibonacci_Goal_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Goal_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Goal_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Goal_& instance) = 0;

            protected:
                Fibonacci_Goal_DataReader () {};
                ~Fibonacci_Goal_DataReader () {};
            private:
                Fibonacci_Goal_DataReader (const Fibonacci_Goal_DataReader &);
                Fibonacci_Goal_DataReader & operator = (const Fibonacci_Goal_DataReader &);
            };

            class  Fibonacci_Goal_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_Goal_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_Goal_DataReaderView_var _var_type;

                static Fibonacci_Goal_DataReaderView_ptr _duplicate (Fibonacci_Goal_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Goal_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Goal_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Goal_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_Goal_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_Goal_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Goal_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Goal_& instance) = 0;

            protected:
                Fibonacci_Goal_DataReaderView () {};
                ~Fibonacci_Goal_DataReaderView () {};
            private:
                Fibonacci_Goal_DataReaderView (const Fibonacci_Goal_DataReaderView &);
                Fibonacci_Goal_DataReaderView & operator = (const Fibonacci_Goal_DataReaderView &);
            };
            class Fibonacci_SendGoal_Request_TypeSupportInterface;

            typedef Fibonacci_SendGoal_Request_TypeSupportInterface * Fibonacci_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Request_TypeSupportInterface> Fibonacci_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Request_TypeSupportInterface> Fibonacci_SendGoal_Request_TypeSupportInterface_out;


            class Fibonacci_SendGoal_Request_DataWriter;

            typedef Fibonacci_SendGoal_Request_DataWriter * Fibonacci_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Request_DataWriter> Fibonacci_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Request_DataWriter> Fibonacci_SendGoal_Request_DataWriter_out;


            class Fibonacci_SendGoal_Request_DataReader;

            typedef Fibonacci_SendGoal_Request_DataReader * Fibonacci_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Request_DataReader> Fibonacci_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Request_DataReader> Fibonacci_SendGoal_Request_DataReader_out;


            class Fibonacci_SendGoal_Request_DataReaderView;

            typedef Fibonacci_SendGoal_Request_DataReaderView * Fibonacci_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Request_DataReaderView> Fibonacci_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Request_DataReaderView> Fibonacci_SendGoal_Request_DataReaderView_out;

            struct Fibonacci_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Fibonacci_SendGoal_Request_, struct Fibonacci_SendGoal_Request_Seq_uniq_> Fibonacci_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_SendGoal_Request_Seq> Fibonacci_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_SendGoal_Request_Seq> Fibonacci_SendGoal_Request_Seq_out;

            class  Fibonacci_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Request_TypeSupportInterface_var _var_type;

                static Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _duplicate (Fibonacci_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_SendGoal_Request_TypeSupportInterface () {};
                ~Fibonacci_SendGoal_Request_TypeSupportInterface () {};
            private:
                Fibonacci_SendGoal_Request_TypeSupportInterface (const Fibonacci_SendGoal_Request_TypeSupportInterface &);
                Fibonacci_SendGoal_Request_TypeSupportInterface & operator = (const Fibonacci_SendGoal_Request_TypeSupportInterface &);
            };

            class  Fibonacci_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Request_DataWriter_var _var_type;

                static Fibonacci_SendGoal_Request_DataWriter_ptr _duplicate (Fibonacci_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_SendGoal_Request_& instance_data) = 0;

            protected:
                Fibonacci_SendGoal_Request_DataWriter () {};
                ~Fibonacci_SendGoal_Request_DataWriter () {};
            private:
                Fibonacci_SendGoal_Request_DataWriter (const Fibonacci_SendGoal_Request_DataWriter &);
                Fibonacci_SendGoal_Request_DataWriter & operator = (const Fibonacci_SendGoal_Request_DataWriter &);
            };

            class  Fibonacci_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Request_DataReader_var _var_type;

                static Fibonacci_SendGoal_Request_DataReader_ptr _duplicate (Fibonacci_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_SendGoal_Request_& instance) = 0;

            protected:
                Fibonacci_SendGoal_Request_DataReader () {};
                ~Fibonacci_SendGoal_Request_DataReader () {};
            private:
                Fibonacci_SendGoal_Request_DataReader (const Fibonacci_SendGoal_Request_DataReader &);
                Fibonacci_SendGoal_Request_DataReader & operator = (const Fibonacci_SendGoal_Request_DataReader &);
            };

            class  Fibonacci_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Request_DataReaderView_var _var_type;

                static Fibonacci_SendGoal_Request_DataReaderView_ptr _duplicate (Fibonacci_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_SendGoal_Request_& instance) = 0;

            protected:
                Fibonacci_SendGoal_Request_DataReaderView () {};
                ~Fibonacci_SendGoal_Request_DataReaderView () {};
            private:
                Fibonacci_SendGoal_Request_DataReaderView (const Fibonacci_SendGoal_Request_DataReaderView &);
                Fibonacci_SendGoal_Request_DataReaderView & operator = (const Fibonacci_SendGoal_Request_DataReaderView &);
            };
            class Fibonacci_SendGoal_Response_TypeSupportInterface;

            typedef Fibonacci_SendGoal_Response_TypeSupportInterface * Fibonacci_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Response_TypeSupportInterface> Fibonacci_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Response_TypeSupportInterface> Fibonacci_SendGoal_Response_TypeSupportInterface_out;


            class Fibonacci_SendGoal_Response_DataWriter;

            typedef Fibonacci_SendGoal_Response_DataWriter * Fibonacci_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Response_DataWriter> Fibonacci_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Response_DataWriter> Fibonacci_SendGoal_Response_DataWriter_out;


            class Fibonacci_SendGoal_Response_DataReader;

            typedef Fibonacci_SendGoal_Response_DataReader * Fibonacci_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Response_DataReader> Fibonacci_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Response_DataReader> Fibonacci_SendGoal_Response_DataReader_out;


            class Fibonacci_SendGoal_Response_DataReaderView;

            typedef Fibonacci_SendGoal_Response_DataReaderView * Fibonacci_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_SendGoal_Response_DataReaderView> Fibonacci_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_SendGoal_Response_DataReaderView> Fibonacci_SendGoal_Response_DataReaderView_out;

            struct Fibonacci_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Fibonacci_SendGoal_Response_, struct Fibonacci_SendGoal_Response_Seq_uniq_> Fibonacci_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_SendGoal_Response_Seq> Fibonacci_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_SendGoal_Response_Seq> Fibonacci_SendGoal_Response_Seq_out;

            class  Fibonacci_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Response_TypeSupportInterface_var _var_type;

                static Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _duplicate (Fibonacci_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_SendGoal_Response_TypeSupportInterface () {};
                ~Fibonacci_SendGoal_Response_TypeSupportInterface () {};
            private:
                Fibonacci_SendGoal_Response_TypeSupportInterface (const Fibonacci_SendGoal_Response_TypeSupportInterface &);
                Fibonacci_SendGoal_Response_TypeSupportInterface & operator = (const Fibonacci_SendGoal_Response_TypeSupportInterface &);
            };

            class  Fibonacci_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Response_DataWriter_var _var_type;

                static Fibonacci_SendGoal_Response_DataWriter_ptr _duplicate (Fibonacci_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_SendGoal_Response_& instance_data) = 0;

            protected:
                Fibonacci_SendGoal_Response_DataWriter () {};
                ~Fibonacci_SendGoal_Response_DataWriter () {};
            private:
                Fibonacci_SendGoal_Response_DataWriter (const Fibonacci_SendGoal_Response_DataWriter &);
                Fibonacci_SendGoal_Response_DataWriter & operator = (const Fibonacci_SendGoal_Response_DataWriter &);
            };

            class  Fibonacci_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Response_DataReader_var _var_type;

                static Fibonacci_SendGoal_Response_DataReader_ptr _duplicate (Fibonacci_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_SendGoal_Response_& instance) = 0;

            protected:
                Fibonacci_SendGoal_Response_DataReader () {};
                ~Fibonacci_SendGoal_Response_DataReader () {};
            private:
                Fibonacci_SendGoal_Response_DataReader (const Fibonacci_SendGoal_Response_DataReader &);
                Fibonacci_SendGoal_Response_DataReader & operator = (const Fibonacci_SendGoal_Response_DataReader &);
            };

            class  Fibonacci_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_SendGoal_Response_DataReaderView_var _var_type;

                static Fibonacci_SendGoal_Response_DataReaderView_ptr _duplicate (Fibonacci_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_SendGoal_Response_& instance) = 0;

            protected:
                Fibonacci_SendGoal_Response_DataReaderView () {};
                ~Fibonacci_SendGoal_Response_DataReaderView () {};
            private:
                Fibonacci_SendGoal_Response_DataReaderView (const Fibonacci_SendGoal_Response_DataReaderView &);
                Fibonacci_SendGoal_Response_DataReaderView & operator = (const Fibonacci_SendGoal_Response_DataReaderView &);
            };
            class Sample_Fibonacci_SendGoal_Request_TypeSupportInterface;

            typedef Sample_Fibonacci_SendGoal_Request_TypeSupportInterface * Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Request_TypeSupportInterface> Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Request_TypeSupportInterface> Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_out;


            class Sample_Fibonacci_SendGoal_Request_DataWriter;

            typedef Sample_Fibonacci_SendGoal_Request_DataWriter * Sample_Fibonacci_SendGoal_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Request_DataWriter> Sample_Fibonacci_SendGoal_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Request_DataWriter> Sample_Fibonacci_SendGoal_Request_DataWriter_out;


            class Sample_Fibonacci_SendGoal_Request_DataReader;

            typedef Sample_Fibonacci_SendGoal_Request_DataReader * Sample_Fibonacci_SendGoal_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Request_DataReader> Sample_Fibonacci_SendGoal_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Request_DataReader> Sample_Fibonacci_SendGoal_Request_DataReader_out;


            class Sample_Fibonacci_SendGoal_Request_DataReaderView;

            typedef Sample_Fibonacci_SendGoal_Request_DataReaderView * Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Request_DataReaderView> Sample_Fibonacci_SendGoal_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Request_DataReaderView> Sample_Fibonacci_SendGoal_Request_DataReaderView_out;

            struct Sample_Fibonacci_SendGoal_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Fibonacci_SendGoal_Request_, struct Sample_Fibonacci_SendGoal_Request_Seq_uniq_> Sample_Fibonacci_SendGoal_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Fibonacci_SendGoal_Request_Seq> Sample_Fibonacci_SendGoal_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Fibonacci_SendGoal_Request_Seq> Sample_Fibonacci_SendGoal_Request_Seq_out;

            class  Sample_Fibonacci_SendGoal_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_var _var_type;

                static Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _duplicate (Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Fibonacci_SendGoal_Request_TypeSupportInterface () {};
                ~Sample_Fibonacci_SendGoal_Request_TypeSupportInterface () {};
            private:
                Sample_Fibonacci_SendGoal_Request_TypeSupportInterface (const Sample_Fibonacci_SendGoal_Request_TypeSupportInterface &);
                Sample_Fibonacci_SendGoal_Request_TypeSupportInterface & operator = (const Sample_Fibonacci_SendGoal_Request_TypeSupportInterface &);
            };

            class  Sample_Fibonacci_SendGoal_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Request_DataWriter_var _var_type;

                static Sample_Fibonacci_SendGoal_Request_DataWriter_ptr _duplicate (Sample_Fibonacci_SendGoal_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Fibonacci_SendGoal_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Fibonacci_SendGoal_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Fibonacci_SendGoal_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_SendGoal_Request_& instance_data) = 0;

            protected:
                Sample_Fibonacci_SendGoal_Request_DataWriter () {};
                ~Sample_Fibonacci_SendGoal_Request_DataWriter () {};
            private:
                Sample_Fibonacci_SendGoal_Request_DataWriter (const Sample_Fibonacci_SendGoal_Request_DataWriter &);
                Sample_Fibonacci_SendGoal_Request_DataWriter & operator = (const Sample_Fibonacci_SendGoal_Request_DataWriter &);
            };

            class  Sample_Fibonacci_SendGoal_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Request_DataReader_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Request_DataReader_var _var_type;

                static Sample_Fibonacci_SendGoal_Request_DataReader_ptr _duplicate (Sample_Fibonacci_SendGoal_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_SendGoal_Request_& instance) = 0;

            protected:
                Sample_Fibonacci_SendGoal_Request_DataReader () {};
                ~Sample_Fibonacci_SendGoal_Request_DataReader () {};
            private:
                Sample_Fibonacci_SendGoal_Request_DataReader (const Sample_Fibonacci_SendGoal_Request_DataReader &);
                Sample_Fibonacci_SendGoal_Request_DataReader & operator = (const Sample_Fibonacci_SendGoal_Request_DataReader &);
            };

            class  Sample_Fibonacci_SendGoal_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Request_DataReaderView_var _var_type;

                static Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr _duplicate (Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_SendGoal_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_SendGoal_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_SendGoal_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_SendGoal_Request_& instance) = 0;

            protected:
                Sample_Fibonacci_SendGoal_Request_DataReaderView () {};
                ~Sample_Fibonacci_SendGoal_Request_DataReaderView () {};
            private:
                Sample_Fibonacci_SendGoal_Request_DataReaderView (const Sample_Fibonacci_SendGoal_Request_DataReaderView &);
                Sample_Fibonacci_SendGoal_Request_DataReaderView & operator = (const Sample_Fibonacci_SendGoal_Request_DataReaderView &);
            };
            class Sample_Fibonacci_SendGoal_Response_TypeSupportInterface;

            typedef Sample_Fibonacci_SendGoal_Response_TypeSupportInterface * Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Response_TypeSupportInterface> Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Response_TypeSupportInterface> Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_out;


            class Sample_Fibonacci_SendGoal_Response_DataWriter;

            typedef Sample_Fibonacci_SendGoal_Response_DataWriter * Sample_Fibonacci_SendGoal_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Response_DataWriter> Sample_Fibonacci_SendGoal_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Response_DataWriter> Sample_Fibonacci_SendGoal_Response_DataWriter_out;


            class Sample_Fibonacci_SendGoal_Response_DataReader;

            typedef Sample_Fibonacci_SendGoal_Response_DataReader * Sample_Fibonacci_SendGoal_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Response_DataReader> Sample_Fibonacci_SendGoal_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Response_DataReader> Sample_Fibonacci_SendGoal_Response_DataReader_out;


            class Sample_Fibonacci_SendGoal_Response_DataReaderView;

            typedef Sample_Fibonacci_SendGoal_Response_DataReaderView * Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_SendGoal_Response_DataReaderView> Sample_Fibonacci_SendGoal_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_SendGoal_Response_DataReaderView> Sample_Fibonacci_SendGoal_Response_DataReaderView_out;

            struct Sample_Fibonacci_SendGoal_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Fibonacci_SendGoal_Response_, struct Sample_Fibonacci_SendGoal_Response_Seq_uniq_> Sample_Fibonacci_SendGoal_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Fibonacci_SendGoal_Response_Seq> Sample_Fibonacci_SendGoal_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Fibonacci_SendGoal_Response_Seq> Sample_Fibonacci_SendGoal_Response_Seq_out;

            class  Sample_Fibonacci_SendGoal_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_var _var_type;

                static Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _duplicate (Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Fibonacci_SendGoal_Response_TypeSupportInterface () {};
                ~Sample_Fibonacci_SendGoal_Response_TypeSupportInterface () {};
            private:
                Sample_Fibonacci_SendGoal_Response_TypeSupportInterface (const Sample_Fibonacci_SendGoal_Response_TypeSupportInterface &);
                Sample_Fibonacci_SendGoal_Response_TypeSupportInterface & operator = (const Sample_Fibonacci_SendGoal_Response_TypeSupportInterface &);
            };

            class  Sample_Fibonacci_SendGoal_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Response_DataWriter_var _var_type;

                static Sample_Fibonacci_SendGoal_Response_DataWriter_ptr _duplicate (Sample_Fibonacci_SendGoal_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Fibonacci_SendGoal_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Fibonacci_SendGoal_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Fibonacci_SendGoal_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_SendGoal_Response_& instance_data) = 0;

            protected:
                Sample_Fibonacci_SendGoal_Response_DataWriter () {};
                ~Sample_Fibonacci_SendGoal_Response_DataWriter () {};
            private:
                Sample_Fibonacci_SendGoal_Response_DataWriter (const Sample_Fibonacci_SendGoal_Response_DataWriter &);
                Sample_Fibonacci_SendGoal_Response_DataWriter & operator = (const Sample_Fibonacci_SendGoal_Response_DataWriter &);
            };

            class  Sample_Fibonacci_SendGoal_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Response_DataReader_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Response_DataReader_var _var_type;

                static Sample_Fibonacci_SendGoal_Response_DataReader_ptr _duplicate (Sample_Fibonacci_SendGoal_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_SendGoal_Response_& instance) = 0;

            protected:
                Sample_Fibonacci_SendGoal_Response_DataReader () {};
                ~Sample_Fibonacci_SendGoal_Response_DataReader () {};
            private:
                Sample_Fibonacci_SendGoal_Response_DataReader (const Sample_Fibonacci_SendGoal_Response_DataReader &);
                Sample_Fibonacci_SendGoal_Response_DataReader & operator = (const Sample_Fibonacci_SendGoal_Response_DataReader &);
            };

            class  Sample_Fibonacci_SendGoal_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Fibonacci_SendGoal_Response_DataReaderView_var _var_type;

                static Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr _duplicate (Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_SendGoal_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_SendGoal_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_SendGoal_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_SendGoal_Response_& instance) = 0;

            protected:
                Sample_Fibonacci_SendGoal_Response_DataReaderView () {};
                ~Sample_Fibonacci_SendGoal_Response_DataReaderView () {};
            private:
                Sample_Fibonacci_SendGoal_Response_DataReaderView (const Sample_Fibonacci_SendGoal_Response_DataReaderView &);
                Sample_Fibonacci_SendGoal_Response_DataReaderView & operator = (const Sample_Fibonacci_SendGoal_Response_DataReaderView &);
            };
            class Fibonacci_Result_TypeSupportInterface;

            typedef Fibonacci_Result_TypeSupportInterface * Fibonacci_Result_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Result_TypeSupportInterface> Fibonacci_Result_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Result_TypeSupportInterface> Fibonacci_Result_TypeSupportInterface_out;


            class Fibonacci_Result_DataWriter;

            typedef Fibonacci_Result_DataWriter * Fibonacci_Result_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Result_DataWriter> Fibonacci_Result_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Result_DataWriter> Fibonacci_Result_DataWriter_out;


            class Fibonacci_Result_DataReader;

            typedef Fibonacci_Result_DataReader * Fibonacci_Result_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Result_DataReader> Fibonacci_Result_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Result_DataReader> Fibonacci_Result_DataReader_out;


            class Fibonacci_Result_DataReaderView;

            typedef Fibonacci_Result_DataReaderView * Fibonacci_Result_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Result_DataReaderView> Fibonacci_Result_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Result_DataReaderView> Fibonacci_Result_DataReaderView_out;

            struct Fibonacci_Result_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Fibonacci_Result_, struct Fibonacci_Result_Seq_uniq_> Fibonacci_Result_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_Result_Seq> Fibonacci_Result_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_Result_Seq> Fibonacci_Result_Seq_out;

            class  Fibonacci_Result_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_Result_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_Result_TypeSupportInterface_var _var_type;

                static Fibonacci_Result_TypeSupportInterface_ptr _duplicate (Fibonacci_Result_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Result_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Result_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_Result_TypeSupportInterface () {};
                ~Fibonacci_Result_TypeSupportInterface () {};
            private:
                Fibonacci_Result_TypeSupportInterface (const Fibonacci_Result_TypeSupportInterface &);
                Fibonacci_Result_TypeSupportInterface & operator = (const Fibonacci_Result_TypeSupportInterface &);
            };

            class  Fibonacci_Result_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_Result_DataWriter_ptr _ptr_type;
                typedef Fibonacci_Result_DataWriter_var _var_type;

                static Fibonacci_Result_DataWriter_ptr _duplicate (Fibonacci_Result_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Result_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Result_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_Result_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_Result_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_Result_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_Result_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Result_& instance_data) = 0;

            protected:
                Fibonacci_Result_DataWriter () {};
                ~Fibonacci_Result_DataWriter () {};
            private:
                Fibonacci_Result_DataWriter (const Fibonacci_Result_DataWriter &);
                Fibonacci_Result_DataWriter & operator = (const Fibonacci_Result_DataWriter &);
            };

            class  Fibonacci_Result_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_Result_DataReader_ptr _ptr_type;
                typedef Fibonacci_Result_DataReader_var _var_type;

                static Fibonacci_Result_DataReader_ptr _duplicate (Fibonacci_Result_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Result_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Result_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Result_& instance) = 0;

            protected:
                Fibonacci_Result_DataReader () {};
                ~Fibonacci_Result_DataReader () {};
            private:
                Fibonacci_Result_DataReader (const Fibonacci_Result_DataReader &);
                Fibonacci_Result_DataReader & operator = (const Fibonacci_Result_DataReader &);
            };

            class  Fibonacci_Result_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_Result_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_Result_DataReaderView_var _var_type;

                static Fibonacci_Result_DataReaderView_ptr _duplicate (Fibonacci_Result_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Result_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Result_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Result_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_Result_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_Result_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Result_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Result_& instance) = 0;

            protected:
                Fibonacci_Result_DataReaderView () {};
                ~Fibonacci_Result_DataReaderView () {};
            private:
                Fibonacci_Result_DataReaderView (const Fibonacci_Result_DataReaderView &);
                Fibonacci_Result_DataReaderView & operator = (const Fibonacci_Result_DataReaderView &);
            };
            class Fibonacci_GetResult_Request_TypeSupportInterface;

            typedef Fibonacci_GetResult_Request_TypeSupportInterface * Fibonacci_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Request_TypeSupportInterface> Fibonacci_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Request_TypeSupportInterface> Fibonacci_GetResult_Request_TypeSupportInterface_out;


            class Fibonacci_GetResult_Request_DataWriter;

            typedef Fibonacci_GetResult_Request_DataWriter * Fibonacci_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Request_DataWriter> Fibonacci_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Request_DataWriter> Fibonacci_GetResult_Request_DataWriter_out;


            class Fibonacci_GetResult_Request_DataReader;

            typedef Fibonacci_GetResult_Request_DataReader * Fibonacci_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Request_DataReader> Fibonacci_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Request_DataReader> Fibonacci_GetResult_Request_DataReader_out;


            class Fibonacci_GetResult_Request_DataReaderView;

            typedef Fibonacci_GetResult_Request_DataReaderView * Fibonacci_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Request_DataReaderView> Fibonacci_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Request_DataReaderView> Fibonacci_GetResult_Request_DataReaderView_out;

            struct Fibonacci_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Fibonacci_GetResult_Request_, struct Fibonacci_GetResult_Request_Seq_uniq_> Fibonacci_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_GetResult_Request_Seq> Fibonacci_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_GetResult_Request_Seq> Fibonacci_GetResult_Request_Seq_out;

            class  Fibonacci_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_GetResult_Request_TypeSupportInterface_var _var_type;

                static Fibonacci_GetResult_Request_TypeSupportInterface_ptr _duplicate (Fibonacci_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_GetResult_Request_TypeSupportInterface () {};
                ~Fibonacci_GetResult_Request_TypeSupportInterface () {};
            private:
                Fibonacci_GetResult_Request_TypeSupportInterface (const Fibonacci_GetResult_Request_TypeSupportInterface &);
                Fibonacci_GetResult_Request_TypeSupportInterface & operator = (const Fibonacci_GetResult_Request_TypeSupportInterface &);
            };

            class  Fibonacci_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef Fibonacci_GetResult_Request_DataWriter_var _var_type;

                static Fibonacci_GetResult_Request_DataWriter_ptr _duplicate (Fibonacci_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_GetResult_Request_& instance_data) = 0;

            protected:
                Fibonacci_GetResult_Request_DataWriter () {};
                ~Fibonacci_GetResult_Request_DataWriter () {};
            private:
                Fibonacci_GetResult_Request_DataWriter (const Fibonacci_GetResult_Request_DataWriter &);
                Fibonacci_GetResult_Request_DataWriter & operator = (const Fibonacci_GetResult_Request_DataWriter &);
            };

            class  Fibonacci_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_GetResult_Request_DataReader_ptr _ptr_type;
                typedef Fibonacci_GetResult_Request_DataReader_var _var_type;

                static Fibonacci_GetResult_Request_DataReader_ptr _duplicate (Fibonacci_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_GetResult_Request_& instance) = 0;

            protected:
                Fibonacci_GetResult_Request_DataReader () {};
                ~Fibonacci_GetResult_Request_DataReader () {};
            private:
                Fibonacci_GetResult_Request_DataReader (const Fibonacci_GetResult_Request_DataReader &);
                Fibonacci_GetResult_Request_DataReader & operator = (const Fibonacci_GetResult_Request_DataReader &);
            };

            class  Fibonacci_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_GetResult_Request_DataReaderView_var _var_type;

                static Fibonacci_GetResult_Request_DataReaderView_ptr _duplicate (Fibonacci_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_GetResult_Request_& instance) = 0;

            protected:
                Fibonacci_GetResult_Request_DataReaderView () {};
                ~Fibonacci_GetResult_Request_DataReaderView () {};
            private:
                Fibonacci_GetResult_Request_DataReaderView (const Fibonacci_GetResult_Request_DataReaderView &);
                Fibonacci_GetResult_Request_DataReaderView & operator = (const Fibonacci_GetResult_Request_DataReaderView &);
            };
            class Fibonacci_GetResult_Response_TypeSupportInterface;

            typedef Fibonacci_GetResult_Response_TypeSupportInterface * Fibonacci_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Response_TypeSupportInterface> Fibonacci_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Response_TypeSupportInterface> Fibonacci_GetResult_Response_TypeSupportInterface_out;


            class Fibonacci_GetResult_Response_DataWriter;

            typedef Fibonacci_GetResult_Response_DataWriter * Fibonacci_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Response_DataWriter> Fibonacci_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Response_DataWriter> Fibonacci_GetResult_Response_DataWriter_out;


            class Fibonacci_GetResult_Response_DataReader;

            typedef Fibonacci_GetResult_Response_DataReader * Fibonacci_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Response_DataReader> Fibonacci_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Response_DataReader> Fibonacci_GetResult_Response_DataReader_out;


            class Fibonacci_GetResult_Response_DataReaderView;

            typedef Fibonacci_GetResult_Response_DataReaderView * Fibonacci_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_GetResult_Response_DataReaderView> Fibonacci_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_GetResult_Response_DataReaderView> Fibonacci_GetResult_Response_DataReaderView_out;

            struct Fibonacci_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Fibonacci_GetResult_Response_, struct Fibonacci_GetResult_Response_Seq_uniq_> Fibonacci_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_GetResult_Response_Seq> Fibonacci_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_GetResult_Response_Seq> Fibonacci_GetResult_Response_Seq_out;

            class  Fibonacci_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_GetResult_Response_TypeSupportInterface_var _var_type;

                static Fibonacci_GetResult_Response_TypeSupportInterface_ptr _duplicate (Fibonacci_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_GetResult_Response_TypeSupportInterface () {};
                ~Fibonacci_GetResult_Response_TypeSupportInterface () {};
            private:
                Fibonacci_GetResult_Response_TypeSupportInterface (const Fibonacci_GetResult_Response_TypeSupportInterface &);
                Fibonacci_GetResult_Response_TypeSupportInterface & operator = (const Fibonacci_GetResult_Response_TypeSupportInterface &);
            };

            class  Fibonacci_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef Fibonacci_GetResult_Response_DataWriter_var _var_type;

                static Fibonacci_GetResult_Response_DataWriter_ptr _duplicate (Fibonacci_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_GetResult_Response_& instance_data) = 0;

            protected:
                Fibonacci_GetResult_Response_DataWriter () {};
                ~Fibonacci_GetResult_Response_DataWriter () {};
            private:
                Fibonacci_GetResult_Response_DataWriter (const Fibonacci_GetResult_Response_DataWriter &);
                Fibonacci_GetResult_Response_DataWriter & operator = (const Fibonacci_GetResult_Response_DataWriter &);
            };

            class  Fibonacci_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_GetResult_Response_DataReader_ptr _ptr_type;
                typedef Fibonacci_GetResult_Response_DataReader_var _var_type;

                static Fibonacci_GetResult_Response_DataReader_ptr _duplicate (Fibonacci_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_GetResult_Response_& instance) = 0;

            protected:
                Fibonacci_GetResult_Response_DataReader () {};
                ~Fibonacci_GetResult_Response_DataReader () {};
            private:
                Fibonacci_GetResult_Response_DataReader (const Fibonacci_GetResult_Response_DataReader &);
                Fibonacci_GetResult_Response_DataReader & operator = (const Fibonacci_GetResult_Response_DataReader &);
            };

            class  Fibonacci_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_GetResult_Response_DataReaderView_var _var_type;

                static Fibonacci_GetResult_Response_DataReaderView_ptr _duplicate (Fibonacci_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_GetResult_Response_& instance) = 0;

            protected:
                Fibonacci_GetResult_Response_DataReaderView () {};
                ~Fibonacci_GetResult_Response_DataReaderView () {};
            private:
                Fibonacci_GetResult_Response_DataReaderView (const Fibonacci_GetResult_Response_DataReaderView &);
                Fibonacci_GetResult_Response_DataReaderView & operator = (const Fibonacci_GetResult_Response_DataReaderView &);
            };
            class Sample_Fibonacci_GetResult_Request_TypeSupportInterface;

            typedef Sample_Fibonacci_GetResult_Request_TypeSupportInterface * Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Request_TypeSupportInterface> Sample_Fibonacci_GetResult_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Request_TypeSupportInterface> Sample_Fibonacci_GetResult_Request_TypeSupportInterface_out;


            class Sample_Fibonacci_GetResult_Request_DataWriter;

            typedef Sample_Fibonacci_GetResult_Request_DataWriter * Sample_Fibonacci_GetResult_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Request_DataWriter> Sample_Fibonacci_GetResult_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Request_DataWriter> Sample_Fibonacci_GetResult_Request_DataWriter_out;


            class Sample_Fibonacci_GetResult_Request_DataReader;

            typedef Sample_Fibonacci_GetResult_Request_DataReader * Sample_Fibonacci_GetResult_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Request_DataReader> Sample_Fibonacci_GetResult_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Request_DataReader> Sample_Fibonacci_GetResult_Request_DataReader_out;


            class Sample_Fibonacci_GetResult_Request_DataReaderView;

            typedef Sample_Fibonacci_GetResult_Request_DataReaderView * Sample_Fibonacci_GetResult_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Request_DataReaderView> Sample_Fibonacci_GetResult_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Request_DataReaderView> Sample_Fibonacci_GetResult_Request_DataReaderView_out;

            struct Sample_Fibonacci_GetResult_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Fibonacci_GetResult_Request_, struct Sample_Fibonacci_GetResult_Request_Seq_uniq_> Sample_Fibonacci_GetResult_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Fibonacci_GetResult_Request_Seq> Sample_Fibonacci_GetResult_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Fibonacci_GetResult_Request_Seq> Sample_Fibonacci_GetResult_Request_Seq_out;

            class  Sample_Fibonacci_GetResult_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Request_TypeSupportInterface_var _var_type;

                static Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr _duplicate (Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Fibonacci_GetResult_Request_TypeSupportInterface () {};
                ~Sample_Fibonacci_GetResult_Request_TypeSupportInterface () {};
            private:
                Sample_Fibonacci_GetResult_Request_TypeSupportInterface (const Sample_Fibonacci_GetResult_Request_TypeSupportInterface &);
                Sample_Fibonacci_GetResult_Request_TypeSupportInterface & operator = (const Sample_Fibonacci_GetResult_Request_TypeSupportInterface &);
            };

            class  Sample_Fibonacci_GetResult_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Request_DataWriter_var _var_type;

                static Sample_Fibonacci_GetResult_Request_DataWriter_ptr _duplicate (Sample_Fibonacci_GetResult_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Fibonacci_GetResult_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Fibonacci_GetResult_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Fibonacci_GetResult_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_GetResult_Request_& instance_data) = 0;

            protected:
                Sample_Fibonacci_GetResult_Request_DataWriter () {};
                ~Sample_Fibonacci_GetResult_Request_DataWriter () {};
            private:
                Sample_Fibonacci_GetResult_Request_DataWriter (const Sample_Fibonacci_GetResult_Request_DataWriter &);
                Sample_Fibonacci_GetResult_Request_DataWriter & operator = (const Sample_Fibonacci_GetResult_Request_DataWriter &);
            };

            class  Sample_Fibonacci_GetResult_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Request_DataReader_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Request_DataReader_var _var_type;

                static Sample_Fibonacci_GetResult_Request_DataReader_ptr _duplicate (Sample_Fibonacci_GetResult_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_GetResult_Request_& instance) = 0;

            protected:
                Sample_Fibonacci_GetResult_Request_DataReader () {};
                ~Sample_Fibonacci_GetResult_Request_DataReader () {};
            private:
                Sample_Fibonacci_GetResult_Request_DataReader (const Sample_Fibonacci_GetResult_Request_DataReader &);
                Sample_Fibonacci_GetResult_Request_DataReader & operator = (const Sample_Fibonacci_GetResult_Request_DataReader &);
            };

            class  Sample_Fibonacci_GetResult_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Request_DataReaderView_var _var_type;

                static Sample_Fibonacci_GetResult_Request_DataReaderView_ptr _duplicate (Sample_Fibonacci_GetResult_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_GetResult_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_GetResult_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_GetResult_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_GetResult_Request_& instance) = 0;

            protected:
                Sample_Fibonacci_GetResult_Request_DataReaderView () {};
                ~Sample_Fibonacci_GetResult_Request_DataReaderView () {};
            private:
                Sample_Fibonacci_GetResult_Request_DataReaderView (const Sample_Fibonacci_GetResult_Request_DataReaderView &);
                Sample_Fibonacci_GetResult_Request_DataReaderView & operator = (const Sample_Fibonacci_GetResult_Request_DataReaderView &);
            };
            class Sample_Fibonacci_GetResult_Response_TypeSupportInterface;

            typedef Sample_Fibonacci_GetResult_Response_TypeSupportInterface * Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Response_TypeSupportInterface> Sample_Fibonacci_GetResult_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Response_TypeSupportInterface> Sample_Fibonacci_GetResult_Response_TypeSupportInterface_out;


            class Sample_Fibonacci_GetResult_Response_DataWriter;

            typedef Sample_Fibonacci_GetResult_Response_DataWriter * Sample_Fibonacci_GetResult_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Response_DataWriter> Sample_Fibonacci_GetResult_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Response_DataWriter> Sample_Fibonacci_GetResult_Response_DataWriter_out;


            class Sample_Fibonacci_GetResult_Response_DataReader;

            typedef Sample_Fibonacci_GetResult_Response_DataReader * Sample_Fibonacci_GetResult_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Response_DataReader> Sample_Fibonacci_GetResult_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Response_DataReader> Sample_Fibonacci_GetResult_Response_DataReader_out;


            class Sample_Fibonacci_GetResult_Response_DataReaderView;

            typedef Sample_Fibonacci_GetResult_Response_DataReaderView * Sample_Fibonacci_GetResult_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Fibonacci_GetResult_Response_DataReaderView> Sample_Fibonacci_GetResult_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Fibonacci_GetResult_Response_DataReaderView> Sample_Fibonacci_GetResult_Response_DataReaderView_out;

            struct Sample_Fibonacci_GetResult_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Fibonacci_GetResult_Response_, struct Sample_Fibonacci_GetResult_Response_Seq_uniq_> Sample_Fibonacci_GetResult_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Fibonacci_GetResult_Response_Seq> Sample_Fibonacci_GetResult_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Fibonacci_GetResult_Response_Seq> Sample_Fibonacci_GetResult_Response_Seq_out;

            class  Sample_Fibonacci_GetResult_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Response_TypeSupportInterface_var _var_type;

                static Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr _duplicate (Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Fibonacci_GetResult_Response_TypeSupportInterface () {};
                ~Sample_Fibonacci_GetResult_Response_TypeSupportInterface () {};
            private:
                Sample_Fibonacci_GetResult_Response_TypeSupportInterface (const Sample_Fibonacci_GetResult_Response_TypeSupportInterface &);
                Sample_Fibonacci_GetResult_Response_TypeSupportInterface & operator = (const Sample_Fibonacci_GetResult_Response_TypeSupportInterface &);
            };

            class  Sample_Fibonacci_GetResult_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Response_DataWriter_var _var_type;

                static Sample_Fibonacci_GetResult_Response_DataWriter_ptr _duplicate (Sample_Fibonacci_GetResult_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Fibonacci_GetResult_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Fibonacci_GetResult_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Fibonacci_GetResult_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_GetResult_Response_& instance_data) = 0;

            protected:
                Sample_Fibonacci_GetResult_Response_DataWriter () {};
                ~Sample_Fibonacci_GetResult_Response_DataWriter () {};
            private:
                Sample_Fibonacci_GetResult_Response_DataWriter (const Sample_Fibonacci_GetResult_Response_DataWriter &);
                Sample_Fibonacci_GetResult_Response_DataWriter & operator = (const Sample_Fibonacci_GetResult_Response_DataWriter &);
            };

            class  Sample_Fibonacci_GetResult_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Response_DataReader_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Response_DataReader_var _var_type;

                static Sample_Fibonacci_GetResult_Response_DataReader_ptr _duplicate (Sample_Fibonacci_GetResult_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_GetResult_Response_& instance) = 0;

            protected:
                Sample_Fibonacci_GetResult_Response_DataReader () {};
                ~Sample_Fibonacci_GetResult_Response_DataReader () {};
            private:
                Sample_Fibonacci_GetResult_Response_DataReader (const Sample_Fibonacci_GetResult_Response_DataReader &);
                Sample_Fibonacci_GetResult_Response_DataReader & operator = (const Sample_Fibonacci_GetResult_Response_DataReader &);
            };

            class  Sample_Fibonacci_GetResult_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Fibonacci_GetResult_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Fibonacci_GetResult_Response_DataReaderView_var _var_type;

                static Sample_Fibonacci_GetResult_Response_DataReaderView_ptr _duplicate (Sample_Fibonacci_GetResult_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Fibonacci_GetResult_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Fibonacci_GetResult_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Fibonacci_GetResult_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Fibonacci_GetResult_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Fibonacci_GetResult_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Fibonacci_GetResult_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Fibonacci_GetResult_Response_& instance) = 0;

            protected:
                Sample_Fibonacci_GetResult_Response_DataReaderView () {};
                ~Sample_Fibonacci_GetResult_Response_DataReaderView () {};
            private:
                Sample_Fibonacci_GetResult_Response_DataReaderView (const Sample_Fibonacci_GetResult_Response_DataReaderView &);
                Sample_Fibonacci_GetResult_Response_DataReaderView & operator = (const Sample_Fibonacci_GetResult_Response_DataReaderView &);
            };
            class Fibonacci_Feedback_TypeSupportInterface;

            typedef Fibonacci_Feedback_TypeSupportInterface * Fibonacci_Feedback_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Feedback_TypeSupportInterface> Fibonacci_Feedback_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Feedback_TypeSupportInterface> Fibonacci_Feedback_TypeSupportInterface_out;


            class Fibonacci_Feedback_DataWriter;

            typedef Fibonacci_Feedback_DataWriter * Fibonacci_Feedback_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Feedback_DataWriter> Fibonacci_Feedback_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Feedback_DataWriter> Fibonacci_Feedback_DataWriter_out;


            class Fibonacci_Feedback_DataReader;

            typedef Fibonacci_Feedback_DataReader * Fibonacci_Feedback_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Feedback_DataReader> Fibonacci_Feedback_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Feedback_DataReader> Fibonacci_Feedback_DataReader_out;


            class Fibonacci_Feedback_DataReaderView;

            typedef Fibonacci_Feedback_DataReaderView * Fibonacci_Feedback_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_Feedback_DataReaderView> Fibonacci_Feedback_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_Feedback_DataReaderView> Fibonacci_Feedback_DataReaderView_out;

            struct Fibonacci_Feedback_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Fibonacci_Feedback_, struct Fibonacci_Feedback_Seq_uniq_> Fibonacci_Feedback_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_Feedback_Seq> Fibonacci_Feedback_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_Feedback_Seq> Fibonacci_Feedback_Seq_out;

            class  Fibonacci_Feedback_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_Feedback_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_Feedback_TypeSupportInterface_var _var_type;

                static Fibonacci_Feedback_TypeSupportInterface_ptr _duplicate (Fibonacci_Feedback_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Feedback_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Feedback_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_Feedback_TypeSupportInterface () {};
                ~Fibonacci_Feedback_TypeSupportInterface () {};
            private:
                Fibonacci_Feedback_TypeSupportInterface (const Fibonacci_Feedback_TypeSupportInterface &);
                Fibonacci_Feedback_TypeSupportInterface & operator = (const Fibonacci_Feedback_TypeSupportInterface &);
            };

            class  Fibonacci_Feedback_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_Feedback_DataWriter_ptr _ptr_type;
                typedef Fibonacci_Feedback_DataWriter_var _var_type;

                static Fibonacci_Feedback_DataWriter_ptr _duplicate (Fibonacci_Feedback_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Feedback_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Feedback_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_Feedback_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_Feedback_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_Feedback_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Feedback_& instance_data) = 0;

            protected:
                Fibonacci_Feedback_DataWriter () {};
                ~Fibonacci_Feedback_DataWriter () {};
            private:
                Fibonacci_Feedback_DataWriter (const Fibonacci_Feedback_DataWriter &);
                Fibonacci_Feedback_DataWriter & operator = (const Fibonacci_Feedback_DataWriter &);
            };

            class  Fibonacci_Feedback_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_Feedback_DataReader_ptr _ptr_type;
                typedef Fibonacci_Feedback_DataReader_var _var_type;

                static Fibonacci_Feedback_DataReader_ptr _duplicate (Fibonacci_Feedback_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Feedback_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Feedback_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Feedback_& instance) = 0;

            protected:
                Fibonacci_Feedback_DataReader () {};
                ~Fibonacci_Feedback_DataReader () {};
            private:
                Fibonacci_Feedback_DataReader (const Fibonacci_Feedback_DataReader &);
                Fibonacci_Feedback_DataReader & operator = (const Fibonacci_Feedback_DataReader &);
            };

            class  Fibonacci_Feedback_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_Feedback_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_Feedback_DataReaderView_var _var_type;

                static Fibonacci_Feedback_DataReaderView_ptr _duplicate (Fibonacci_Feedback_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_Feedback_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_Feedback_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_Feedback_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_Feedback_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_Feedback_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_Feedback_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_Feedback_& instance) = 0;

            protected:
                Fibonacci_Feedback_DataReaderView () {};
                ~Fibonacci_Feedback_DataReaderView () {};
            private:
                Fibonacci_Feedback_DataReaderView (const Fibonacci_Feedback_DataReaderView &);
                Fibonacci_Feedback_DataReaderView & operator = (const Fibonacci_Feedback_DataReaderView &);
            };
            class Fibonacci_FeedbackMessage_TypeSupportInterface;

            typedef Fibonacci_FeedbackMessage_TypeSupportInterface * Fibonacci_FeedbackMessage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_FeedbackMessage_TypeSupportInterface> Fibonacci_FeedbackMessage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Fibonacci_FeedbackMessage_TypeSupportInterface> Fibonacci_FeedbackMessage_TypeSupportInterface_out;


            class Fibonacci_FeedbackMessage_DataWriter;

            typedef Fibonacci_FeedbackMessage_DataWriter * Fibonacci_FeedbackMessage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_FeedbackMessage_DataWriter> Fibonacci_FeedbackMessage_DataWriter_var;
            typedef DDS_DCPSInterface_out < Fibonacci_FeedbackMessage_DataWriter> Fibonacci_FeedbackMessage_DataWriter_out;


            class Fibonacci_FeedbackMessage_DataReader;

            typedef Fibonacci_FeedbackMessage_DataReader * Fibonacci_FeedbackMessage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_FeedbackMessage_DataReader> Fibonacci_FeedbackMessage_DataReader_var;
            typedef DDS_DCPSInterface_out < Fibonacci_FeedbackMessage_DataReader> Fibonacci_FeedbackMessage_DataReader_out;


            class Fibonacci_FeedbackMessage_DataReaderView;

            typedef Fibonacci_FeedbackMessage_DataReaderView * Fibonacci_FeedbackMessage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Fibonacci_FeedbackMessage_DataReaderView> Fibonacci_FeedbackMessage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Fibonacci_FeedbackMessage_DataReaderView> Fibonacci_FeedbackMessage_DataReaderView_out;

            struct Fibonacci_FeedbackMessage_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Fibonacci_FeedbackMessage_, struct Fibonacci_FeedbackMessage_Seq_uniq_> Fibonacci_FeedbackMessage_Seq;
            typedef DDS_DCPSSequence_var < Fibonacci_FeedbackMessage_Seq> Fibonacci_FeedbackMessage_Seq_var;
            typedef DDS_DCPSSequence_out < Fibonacci_FeedbackMessage_Seq> Fibonacci_FeedbackMessage_Seq_out;

            class  Fibonacci_FeedbackMessage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Fibonacci_FeedbackMessage_TypeSupportInterface_ptr _ptr_type;
                typedef Fibonacci_FeedbackMessage_TypeSupportInterface_var _var_type;

                static Fibonacci_FeedbackMessage_TypeSupportInterface_ptr _duplicate (Fibonacci_FeedbackMessage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_FeedbackMessage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_FeedbackMessage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Fibonacci_FeedbackMessage_TypeSupportInterface () {};
                ~Fibonacci_FeedbackMessage_TypeSupportInterface () {};
            private:
                Fibonacci_FeedbackMessage_TypeSupportInterface (const Fibonacci_FeedbackMessage_TypeSupportInterface &);
                Fibonacci_FeedbackMessage_TypeSupportInterface & operator = (const Fibonacci_FeedbackMessage_TypeSupportInterface &);
            };

            class  Fibonacci_FeedbackMessage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Fibonacci_FeedbackMessage_DataWriter_ptr _ptr_type;
                typedef Fibonacci_FeedbackMessage_DataWriter_var _var_type;

                static Fibonacci_FeedbackMessage_DataWriter_ptr _duplicate (Fibonacci_FeedbackMessage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_FeedbackMessage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_FeedbackMessage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Fibonacci_FeedbackMessage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Fibonacci_FeedbackMessage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Fibonacci_FeedbackMessage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Fibonacci_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_FeedbackMessage_& instance_data) = 0;

            protected:
                Fibonacci_FeedbackMessage_DataWriter () {};
                ~Fibonacci_FeedbackMessage_DataWriter () {};
            private:
                Fibonacci_FeedbackMessage_DataWriter (const Fibonacci_FeedbackMessage_DataWriter &);
                Fibonacci_FeedbackMessage_DataWriter & operator = (const Fibonacci_FeedbackMessage_DataWriter &);
            };

            class  Fibonacci_FeedbackMessage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Fibonacci_FeedbackMessage_DataReader_ptr _ptr_type;
                typedef Fibonacci_FeedbackMessage_DataReader_var _var_type;

                static Fibonacci_FeedbackMessage_DataReader_ptr _duplicate (Fibonacci_FeedbackMessage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_FeedbackMessage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_FeedbackMessage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_FeedbackMessage_& instance) = 0;

            protected:
                Fibonacci_FeedbackMessage_DataReader () {};
                ~Fibonacci_FeedbackMessage_DataReader () {};
            private:
                Fibonacci_FeedbackMessage_DataReader (const Fibonacci_FeedbackMessage_DataReader &);
                Fibonacci_FeedbackMessage_DataReader & operator = (const Fibonacci_FeedbackMessage_DataReader &);
            };

            class  Fibonacci_FeedbackMessage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Fibonacci_FeedbackMessage_DataReaderView_ptr _ptr_type;
                typedef Fibonacci_FeedbackMessage_DataReaderView_var _var_type;

                static Fibonacci_FeedbackMessage_DataReaderView_ptr _duplicate (Fibonacci_FeedbackMessage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Fibonacci_FeedbackMessage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Fibonacci_FeedbackMessage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Fibonacci_FeedbackMessage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Fibonacci_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Fibonacci_FeedbackMessage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Fibonacci_FeedbackMessage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Fibonacci_FeedbackMessage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Fibonacci_FeedbackMessage_& instance) = 0;

            protected:
                Fibonacci_FeedbackMessage_DataReaderView () {};
                ~Fibonacci_FeedbackMessage_DataReaderView () {};
            private:
                Fibonacci_FeedbackMessage_DataReaderView (const Fibonacci_FeedbackMessage_DataReaderView &);
                Fibonacci_FeedbackMessage_DataReaderView & operator = (const Fibonacci_FeedbackMessage_DataReaderView &);
            };
        }

    }

}

#endif
