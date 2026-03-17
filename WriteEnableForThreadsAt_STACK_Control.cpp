#include "pch.h"
    bool* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_ptr_flag_praisingWrite = NULL;
    std::list<std::array<bool, 2>>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_3STATE_flag_WriteState = NULL;
    std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = NULL;
    std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = NULL;
    std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = NULL;
    uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_new_writeCycle_Try_ThreadId_Index = NULL;
    std::list<uint8_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_QUE_Of_ThreadID_To_WRITE = NULL;
    uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_ptr_writeCycle_Try_ThreadId_Index = NULL;
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::WriteEnableForThreadsAt_STACK_Control()
    {
        bool* newDEAFULT_bool = new bool(true);
        state_REG_create_flag_praisingWrite(newDEAFULT_bool);
        delete newDEAFULT_bool;
        std::array<bool, 2>* newDEAFULT_boolSet = new std::array<bool, 2>{ true, true };
        state_REG_create_list_Of_2ibt_flag_WriteState(newDEAFULT_boolSet);
        delete newDEAFULT_boolSet;
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        state_REG_create_QUE_List_Of_ThreadToWrite(newDEFAULT_uint8_t);
        state_REG_create_writeCycle_Try_ThreadId_Index(newDEFAULT_uint8_t);
        state_REG_create_new_writeCycle_Try_ThreadId_Index(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        uint32_t* newDEFAULT_uint32_t = new uint32_t(UINT8_MAX);
        state_REG_create_list_Of_WriteActive_Count_For_ThreadId(newDEFAULT_uint32_t);
        state_REG_create_list_Of_WriteIdle_Count_For_ThreadId(newDEFAULT_uint32_t);
        state_REG_create_list_Of_WriteWait_Count_For_ThreadId(newDEFAULT_uint32_t);
        delete newDEFAULT_uint32_t;
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::~WriteEnableForThreadsAt_STACK_Control()
    {
        delete _stat_REG_ptr_flag_praisingWrite;
        delete _stat_REG_LIST_Of_3STATE_flag_WriteState;
        delete _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
        delete _stat_REG_new_writeCycle_Try_ThreadId_Index;
        delete _stat_REG_QUE_Of_ThreadID_To_WRITE;
        delete _stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_writeEnable_Activate(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT());
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_writeEnable_SortQue(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                }
            }
        }
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_writeEnable_Request(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_flag_praisingWrite() == true)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dynamicStagger(obj, coreId);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(true);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_new_writeCycle_Try_ThreadId_Index());
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT());
        }
        else
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_writeCycle_Try_ThreadId_Index() + 1);
            if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_writeCycle_Try_ThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads())
            {
                dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
            }
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
            app_writeEnable_Request(obj, coreId);
        }
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_writeQue_Update(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, dyn_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_flag_praisingWrite(bool* newINITIALISED_bool)
    {
        stat_REG_dyn_REG_set_flag_praisingWrite(*newINITIALISED_bool);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_Item_On_list_Of_3STATE_flag_WriteSTATE(uint8_t concurrentThreadID, std::array<bool, 2>* newINITIALISED_boolList)
    {
        stat_REG_set_Item_On_Of_3STATE_flag_WriteState(concurrentThreadID, *newINITIALISED_boolList);;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(concurrentThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_Item_On_list_Of_WriteIDLE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_Item_On_list_Of_WriteWAIT_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        stat_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_new_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t)
    {
        stat_REG_set_new_writeCycle_Try_ThreadId_Index(*newINITIALISED_uint8_t);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t* newINITIALISED_uint8_t)
    {
        stat_REG_set_Item_On_QUE_List_Of_ThreadToWrite(slotID, *newINITIALISED_uint8_t);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_REG_initialise_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t)
    {
        stat_REG_set_writeCycle_Try_ThreadId_Index(*newINITIALISED_uint8_t);
    }
    bool OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_flag_praisingWrite()
    {
        return *stat_REG_get_ptr_flag_praisingWrite();
    }
    std::array<bool, 2> OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_new_writeCycle_Try_ThreadId_Index()
    {
        return *stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index();
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(uint8_t slotID)
    {
        auto temp = stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_writeCycle_Try_ThreadId_Index()
    {
        return *stat_REG_get_ptr_writeCycle_Try_ThreadId_Index();
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_flag_praisingWrite(bool newBoolValue)
    {
        stat_REG_dyn_REG_set_flag_praisingWrite(newBoolValue);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
    {
        stat_REG_set_Item_On_Of_3STATE_flag_WriteState(concurrentThreadID, new2bitState);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_new_writeCycle_Try_ThreadId_Index(uint8_t newID)
    {
        stat_REG_set_writeCycle_Try_ThreadId_Index(newID);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID)
    {
        stat_REG_set_Item_On_QUE_List_Of_ThreadToWrite(slotID, newID);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_set_writeCycle_Try_ThreadId_Index(uint8_t newID)
    {
        stat_REG_set_writeCycle_Try_ThreadId_Index(newID);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dynamicStagger(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        if (*stat_REG_get_ptr_writeCycle_Try_ThreadId_Index() == coreId)
        {
            //exit early
        }
        else
        {
            int ptr_count = int(0);
            while (ptr_count < 20)//TODO record till flag change
            {
                ptr_count = ptr_count + 1;
            }
        }
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::writeEnable_ShiftQueValues(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId_A, uint8_t coreId_B)
    {
        int temp_A = int(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        uint8_t temp_B = uint8_t(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_QUE_List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_flag_praisingWrite(bool* newDEFAULT_bool)
    {
        _stat_REG_ptr_flag_praisingWrite = new bool(NULL);
        while (stat_REG_get_ptr_flag_praisingWrite() == NULL) {}
        *_stat_REG_ptr_flag_praisingWrite = *newDEFAULT_bool;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_list_Of_2ibt_flag_WriteState(std::array<bool, 2>* newDEFAULT_boolList)
    {
        _stat_REG_LIST_Of_3STATE_flag_WriteState = new std::list<std::array<bool, 2>>(NULL);
        while (stat_REG_get_ptr_list_Of_2ibt_flag_WriteState() == NULL) {}
        *_stat_REG_LIST_Of_3STATE_flag_WriteState = { *newDEFAULT_boolList, *newDEFAULT_boolList, *newDEFAULT_boolList };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_list_Of_WriteActive_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = new std::list<uint32_t>{ NULL };
        while (stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId() == NULL) {}
        *_stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_list_Of_WriteIdle_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = new std::list<uint32_t>(NULL);
        while (stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId() == NULL) {}
        *_stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_list_Of_WriteWait_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = new std::list<uint32_t>(NULL);
        while (stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId() == NULL) {}
        *_stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_new_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t)
    {
        _stat_REG_new_writeCycle_Try_ThreadId_Index = new uint8_t(NULL);
        while (stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index() == NULL) {}
        *_stat_REG_new_writeCycle_Try_ThreadId_Index = *newDEFAULT_uint8_t;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_QUE_List_Of_ThreadToWrite(uint8_t* newDEFAULT_uint8_t)
    {
        _stat_REG_QUE_Of_ThreadID_To_WRITE = new std::list<uint8_t>(NULL);
        while (stat_REG_get_ptr_QUE_List_Of_ThreadToWrite() == NULL) {}
        *_stat_REG_QUE_Of_ThreadID_To_WRITE = { *newDEFAULT_uint8_t, *newDEFAULT_uint8_t, *newDEFAULT_uint8_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::state_REG_create_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t)
    {
        _stat_REG_ptr_writeCycle_Try_ThreadId_Index = new uint8_t(NULL);
        while (stat_REG_get_ptr_writeCycle_Try_ThreadId_Index() == NULL) {}
        *_stat_REG_ptr_writeCycle_Try_ThreadId_Index = *newDEFAULT_uint8_t;
    }
    bool* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_flag_praisingWrite()
    {
        return _stat_REG_ptr_flag_praisingWrite;
    }
    std::list<std::array<bool, 2>>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_list_Of_2ibt_flag_WriteState()
    {
        return _stat_REG_LIST_Of_3STATE_flag_WriteState;
    }
    std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        return _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        return _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        return _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
    }
    uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index()
    {
        return _stat_REG_new_writeCycle_Try_ThreadId_Index;
    }
    std::list<uint8_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()
    {
        return _stat_REG_QUE_Of_ThreadID_To_WRITE;
    }
    uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_writeCycle_Try_ThreadId_Index()
    {
        return _stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_dyn_REG_set_flag_praisingWrite(bool newFlag)
    {
        *_stat_REG_ptr_flag_praisingWrite = newFlag;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_Item_On_Of_3STATE_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
    {
        auto temp = stat_REG_get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        *_stat_REG_new_writeCycle_Try_ThreadId_Index = newValue;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        *temp = concurrentThreadID;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        *_stat_REG_ptr_writeCycle_Try_ThreadId_Index = newValue;
    }