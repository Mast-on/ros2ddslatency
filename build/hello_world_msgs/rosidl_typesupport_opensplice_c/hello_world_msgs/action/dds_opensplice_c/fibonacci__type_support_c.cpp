// generated from rosidl_typesupport_opensplice_c/resource/idl__dds_opensplice__type_support.c.em
// generated code does not contain a copyright notice

#include <cassert>
#include <codecvt>
#include <cstring>
#include <iostream>
#include <limits>
#include <locale>
#include <sstream>

#include <CdrTypeSupport.h>
#include <u_instanceHandle.h>

// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

#include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
#include "rosidl_typesupport_opensplice_c/identifier.h"
#include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"
#include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
#include "hello_world_msgs/action/fibonacci.h"
#include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies

// forward declare type support functions

using __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal = hello_world_msgs::action::dds_::Fibonacci_Goal_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_Goal = hello_world_msgs__action__Fibonacci_Goal;

static hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_Goal;

static const char *
register_type_hello_world_msgs__action__Fibonacci_Goal(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_Goal.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Goal(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_Goal * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_Goal *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_Goal *>(untyped_dds_message);
  // Field name: order
  {
    dds_message->order_ = ros_message->order;
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_Goal(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Goal(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Goal(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_Goal * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_Goal *>(untyped_ros_message);
  // Field name: order
  {
    ros_message->order = dds_message->order_;
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_Goal(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_Goal_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Goal(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_Goal(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Goal(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_Goal);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_Goal(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_Goal);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Goal dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Goal(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_Goal__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_Goal",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_Goal,  // register_type
  publish_hello_world_msgs__action__Fibonacci_Goal,  // publish
  take_hello_world_msgs__action__Fibonacci_Goal,  // take
  serialize_hello_world_msgs__action__Fibonacci_Goal,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_Goal,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Goal,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Goal,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_Goal__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_Goal__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_Goal)()
{
  return &Fibonacci_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
#include "rosidl_generator_c/primitives_sequence.h"  // sequence
#include "rosidl_generator_c/primitives_sequence_functions.h"  // sequence

// forward declare type support functions

using __dds_msg_type_hello_world_msgs__action__Fibonacci_Result = hello_world_msgs::action::dds_::Fibonacci_Result_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_Result = hello_world_msgs__action__Fibonacci_Result;

static hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_Result;

static const char *
register_type_hello_world_msgs__action__Fibonacci_Result(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_Result.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Result(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_Result * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_Result *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_Result * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_Result *>(untyped_dds_message);
  // Field name: sequence
  {
    size_t size = ros_message->sequence.size;
    if (size > static_cast<size_t>((std::numeric_limits<DDS::Long>::max)())) {
      return "array size exceeds maximum DDS sequence size";
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message->sequence_.length(length);
    for (DDS::ULong i = 0; i < size; ++i) {
      auto & ros_i = ros_message->sequence.data[i];
      dds_message->sequence_[i] = ros_i;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_Result(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Result dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Result(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Result(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_Result * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_Result *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_Result * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_Result *>(untyped_ros_message);
  // Field name: sequence
  {
    size_t size = dds_message->sequence_.length();
    if (ros_message->sequence.data) {
      rosidl_generator_c__int32__Sequence__fini(&ros_message->sequence);
    }
    if (!rosidl_generator_c__int32__Sequence__init(&ros_message->sequence, size)) {
      return "failed to create array for field 'sequence'";
    }
    for (DDS::ULong i = 0; i < size; i++) {
      auto & ros_i = ros_message->sequence.data[i];
      ros_i = dds_message->sequence_[i];
    }
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_Result(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_Result_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_Result_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_Result_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_Result_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Result(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_Result_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_Result_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_Result(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Result dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Result(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_Result);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_Result(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_Result);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Result dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Result(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_Result__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_Result",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_Result,  // register_type
  publish_hello_world_msgs__action__Fibonacci_Result,  // publish
  take_hello_world_msgs__action__Fibonacci_Result,  // take
  serialize_hello_world_msgs__action__Fibonacci_Result,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_Result,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Result,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Result,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_Result__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_Result__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_Result)()
{
  return &Fibonacci_Result__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"  // sequence
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // sequence

// forward declare type support functions

using __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback = hello_world_msgs::action::dds_::Fibonacci_Feedback_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_Feedback = hello_world_msgs__action__Fibonacci_Feedback;

static hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_Feedback;

static const char *
register_type_hello_world_msgs__action__Fibonacci_Feedback(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_Feedback.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Feedback(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_Feedback * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_Feedback *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback *>(untyped_dds_message);
  // Field name: sequence
  {
    size_t size = ros_message->sequence.size;
    if (size > static_cast<size_t>((std::numeric_limits<DDS::Long>::max)())) {
      return "array size exceeds maximum DDS sequence size";
    }
    DDS::Long length = static_cast<DDS::Long>(size);
    dds_message->sequence_.length(length);
    for (DDS::ULong i = 0; i < size; ++i) {
      auto & ros_i = ros_message->sequence.data[i];
      dds_message->sequence_[i] = ros_i;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_Feedback(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Feedback(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Feedback(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_Feedback * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_Feedback *>(untyped_ros_message);
  // Field name: sequence
  {
    size_t size = dds_message->sequence_.length();
    if (ros_message->sequence.data) {
      rosidl_generator_c__int32__Sequence__fini(&ros_message->sequence);
    }
    if (!rosidl_generator_c__int32__Sequence__init(&ros_message->sequence, size)) {
      return "failed to create array for field 'sequence'";
    }
    for (DDS::ULong i = 0; i < size; i++) {
      auto & ros_i = ros_message->sequence.data[i];
      ros_i = dds_message->sequence_[i];
    }
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_Feedback(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_Feedback_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Feedback(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_Feedback(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Feedback(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_Feedback);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_Feedback(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_Feedback);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_Feedback dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Feedback(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_Feedback__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_Feedback",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_Feedback,  // register_type
  publish_hello_world_msgs__action__Fibonacci_Feedback,  // publish
  take_hello_world_msgs__action__Fibonacci_Feedback,  // take
  serialize_hello_world_msgs__action__Fibonacci_Feedback,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_Feedback,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_Feedback,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_Feedback,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_Feedback__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_Feedback__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_Feedback)()
{
  return &Fibonacci_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/srv__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
#include "hello_world_msgs/action/dds_opensplice/fibonacci__type_support.cpp"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"

// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
// already included above
// #include "hello_world_msgs/action/fibonacci.h"  // goal
#include "unique_identifier_msgs/msg/uuid.h"  // goal_id

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_Goal)();
ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, unique_identifier_msgs, msg, UUID)();

using __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request = hello_world_msgs__action__Fibonacci_SendGoal_Request;

static hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_SendGoal_Request;

static const char *
register_type_hello_world_msgs__action__Fibonacci_SendGoal_Request(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_SendGoal_Request.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Request(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request *>(untyped_dds_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * unique_identifier_msgs__msg__UUID__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        unique_identifier_msgs, msg, UUID
      )()->data);
    const char * err_msg = unique_identifier_msgs__msg__UUID__callbacks->convert_ros_to_dds(
      &ros_message->goal_id, &dds_message->goal_id_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * hello_world_msgs__action__Fibonacci_Goal__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        hello_world_msgs, action, Fibonacci_Goal
      )()->data);
    const char * err_msg = hello_world_msgs__action__Fibonacci_Goal__callbacks->convert_ros_to_dds(
      &ros_message->goal, &dds_message->goal_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_SendGoal_Request(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Request(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Request(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request *>(untyped_ros_message);
  // Field name: goal_id
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, unique_identifier_msgs, msg, UUID)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_id_, &ros_message->goal_id);
  }

  // Field name: goal
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_Goal)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_, &ros_message->goal);
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_SendGoal_Request(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Request(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_SendGoal_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Request(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_SendGoal_Request);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_SendGoal_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_SendGoal_Request);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Request dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Request(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_SendGoal_Request__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_SendGoal_Request",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // register_type
  publish_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // publish
  take_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // take
  serialize_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Request,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_SendGoal_Request__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_SendGoal_Request__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_SendGoal_Request)()
{
  return &Fibonacci_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
#include "builtin_interfaces/msg/time.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, builtin_interfaces, msg, Time)();

using __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response = hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response = hello_world_msgs__action__Fibonacci_SendGoal_Response;

static hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_SendGoal_Response;

static const char *
register_type_hello_world_msgs__action__Fibonacci_SendGoal_Response(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_SendGoal_Response.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Response(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response *>(untyped_dds_message);
  // Field name: accepted
  {
    dds_message->accepted_ = ros_message->accepted;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Time__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        builtin_interfaces, msg, Time
      )()->data);
    const char * err_msg = builtin_interfaces__msg__Time__callbacks->convert_ros_to_dds(
      &ros_message->stamp, &dds_message->stamp_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_SendGoal_Response(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Response(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Response(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response *>(untyped_ros_message);
  // Field name: accepted
  {
    ros_message->accepted = (dds_message->accepted_ != 0);
  }

  // Field name: stamp
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, builtin_interfaces, msg, Time)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->stamp_, &ros_message->stamp);
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_SendGoal_Response(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Response(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_SendGoal_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Response(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_SendGoal_Response);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_SendGoal_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_SendGoal_Response);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_SendGoal_Response dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Response(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_SendGoal_Response__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_SendGoal_Response",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // register_type
  publish_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // publish
  take_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // take
  serialize_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_SendGoal_Response,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_SendGoal_Response__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_SendGoal_Response__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_SendGoal_Response)()
{
  return &Fibonacci_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"
{
#endif

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal_Request)();
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal_Response)();

const char *
register_types__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::register_types__Fibonacci_SendGoal(
    untyped_participant, request_type_name, response_type_name);
}

const char *
create_requester__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::create_requester__Fibonacci_SendGoal(
    untyped_participant, service_name,
    untyped_requester, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
create_responder__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::create_responder__Fibonacci_SendGoal(
    untyped_participant, service_name,
    untyped_responder, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
send_request__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_>;

  SampleT request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_request, static_cast<void *>(&request.data()));

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal_Request)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(static_cast<void *>(&request.data()), untyped_ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_response, static_cast<void *>(&response.data()));

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__hello_world_msgs__action__Fibonacci_SendGoal(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_,
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal_Response)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(
      static_cast<void *>(&response.data()), untyped_ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__hello_world_msgs__action__Fibonacci_SendGoal(void * untyped_requester, void (* deallocator)(void *))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::destroy_requester__Fibonacci_SendGoal(
    untyped_requester, deallocator);
}

const char *
destroy_responder__hello_world_msgs__action__Fibonacci_SendGoal(void * untyped_responder, void (* deallocator)(void *))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::destroy_responder__Fibonacci_SendGoal(
    untyped_responder, deallocator);
}

const char *
server_is_available__hello_world_msgs__action__Fibonacci_SendGoal(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::server_is_available__Fibonacci_SendGoal(
    requester, node, is_available);
}

static service_type_support_callbacks_t Fibonacci_SendGoal__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_SendGoal",
  &create_requester__hello_world_msgs__action__Fibonacci_SendGoal,
  &destroy_requester__hello_world_msgs__action__Fibonacci_SendGoal,
  &create_responder__hello_world_msgs__action__Fibonacci_SendGoal,
  &destroy_responder__hello_world_msgs__action__Fibonacci_SendGoal,
  &send_request__hello_world_msgs__action__Fibonacci_SendGoal,
  &take_request__hello_world_msgs__action__Fibonacci_SendGoal,
  &send_response__hello_world_msgs__action__Fibonacci_SendGoal,
  &take_response__hello_world_msgs__action__Fibonacci_SendGoal,
  &server_is_available__hello_world_msgs__action__Fibonacci_SendGoal,
};

static rosidl_service_type_support_t Fibonacci_SendGoal__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_SendGoal__callbacks,  // data
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_SendGoal)() {
  return &Fibonacci_SendGoal__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/srv__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/fibonacci__type_support.cpp"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"

// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, unique_identifier_msgs, msg, UUID)();

using __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request = hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request = hello_world_msgs__action__Fibonacci_GetResult_Request;

static hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_GetResult_Request;

static const char *
register_type_hello_world_msgs__action__Fibonacci_GetResult_Request(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_GetResult_Request.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Request(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request *>(untyped_dds_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * unique_identifier_msgs__msg__UUID__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        unique_identifier_msgs, msg, UUID
      )()->data);
    const char * err_msg = unique_identifier_msgs__msg__UUID__callbacks->convert_ros_to_dds(
      &ros_message->goal_id, &dds_message->goal_id_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_GetResult_Request(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Request(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Request(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request *>(untyped_ros_message);
  // Field name: goal_id
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, unique_identifier_msgs, msg, UUID)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_id_, &ros_message->goal_id);
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_GetResult_Request(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Request(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_GetResult_Request(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Request(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_GetResult_Request);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_GetResult_Request(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_GetResult_Request);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Request dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Request(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_GetResult_Request__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_GetResult_Request",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_GetResult_Request,  // register_type
  publish_hello_world_msgs__action__Fibonacci_GetResult_Request,  // publish
  take_hello_world_msgs__action__Fibonacci_GetResult_Request,  // take
  serialize_hello_world_msgs__action__Fibonacci_GetResult_Request,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_GetResult_Request,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Request,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Request,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_GetResult_Request__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_GetResult_Request__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_GetResult_Request)()
{
  return &Fibonacci_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
// already included above
// #include "hello_world_msgs/action/fibonacci.h"  // result

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_Result)();

using __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response = hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response = hello_world_msgs__action__Fibonacci_GetResult_Response;

static hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_GetResult_Response;

static const char *
register_type_hello_world_msgs__action__Fibonacci_GetResult_Response(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_GetResult_Response.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Response(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response *>(untyped_dds_message);
  // Field name: status
  {
    dds_message->status_ = ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * hello_world_msgs__action__Fibonacci_Result__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        hello_world_msgs, action, Fibonacci_Result
      )()->data);
    const char * err_msg = hello_world_msgs__action__Fibonacci_Result__callbacks->convert_ros_to_dds(
      &ros_message->result, &dds_message->result_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_GetResult_Response(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Response(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Response(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response *>(untyped_ros_message);
  // Field name: status
  {
    ros_message->status = dds_message->status_;
  }

  // Field name: result
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_Result)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->result_, &ros_message->result);
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_GetResult_Response(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Response(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_GetResult_Response(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Response(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_GetResult_Response);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_GetResult_Response(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_GetResult_Response);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_GetResult_Response dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Response(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_GetResult_Response__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_GetResult_Response",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_GetResult_Response,  // register_type
  publish_hello_world_msgs__action__Fibonacci_GetResult_Response,  // publish
  take_hello_world_msgs__action__Fibonacci_GetResult_Response,  // take
  serialize_hello_world_msgs__action__Fibonacci_GetResult_Response,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_GetResult_Response,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_GetResult_Response,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_GetResult_Response,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_GetResult_Response__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_GetResult_Response__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_GetResult_Response)()
{
  return &Fibonacci_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"
{
#endif

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult_Request)();
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult_Response)();

const char *
register_types__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::register_types__Fibonacci_GetResult(
    untyped_participant, request_type_name, response_type_name);
}

const char *
create_requester__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::create_requester__Fibonacci_GetResult(
    untyped_participant, service_name,
    untyped_requester, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
create_responder__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::create_responder__Fibonacci_GetResult(
    untyped_participant, service_name,
    untyped_responder, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
send_request__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_>;

  SampleT request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_request, static_cast<void *>(&request.data()));

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult_Request)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(static_cast<void *>(&request.data()), untyped_ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_response, static_cast<void *>(&response.data()));

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__hello_world_msgs__action__Fibonacci_GetResult(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_,
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult_Response)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(
      static_cast<void *>(&response.data()), untyped_ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__hello_world_msgs__action__Fibonacci_GetResult(void * untyped_requester, void (* deallocator)(void *))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::destroy_requester__Fibonacci_GetResult(
    untyped_requester, deallocator);
}

const char *
destroy_responder__hello_world_msgs__action__Fibonacci_GetResult(void * untyped_responder, void (* deallocator)(void *))
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::destroy_responder__Fibonacci_GetResult(
    untyped_responder, deallocator);
}

const char *
server_is_available__hello_world_msgs__action__Fibonacci_GetResult(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  return hello_world_msgs::action::typesupport_opensplice_cpp::server_is_available__Fibonacci_GetResult(
    requester, node, is_available);
}

static service_type_support_callbacks_t Fibonacci_GetResult__callbacks = {
  "hello_world_msgs::action",
  "Fibonacci_GetResult",
  &create_requester__hello_world_msgs__action__Fibonacci_GetResult,
  &destroy_requester__hello_world_msgs__action__Fibonacci_GetResult,
  &create_responder__hello_world_msgs__action__Fibonacci_GetResult,
  &destroy_responder__hello_world_msgs__action__Fibonacci_GetResult,
  &send_request__hello_world_msgs__action__Fibonacci_GetResult,
  &take_request__hello_world_msgs__action__Fibonacci_GetResult,
  &send_response__hello_world_msgs__action__Fibonacci_GetResult,
  &take_response__hello_world_msgs__action__Fibonacci_GetResult,
  &server_is_available__hello_world_msgs__action__Fibonacci_GetResult,
};

static rosidl_service_type_support_t Fibonacci_GetResult__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_GetResult__callbacks,  // data
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_GetResult)() {
  return &Fibonacci_GetResult__type_support;
}

#if defined(__cplusplus)
}
#endif
// generated from rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
// generated code does not contain a copyright notice

// already included above
// #include "hello_world_msgs/action/fibonacci__rosidl_typesupport_opensplice_c.h"
// already included above
// #include "rosidl_typesupport_opensplice_c/identifier.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_generator_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
// already included above
// #include "rmw/rmw.h"
// already included above
// #include "hello_world_msgs/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
// already included above
// #include "hello_world_msgs/action/fibonacci.h"
// already included above
// #include "hello_world_msgs/action/dds_opensplice/ccpp_Fibonacci_.h"

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// include message dependencies
// already included above
// #include "hello_world_msgs/action/fibonacci.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"  // goal_id

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_Feedback)();
ROSIDL_TYPESUPPORT_OPENSPLICE_C_IMPORT_hello_world_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c, unique_identifier_msgs, msg, UUID)();

using __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage = hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_;
using __ros_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage = hello_world_msgs__action__Fibonacci_FeedbackMessage;

static hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport _type_support_hello_world_msgs__action__Fibonacci_FeedbackMessage;

static const char *
register_type_hello_world_msgs__action__Fibonacci_FeedbackMessage(void * untyped_participant, const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  using DDS::DomainParticipant;
  DomainParticipant * participant = static_cast<DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = _type_support_hello_world_msgs__action__Fibonacci_FeedbackMessage.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.register_type: unknown return code";
  }
}

static const char *
convert_ros_to_dds_hello_world_msgs__action__Fibonacci_FeedbackMessage(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __ros_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage * ros_message = static_cast<const __ros_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage *>(untyped_ros_message);
  __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage * dds_message = static_cast<__dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage *>(untyped_dds_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * unique_identifier_msgs__msg__UUID__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        unique_identifier_msgs, msg, UUID
      )()->data);
    const char * err_msg = unique_identifier_msgs__msg__UUID__callbacks->convert_ros_to_dds(
      &ros_message->goal_id, &dds_message->goal_id_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * hello_world_msgs__action__Fibonacci_Feedback__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_opensplice_c,
        hello_world_msgs, action, Fibonacci_Feedback
      )()->data);
    const char * err_msg = hello_world_msgs__action__Fibonacci_Feedback__callbacks->convert_ros_to_dds(
      &ros_message->feedback, &dds_message->feedback_);
    if (err_msg != 0) {
      return err_msg;
    }
  }

  return 0;
}

static const char *
publish_hello_world_msgs__action__Fibonacci_FeedbackMessage(void * dds_data_writer, const void * ros_message)
{
  if (!dds_data_writer) {
    return "data writer handle is null";
  }
  if (!ros_message) {
    return "ros message handle is null";
  }

  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(dds_data_writer);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_FeedbackMessage(ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter * data_writer =
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "the handle has not been registered with this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter.write: unknown return code";
  }
}

static const char *
convert_dds_to_ros_hello_world_msgs__action__Fibonacci_FeedbackMessage(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_dds_message) {
    return "dds message handle is null";
  }
  const __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage * dds_message = static_cast<const __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage *>(untyped_dds_message);
  __ros_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage * ros_message = static_cast<__ros_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage *>(untyped_ros_message);
  // Field name: goal_id
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, unique_identifier_msgs, msg, UUID)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->goal_id_, &ros_message->goal_id);
  }

  // Field name: feedback
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, hello_world_msgs, action, Fibonacci_Feedback)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->feedback_, &ros_message->feedback);
  }

  return 0;
}

static const char *
take_hello_world_msgs__action__Fibonacci_FeedbackMessage(
  void * dds_data_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(dds_data_reader);

  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader * data_reader =
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_narrow(topic_reader);

  hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.take: "
        "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_FeedbackMessage(&dds_messages[0], untyped_ros_message);
    if (errs != 0) {
      goto finally;
    }
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.return_loan: "
             "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

static const char *
serialize_hello_world_msgs__action__Fibonacci_FeedbackMessage(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  if (!untyped_ros_message) {
    return "ros message handle is null";
  }
  if (!untyped_serialized_data) {
    return "serialized_data handle is null";
  }

  __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage dds_message;
  const char * err_msg = convert_ros_to_dds_hello_world_msgs__action__Fibonacci_FeedbackMessage(untyped_ros_message, &dds_message);
  if (err_msg != 0) {
    return err_msg;
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_FeedbackMessage);

  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.serialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

static const char *
deserialize_hello_world_msgs__action__Fibonacci_FeedbackMessage(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  const char * errs = nullptr;

  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::OpenSplice::CdrTypeSupport cdr_ts(_type_support_hello_world_msgs__action__Fibonacci_FeedbackMessage);

  __dds_msg_type_hello_world_msgs__action__Fibonacci_FeedbackMessage dds_message;
  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.deserialize: "
             "this hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  errs = convert_dds_to_ros_hello_world_msgs__action__Fibonacci_FeedbackMessage(&dds_message, untyped_ros_message);

  return errs;
}


static message_type_support_callbacks_t Fibonacci_FeedbackMessage__callbacks = {
  "hello_world_msgs::action",  // message_namespace
  "Fibonacci_FeedbackMessage",  // message_name
  register_type_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // register_type
  publish_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // publish
  take_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // take
  serialize_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // serialize message
  deserialize_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // deserialize message
  convert_ros_to_dds_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // convert_ros_to_dds
  convert_dds_to_ros_hello_world_msgs__action__Fibonacci_FeedbackMessage,  // convert_dds_to_ros
};

static rosidl_message_type_support_t Fibonacci_FeedbackMessage__type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &Fibonacci_FeedbackMessage__callbacks,  // data
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_c,
  hello_world_msgs, action,
  Fibonacci_FeedbackMessage)()
{
  return &Fibonacci_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
