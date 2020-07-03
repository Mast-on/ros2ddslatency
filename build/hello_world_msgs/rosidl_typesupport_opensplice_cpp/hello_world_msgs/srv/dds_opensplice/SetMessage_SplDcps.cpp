#include "SetMessage_SplDcps.h"
#include "ccpp_SetMessage_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__hello_world_msgs_srv_dds__SetMessage_Request___copyIn(
    c_base base,
    const struct ::hello_world_msgs::srv::dds_::SetMessage_Request_ *from,
    struct _hello_world_msgs_srv_dds__SetMessage_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->message_){
        to->message_ = c_stringNew_s(base, from->message_);
        if(to->message_ == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'hello_world_msgs::srv::dds_::SetMessage_Request_.message_' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->message_ = c_stringNew_s(base, from->message_);
    if(to->message_ == NULL) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
    return result;
}

v_copyin_result
__hello_world_msgs_srv_dds__SetMessage_Response___copyIn(
    c_base base,
    const struct ::hello_world_msgs::srv::dds_::SetMessage_Response_ *from,
    struct _hello_world_msgs_srv_dds__SetMessage_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->result_ = (c_bool)from->result_;
    return result;
}

v_copyin_result
__hello_world_msgs_srv_dds__Sample_SetMessage_Request___copyIn(
    c_base base,
    const struct ::hello_world_msgs::srv::dds_::Sample_SetMessage_Request_ *from,
    struct _hello_world_msgs_srv_dds__Sample_SetMessage_Request_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __hello_world_msgs_srv_dds__SetMessage_Request___copyIn(c_base, const ::hello_world_msgs::srv::dds_::SetMessage_Request_ *, _hello_world_msgs_srv_dds__SetMessage_Request_ *);
        result = __hello_world_msgs_srv_dds__SetMessage_Request___copyIn(base, &from->request_, &to->request_);
    }
    return result;
}

v_copyin_result
__hello_world_msgs_srv_dds__Sample_SetMessage_Response___copyIn(
    c_base base,
    const struct ::hello_world_msgs::srv::dds_::Sample_SetMessage_Response_ *from,
    struct _hello_world_msgs_srv_dds__Sample_SetMessage_Response_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->client_guid_0_ = (c_ulonglong)from->client_guid_0_;
    to->client_guid_1_ = (c_ulonglong)from->client_guid_1_;
    to->sequence_number_ = (c_longlong)from->sequence_number_;
    if(V_COPYIN_RESULT_IS_OK(result)){
        extern v_copyin_result __hello_world_msgs_srv_dds__SetMessage_Response___copyIn(c_base, const ::hello_world_msgs::srv::dds_::SetMessage_Response_ *, _hello_world_msgs_srv_dds__SetMessage_Response_ *);
        result = __hello_world_msgs_srv_dds__SetMessage_Response___copyIn(base, &from->response_, &to->response_);
    }
    return result;
}

void
__hello_world_msgs_srv_dds__SetMessage_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _hello_world_msgs_srv_dds__SetMessage_Request_ *from = (const struct _hello_world_msgs_srv_dds__SetMessage_Request_ *)_from;
    struct ::hello_world_msgs::srv::dds_::SetMessage_Request_ *to = (struct ::hello_world_msgs::srv::dds_::SetMessage_Request_ *)_to;
    to->message_ = DDS::string_dup(from->message_ ? from->message_ : "");
}

void
__hello_world_msgs_srv_dds__SetMessage_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _hello_world_msgs_srv_dds__SetMessage_Response_ *from = (const struct _hello_world_msgs_srv_dds__SetMessage_Response_ *)_from;
    struct ::hello_world_msgs::srv::dds_::SetMessage_Response_ *to = (struct ::hello_world_msgs::srv::dds_::SetMessage_Response_ *)_to;
    to->result_ = (::DDS::Boolean)(from->result_ != 0);
}

void
__hello_world_msgs_srv_dds__Sample_SetMessage_Request___copyOut(
    const void *_from,
    void *_to)
{
    const struct _hello_world_msgs_srv_dds__Sample_SetMessage_Request_ *from = (const struct _hello_world_msgs_srv_dds__Sample_SetMessage_Request_ *)_from;
    struct ::hello_world_msgs::srv::dds_::Sample_SetMessage_Request_ *to = (struct ::hello_world_msgs::srv::dds_::Sample_SetMessage_Request_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __hello_world_msgs_srv_dds__SetMessage_Request___copyOut(const void *, void *);
        __hello_world_msgs_srv_dds__SetMessage_Request___copyOut((const void *)&from->request_, (void *)&to->request_);
    }
}

void
__hello_world_msgs_srv_dds__Sample_SetMessage_Response___copyOut(
    const void *_from,
    void *_to)
{
    const struct _hello_world_msgs_srv_dds__Sample_SetMessage_Response_ *from = (const struct _hello_world_msgs_srv_dds__Sample_SetMessage_Response_ *)_from;
    struct ::hello_world_msgs::srv::dds_::Sample_SetMessage_Response_ *to = (struct ::hello_world_msgs::srv::dds_::Sample_SetMessage_Response_ *)_to;
    to->client_guid_0_ = (::DDS::ULongLong)from->client_guid_0_;
    to->client_guid_1_ = (::DDS::ULongLong)from->client_guid_1_;
    to->sequence_number_ = (::DDS::LongLong)from->sequence_number_;
    {
        extern void __hello_world_msgs_srv_dds__SetMessage_Response___copyOut(const void *, void *);
        __hello_world_msgs_srv_dds__SetMessage_Response___copyOut((const void *)&from->response_, (void *)&to->response_);
    }
}

