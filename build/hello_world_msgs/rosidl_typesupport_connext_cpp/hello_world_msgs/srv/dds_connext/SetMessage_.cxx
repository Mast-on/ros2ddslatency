

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "SetMessage_.h"

#include <new>

namespace hello_world_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetMessage_Request_TYPENAME = "hello_world_msgs::srv::dds_::SetMessage_Request_";

            DDS_TypeCode* SetMessage_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetMessage_Request__g_tc_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetMessage_Request__g_tc_members[1]=
                {

                    {
                        (char *)"message_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode SetMessage_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"hello_world_msgs::srv::dds_::SetMessage_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMessage_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMessage_Request_*/

                if (is_initialized) {
                    return &SetMessage_Request__g_tc;
                }

                SetMessage_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SetMessage_Request__g_tc_message__string;

                is_initialized = RTI_TRUE;

                return &SetMessage_Request__g_tc;
            }

            RTIBool SetMessage_Request__initialize(
                SetMessage_Request_* sample) {
                return hello_world_msgs::srv::dds_::SetMessage_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMessage_Request__initialize_ex(
                SetMessage_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return hello_world_msgs::srv::dds_::SetMessage_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMessage_Request__initialize_w_params(
                SetMessage_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->message_= DDS_String_alloc ((0));
                    if (sample->message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->message_!= NULL) { 
                        sample->message_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void SetMessage_Request__finalize(
                SetMessage_Request_* sample)
            {

                hello_world_msgs::srv::dds_::SetMessage_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetMessage_Request__finalize_ex(
                SetMessage_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                hello_world_msgs::srv::dds_::SetMessage_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMessage_Request__finalize_w_params(
                SetMessage_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->message_ != NULL) {
                    DDS_String_free(sample->message_);
                    sample->message_=NULL;

                }
            }

            void SetMessage_Request__finalize_optional_members(
                SetMessage_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool SetMessage_Request__copy(
                SetMessage_Request_* dst,
                const SetMessage_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->message_, src->message_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'SetMessage_Request_' sequence class.
            */
            #define T SetMessage_Request_
            #define TSeq SetMessage_Request_Seq

            #define T_initialize_w_params hello_world_msgs::srv::dds_::SetMessage_Request__initialize_w_params

            #define T_finalize_w_params   hello_world_msgs::srv::dds_::SetMessage_Request__finalize_w_params
            #define T_copy       hello_world_msgs::srv::dds_::SetMessage_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace hello_world_msgs  */
namespace hello_world_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetMessage_Response_TYPENAME = "hello_world_msgs::srv::dds_::SetMessage_Response_";

            DDS_TypeCode* SetMessage_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetMessage_Response__g_tc_members[1]=
                {

                    {
                        (char *)"result_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode SetMessage_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"hello_world_msgs::srv::dds_::SetMessage_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMessage_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMessage_Response_*/

                if (is_initialized) {
                    return &SetMessage_Response__g_tc;
                }

                SetMessage_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetMessage_Response__g_tc;
            }

            RTIBool SetMessage_Response__initialize(
                SetMessage_Response_* sample) {
                return hello_world_msgs::srv::dds_::SetMessage_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMessage_Response__initialize_ex(
                SetMessage_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return hello_world_msgs::srv::dds_::SetMessage_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMessage_Response__initialize_w_params(
                SetMessage_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->result_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SetMessage_Response__finalize(
                SetMessage_Response_* sample)
            {

                hello_world_msgs::srv::dds_::SetMessage_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetMessage_Response__finalize_ex(
                SetMessage_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                hello_world_msgs::srv::dds_::SetMessage_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMessage_Response__finalize_w_params(
                SetMessage_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetMessage_Response__finalize_optional_members(
                SetMessage_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool SetMessage_Response__copy(
                SetMessage_Response_* dst,
                const SetMessage_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->result_, &src->result_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'SetMessage_Response_' sequence class.
            */
            #define T SetMessage_Response_
            #define TSeq SetMessage_Response_Seq

            #define T_initialize_w_params hello_world_msgs::srv::dds_::SetMessage_Response__initialize_w_params

            #define T_finalize_w_params   hello_world_msgs::srv::dds_::SetMessage_Response__finalize_w_params
            #define T_copy       hello_world_msgs::srv::dds_::SetMessage_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace hello_world_msgs  */

