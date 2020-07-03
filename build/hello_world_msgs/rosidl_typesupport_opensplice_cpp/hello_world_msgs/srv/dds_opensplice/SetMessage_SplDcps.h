#ifndef H_545E5EEEFBA73089648C33CD021B081E_SetMessage_SPLTYPES_H
#define H_545E5EEEFBA73089648C33CD021B081E_SetMessage_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetMessage_.h"


extern c_metaObject __SetMessage__hello_world_msgs__load (c_base base);

extern c_metaObject __SetMessage__hello_world_msgs_srv__load (c_base base);

extern c_metaObject __SetMessage__hello_world_msgs_srv_dds___load (c_base base);

extern const char *hello_world_msgs_srv_dds__SetMessage_Request__metaDescriptor[];
extern const int hello_world_msgs_srv_dds__SetMessage_Request__metaDescriptorArrLength;
extern const int hello_world_msgs_srv_dds__SetMessage_Request__metaDescriptorLength;
extern c_metaObject __hello_world_msgs_srv_dds__SetMessage_Request___load (c_base base);
struct _hello_world_msgs_srv_dds__SetMessage_Request_ ;
extern  v_copyin_result __hello_world_msgs_srv_dds__SetMessage_Request___copyIn(c_base base, const struct hello_world_msgs::srv::dds_::SetMessage_Request_ *from, struct _hello_world_msgs_srv_dds__SetMessage_Request_ *to);
extern  void __hello_world_msgs_srv_dds__SetMessage_Request___copyOut(const void *_from, void *_to);
struct _hello_world_msgs_srv_dds__SetMessage_Request_ {
    c_string message_;
};

extern const char *hello_world_msgs_srv_dds__SetMessage_Response__metaDescriptor[];
extern const int hello_world_msgs_srv_dds__SetMessage_Response__metaDescriptorArrLength;
extern const int hello_world_msgs_srv_dds__SetMessage_Response__metaDescriptorLength;
extern c_metaObject __hello_world_msgs_srv_dds__SetMessage_Response___load (c_base base);
struct _hello_world_msgs_srv_dds__SetMessage_Response_ ;
extern  v_copyin_result __hello_world_msgs_srv_dds__SetMessage_Response___copyIn(c_base base, const struct hello_world_msgs::srv::dds_::SetMessage_Response_ *from, struct _hello_world_msgs_srv_dds__SetMessage_Response_ *to);
extern  void __hello_world_msgs_srv_dds__SetMessage_Response___copyOut(const void *_from, void *_to);
struct _hello_world_msgs_srv_dds__SetMessage_Response_ {
    c_bool result_;
};

extern const char *hello_world_msgs_srv_dds__Sample_SetMessage_Request__metaDescriptor[];
extern const int hello_world_msgs_srv_dds__Sample_SetMessage_Request__metaDescriptorArrLength;
extern const int hello_world_msgs_srv_dds__Sample_SetMessage_Request__metaDescriptorLength;
extern c_metaObject __hello_world_msgs_srv_dds__Sample_SetMessage_Request___load (c_base base);
struct _hello_world_msgs_srv_dds__Sample_SetMessage_Request_ ;
extern  v_copyin_result __hello_world_msgs_srv_dds__Sample_SetMessage_Request___copyIn(c_base base, const struct hello_world_msgs::srv::dds_::Sample_SetMessage_Request_ *from, struct _hello_world_msgs_srv_dds__Sample_SetMessage_Request_ *to);
extern  void __hello_world_msgs_srv_dds__Sample_SetMessage_Request___copyOut(const void *_from, void *_to);
struct _hello_world_msgs_srv_dds__Sample_SetMessage_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _hello_world_msgs_srv_dds__SetMessage_Request_ request_;
};

extern const char *hello_world_msgs_srv_dds__Sample_SetMessage_Response__metaDescriptor[];
extern const int hello_world_msgs_srv_dds__Sample_SetMessage_Response__metaDescriptorArrLength;
extern const int hello_world_msgs_srv_dds__Sample_SetMessage_Response__metaDescriptorLength;
extern c_metaObject __hello_world_msgs_srv_dds__Sample_SetMessage_Response___load (c_base base);
struct _hello_world_msgs_srv_dds__Sample_SetMessage_Response_ ;
extern  v_copyin_result __hello_world_msgs_srv_dds__Sample_SetMessage_Response___copyIn(c_base base, const struct hello_world_msgs::srv::dds_::Sample_SetMessage_Response_ *from, struct _hello_world_msgs_srv_dds__Sample_SetMessage_Response_ *to);
extern  void __hello_world_msgs_srv_dds__Sample_SetMessage_Response___copyOut(const void *_from, void *_to);
struct _hello_world_msgs_srv_dds__Sample_SetMessage_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _hello_world_msgs_srv_dds__SetMessage_Response_ response_;
};

#undef OS_API
#endif
