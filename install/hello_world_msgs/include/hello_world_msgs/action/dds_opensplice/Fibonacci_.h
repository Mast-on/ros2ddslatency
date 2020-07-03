#ifndef _H_696897253C3E1126468373BB8785F4BC_Fibonacci__H_
#define _H_696897253C3E1126468373BB8785F4BC_Fibonacci__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"


namespace hello_world_msgs
{
    namespace action
    {
        namespace dds_
        {
            struct  Fibonacci_Goal_
            {
                ::DDS::Long order_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_Goal_> Fibonacci_Goal__var;
            typedef Fibonacci_Goal_& Fibonacci_Goal__out;

            struct  Fibonacci_SendGoal_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::hello_world_msgs::action::dds_::Fibonacci_Goal_ goal_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_SendGoal_Request_> Fibonacci_SendGoal_Request__var;
            typedef Fibonacci_SendGoal_Request_& Fibonacci_SendGoal_Request__out;

            struct  Fibonacci_SendGoal_Response_
            {
                ::DDS::Boolean accepted_;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_SendGoal_Response_> Fibonacci_SendGoal_Response__var;
            typedef Fibonacci_SendGoal_Response_& Fibonacci_SendGoal_Response__out;

            struct  Sample_Fibonacci_SendGoal_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Fibonacci_SendGoal_Request_> Sample_Fibonacci_SendGoal_Request__var;
            typedef Sample_Fibonacci_SendGoal_Request_& Sample_Fibonacci_SendGoal_Request__out;

            struct  Sample_Fibonacci_SendGoal_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Fibonacci_SendGoal_Response_> Sample_Fibonacci_SendGoal_Response__var;
            typedef Sample_Fibonacci_SendGoal_Response_& Sample_Fibonacci_SendGoal_Response__out;

            struct  Fibonacci_Result_
            {
                struct _sequence__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Long, struct _sequence__seq_uniq_ > _sequence__seq;
                typedef DDS_DCPSSequence_var< _sequence__seq > _sequence__seq_var;
                typedef DDS_DCPSSequence_out< _sequence__seq > _sequence__seq_out;
                _sequence__seq sequence_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_Result_> Fibonacci_Result__var;
            typedef DDS_DCPSStruct_out < Fibonacci_Result_> Fibonacci_Result__out;

            struct  Fibonacci_GetResult_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_GetResult_Request_> Fibonacci_GetResult_Request__var;
            typedef Fibonacci_GetResult_Request_& Fibonacci_GetResult_Request__out;

            struct  Fibonacci_GetResult_Response_
            {
                ::DDS::Octet status_;
                ::hello_world_msgs::action::dds_::Fibonacci_Result_ result_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_GetResult_Response_> Fibonacci_GetResult_Response__var;
            typedef DDS_DCPSStruct_out < Fibonacci_GetResult_Response_> Fibonacci_GetResult_Response__out;

            struct  Sample_Fibonacci_GetResult_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Fibonacci_GetResult_Request_> Sample_Fibonacci_GetResult_Request__var;
            typedef Sample_Fibonacci_GetResult_Request_& Sample_Fibonacci_GetResult_Request__out;

            struct  Sample_Fibonacci_GetResult_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Fibonacci_GetResult_Response_> Sample_Fibonacci_GetResult_Response__var;
            typedef DDS_DCPSStruct_out < Sample_Fibonacci_GetResult_Response_> Sample_Fibonacci_GetResult_Response__out;

            struct  Fibonacci_Feedback_
            {
                struct _sequence__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Long, struct _sequence__seq_uniq_ > _sequence__seq;
                typedef DDS_DCPSSequence_var< _sequence__seq > _sequence__seq_var;
                typedef DDS_DCPSSequence_out< _sequence__seq > _sequence__seq_out;
                _sequence__seq sequence_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_Feedback_> Fibonacci_Feedback__var;
            typedef DDS_DCPSStruct_out < Fibonacci_Feedback_> Fibonacci_Feedback__out;

            struct  Fibonacci_FeedbackMessage_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::hello_world_msgs::action::dds_::Fibonacci_Feedback_ feedback_;
            };

            typedef DDS_DCPSStruct_var<Fibonacci_FeedbackMessage_> Fibonacci_FeedbackMessage__var;
            typedef DDS_DCPSStruct_out < Fibonacci_FeedbackMessage_> Fibonacci_FeedbackMessage__out;

        }

    }

}

#endif /* _H_696897253C3E1126468373BB8785F4BC_Fibonacci__H_ */
