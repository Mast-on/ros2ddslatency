#include "Fibonacci_.h"
#include "Fibonacci_Dcps.h"

namespace hello_world_msgs
{
    namespace action
    {
        namespace dds_
        {
#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Fibonacci_Goal_, struct Fibonacci_Goal_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Goal_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Goal_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Goal_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Goal_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Goal_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_, struct Fibonacci_SendGoal_Request_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Request_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Request_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Request_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Request_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_, struct Fibonacci_SendGoal_Response_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Response_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Response_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Response_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_SendGoal_Response_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_SendGoal_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_, struct Sample_Fibonacci_SendGoal_Request_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Request_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Request_DataWriter:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Request_DataReader:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Request_DataReaderView:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_, struct Sample_Fibonacci_SendGoal_Response_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Response_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Response_DataWriter:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Response_DataReader:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_SendGoal_Response_DataReaderView:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_SendGoal_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < hello_world_msgs::action::dds_::Fibonacci_Result_, struct Fibonacci_Result_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Result_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Result_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Result_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Result_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Result_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_, struct Fibonacci_GetResult_Request_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Request_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Request_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Request_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Request_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_, struct Fibonacci_GetResult_Response_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Response_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Response_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Response_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_GetResult_Response_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_GetResult_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUFLSeq < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_, struct Sample_Fibonacci_GetResult_Request_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Request_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Request_DataWriter:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Request_DataReader:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Request_DataReaderView:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Request_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_, struct Sample_Fibonacci_GetResult_Response_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Response_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Response_DataWriter:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Response_DataReader:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Sample_Fibonacci_GetResult_Response_DataReaderView:1.0";

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Sample_Fibonacci_GetResult_Response_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < hello_world_msgs::action::dds_::Fibonacci_Feedback_, struct Fibonacci_Feedback_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Feedback_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Feedback_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Feedback_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_Feedback_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_Feedback_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_, struct Fibonacci_FeedbackMessage_Seq_uniq_>;
#endif

const char * hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_FeedbackMessage_TypeSupportInterface:1.0";

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_duplicate (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::TypeSupport NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_TypeSupportInterface_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_FeedbackMessage_DataWriter:1.0";

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_duplicate (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataWriter NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataWriter_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_FeedbackMessage_DataReader:1.0";

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_duplicate (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReader NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReader_ptr> (p);
    if (result) result->m_count++;
    return result;
}

const char * hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_local_id = "IDL:::hello_world_msgs::action::dds_/Fibonacci_FeedbackMessage_DataReaderView:1.0";

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_duplicate (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr p)
{
    if (p) p->m_count++;
    return p;
}

DDS::Boolean hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_local_is_a (const char * _id)
{
    if (strcmp (_id, hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_local_id) == 0)
    {
        return true;
    }

    typedef DDS::DataReaderView NestedBase_1;

    if (NestedBase_1::_local_is_a (_id))
    {
        return true;
    }

    return false;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr result = NULL;
    if (p && p->_is_a (hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_local_id))
    {
        result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr> (p);
        if (result) result->m_count++;
    }
    return result;
}

hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
    hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr result;
    result = dynamic_cast < hello_world_msgs::action::dds_::Fibonacci_FeedbackMessage_DataReaderView_ptr> (p);
    if (result) result->m_count++;
    return result;
}

        }

    }

}

