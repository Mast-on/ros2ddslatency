#ifndef _H_545E5EEEFBA73089648C33CD021B081E_SetMessage__H_
#define _H_545E5EEEFBA73089648C33CD021B081E_SetMessage__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace hello_world_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct  SetMessage_Request_
            {
                ::DDS::String_mgr message_;
            };

            typedef DDS_DCPSStruct_var<SetMessage_Request_> SetMessage_Request__var;
            typedef DDS_DCPSStruct_out < SetMessage_Request_> SetMessage_Request__out;

            struct  SetMessage_Response_
            {
                ::DDS::Boolean result_;
            };

            typedef DDS_DCPSStruct_var<SetMessage_Response_> SetMessage_Response__var;
            typedef SetMessage_Response_& SetMessage_Response__out;

            struct  Sample_SetMessage_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::hello_world_msgs::srv::dds_::SetMessage_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetMessage_Request_> Sample_SetMessage_Request__var;
            typedef DDS_DCPSStruct_out < Sample_SetMessage_Request_> Sample_SetMessage_Request__out;

            struct  Sample_SetMessage_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::hello_world_msgs::srv::dds_::SetMessage_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetMessage_Response_> Sample_SetMessage_Response__var;
            typedef Sample_SetMessage_Response_& Sample_SetMessage_Response__out;

        }

    }

}

#endif /* _H_545E5EEEFBA73089648C33CD021B081E_SetMessage__H_ */
