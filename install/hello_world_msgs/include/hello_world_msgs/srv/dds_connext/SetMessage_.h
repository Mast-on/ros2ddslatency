

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetMessage__252079382_h
#define SetMessage__252079382_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace hello_world_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetMessage_Request_TYPENAME;

            struct SetMessage_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMessage_Request_TypeSupport;
            class SetMessage_Request_DataWriter;
            class SetMessage_Request_DataReader;
            #endif

            class SetMessage_Request_ 
            {
              public:
                typedef struct SetMessage_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMessage_Request_TypeSupport TypeSupport;
                typedef SetMessage_Request_DataWriter DataWriter;
                typedef SetMessage_Request_DataReader DataReader;
                #endif

                DDS_Char *   message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMessage_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMessage_Request_Seq, SetMessage_Request_);

            NDDSUSERDllExport
            RTIBool SetMessage_Request__initialize(
                SetMessage_Request_* self);

            NDDSUSERDllExport
            RTIBool SetMessage_Request__initialize_ex(
                SetMessage_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMessage_Request__initialize_w_params(
                SetMessage_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMessage_Request__finalize(
                SetMessage_Request_* self);

            NDDSUSERDllExport
            void SetMessage_Request__finalize_ex(
                SetMessage_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMessage_Request__finalize_w_params(
                SetMessage_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMessage_Request__finalize_optional_members(
                SetMessage_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMessage_Request__copy(
                SetMessage_Request_* dst,
                const SetMessage_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace hello_world_msgs  */
namespace hello_world_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetMessage_Response_TYPENAME;

            struct SetMessage_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMessage_Response_TypeSupport;
            class SetMessage_Response_DataWriter;
            class SetMessage_Response_DataReader;
            #endif

            class SetMessage_Response_ 
            {
              public:
                typedef struct SetMessage_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMessage_Response_TypeSupport TypeSupport;
                typedef SetMessage_Response_DataWriter DataWriter;
                typedef SetMessage_Response_DataReader DataReader;
                #endif

                DDS_Boolean   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMessage_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMessage_Response_Seq, SetMessage_Response_);

            NDDSUSERDllExport
            RTIBool SetMessage_Response__initialize(
                SetMessage_Response_* self);

            NDDSUSERDllExport
            RTIBool SetMessage_Response__initialize_ex(
                SetMessage_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMessage_Response__initialize_w_params(
                SetMessage_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMessage_Response__finalize(
                SetMessage_Response_* self);

            NDDSUSERDllExport
            void SetMessage_Response__finalize_ex(
                SetMessage_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMessage_Response__finalize_w_params(
                SetMessage_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMessage_Response__finalize_optional_members(
                SetMessage_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMessage_Response__copy(
                SetMessage_Response_* dst,
                const SetMessage_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace hello_world_msgs  */

#endif /* SetMessage_ */

