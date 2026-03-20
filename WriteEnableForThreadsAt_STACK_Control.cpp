#include "pch.h"
bool* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_ptr_flag_praisingWrite;
std::array<std::array<bool, 2>, 3>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_3STATE_flag_WriteState;
std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
std::list<uint32_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index;
std::list<uint8_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_QUE_Of_ThreadID_To_Launch;
uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::_stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::WriteEnableForThreadsAt_STACK_Control()
    {
        app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Control();
        app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Control();
        app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Control();
        app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Control();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::~WriteEnableForThreadsAt_STACK_Control()
    {
        delete _stat_REG_ptr_flag_praisingWrite;
        delete _stat_REG_LIST_Of_3STATE_flag_WriteState;
        delete _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId;
        delete _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index;
        delete _stat_REG_QUE_Of_ThreadID_To_Launch;
        delete _stat_REG_ptr_writeCycle_Try_ThreadId_Index;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Control()
    {
        std::cout << "entered app0_CLASS_DECLAIRE_Framework_App()" << std::endl;

        std::cout << "exiting app0_CLASS_DECLAIRE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Control()
    {
        std::cout << "entered app1_CLASS_DEFINE_Framework_App" << std::endl;

        std::cout << "exiting app1_CLASS_DEFINE_Framework_App" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Control()
    {
        std::cout << "entered app3_CLASS_INITIALISE_Framework_App()" << std::endl;

        std::cout << "exiting app3_CLASS_INITIALISE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Control()
    {
        std::cout << "entered app0_REG_DECLAIRE_Framework_App()" << std::endl;

        std::cout << "exiting app0_REG_DECLAIRE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Control(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered CLIBMyMath::Framework_App::app1_REG_DEFINE_Framework_App()" << std::endl;
        stat_REG_app1_DEFINE_ptr_flag_praisingWrite();
        stat_REG_app1_DEFINE_ptr_3STATE_flag_WriteState();
        stat_REG_app1_DEFINE_ptr_WriteACTIVE_Count_For_ThreadId();
        stat_REG_app1_DEFINE_ptr_WriteIDLE_Count_For_ThreadId();
        stat_REG_app1_DEFINE_ptr_WriteWAIT_Count_For_ThreadId();
        stat_REG_app1_DEFINE_ptr_new_writeCycle_Try_ThreadId_Index();
        stat_REG_app1_DEFINE_ptr_QUE_Of_ThreadID_To_WRITE();
        stat_REG_app1_DEFINE_ptr_writeCycle_Try_ThreadId_Index();
        std::cout << "exiting CLIBMyMath::Framework_App::app1_REG_DEFINE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Control(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered CLIBMyMath::Framework_App::app2_REG_SUBSTANTIATE_Framework_App()" << std::endl;
        stat_REG_app2_SUBSTANTIATE_ptr_flag_praisingWrite();
        stat_REG_app2_SUBSTANTIATE_ptrv_3STATE_flag_WriteState();
        stat_REG_app2_SUBSTANTIATE_ptr_WriteACTIVE_Count_For_ThreadId();
        stat_REG_app2_SUBSTANTIATE_WriteIDLE_Count_For_ThreadId();
        stat_REG_app2_SUBSTANTIATE_WriteWAIT_Count_For_ThreadId();
        stat_REG_app2_SUBSTANTIATE_new_writeCycle_Try_ThreadId_Index();
        stat_REG_app2_SUBSTANTIATE_ptr_QUE_Of_ThreadID_To_Launch();
        stat_REG_app2_SUBSTANTIATE_writeCycle_Try_ThreadId_Index();
        std::cout << "exiting CLIBMyMath::Framework_App::app2_REG_SUBSTANTIATE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Control(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered CLIBMyMath::Framework_App::app3_REG_INITIALISE_Framework_App()" << std::endl;
        stat_REG_app3_INITIALISE_ptr_flag_praisingWrite();
        stat_REG_app3_INITIALISE_ptr_3STATE_flag_WriteState();
        stat_REG_app3_INITIALISE_ptr_WriteACTIVE_Count_For_ThreadId();
        stat_REG_app3_INITIALISE_WriteIDLE_Count_For_ThreadId();
        stat_REG_app3_INITIALISE_WriteWAIT_Count_For_ThreadIdd();
        stat_REG_app3_INITIALISE_new_writeCycle_Try_ThreadId_Index();
        stat_REG_app3_INITIALISE_ptr_QUE_Of_ThreadID_To_Launch();
        stat_REG_app3_INITIALISE_writeCycle_Try_ThreadId_Index();
        std::cout << "exiting CLIBMyMath::Framework_App::app3_REG_INITIALISE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Control(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_FUNCT_writeEnable_Activate(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT());
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_FUNCT_writeEnable_SortQue(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                }
            }
        }
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_FUNCT_writeEnable_Request(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_flag_praisingWrite() == true)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dynamicStagger(obj, coreId);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(true);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index());
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT());
        }
        else
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_writeCycle_Try_ThreadId_Index() + 1);
            if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_writeCycle_Try_ThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads())
            {
                dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
            }
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
            app_FUNCT_writeEnable_Request(obj, coreId);
        }
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::app_FUNCT_writeQue_Update(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnable()->stat_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnable()->stat_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnable()->stat_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
    bool OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_flag_praisingWrite()
    {
        return *stat_REG_get_ptr_flag_praisingWrite();
    }
    std::array<bool, 2> OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_ptr_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_Item_new_writeCycle_Try_ThreadId_Index()
    {
        return *stat_REG_get_ptr_new_writeCycle_Try_ThreadId_Index();
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID)
    {
        auto temp = stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::dyn_REG_get_Item_writeCycle_Try_ThreadId_Index()
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
        stat_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
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
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        uint8_t temp_B = uint8_t(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_Item_On_QUE_List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_QUE_List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_flag_praisingWrite()
    {
        _stat_REG_ptr_flag_praisingWrite = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_3STATE_flag_WriteState()
    {
        _stat_REG_LIST_Of_3STATE_flag_WriteState = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_WriteACTIVE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_WriteIDLE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_WriteWAIT_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_new_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_QUE_Of_ThreadID_To_WRITE()
    {
        _stat_REG_QUE_Of_ThreadID_To_Launch = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app1_DEFINE_ptr_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_writeCycle_Try_ThreadId_Index = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_ptr_flag_praisingWrite()
    {
        *_stat_REG_ptr_flag_praisingWrite = true;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_ptrv_3STATE_flag_WriteState()
    {
        _stat_REG_LIST_Of_3STATE_flag_WriteState = new std::array<std::array<bool, 2>, 3>();
        while (stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState() == NULL) {}
        _stat_REG_LIST_Of_3STATE_flag_WriteState[0] = { true, true };
        _stat_REG_LIST_Of_3STATE_flag_WriteState[1] = { true, true };
        _stat_REG_LIST_Of_3STATE_flag_WriteState[2] = { true, true };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_ptr_WriteACTIVE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = new std::list<uint32_t>(UINT8_MAX);
        while (stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_WriteIDLE_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = new std::list<uint32_t>(UINT8_MAX);
        while (stat_REG_get_ptr_list_Of_WriteIdle_Count_For_ThreadId() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_WriteWAIT_Count_For_ThreadId()
    {
        _stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = new std::list<uint32_t>(UINT8_MAX);
        while (stat_REG_get_ptr_list_Of_WriteWait_Count_For_ThreadId() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_new_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = new uint8_t(UINT8_MAX);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_ptr_QUE_Of_ThreadID_To_Launch()
    {
        _stat_REG_QUE_Of_ThreadID_To_Launch = new std::list<uint8_t>(UINT8_MAX);
        while (stat_REG_get_ptr_QUE_List_Of_ThreadToWrite() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app2_SUBSTANTIATE_writeCycle_Try_ThreadId_Index()
    {
        _stat_REG_ptr_writeCycle_Try_ThreadId_Index = new uint8_t(UINT8_MAX);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_ptr_flag_praisingWrite()
    {
        *_stat_REG_ptr_flag_praisingWrite = false;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_ptr_3STATE_flag_WriteState()
    {
        _stat_REG_LIST_Of_3STATE_flag_WriteState[0] = { false, false };
        _stat_REG_LIST_Of_3STATE_flag_WriteState[1] = { false, true };
        _stat_REG_LIST_Of_3STATE_flag_WriteState[2] = { true, false };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_ptr_WriteACTIVE_Count_For_ThreadId()
    {
        *_stat_REG_LIST_Of_WriteACTIVE_Count_For_ThreadId = { (uint8_t)(0), (uint8_t)(0), (uint8_t)(0) };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_WriteIDLE_Count_For_ThreadId()
    {
        *_stat_REG_LIST_Of_WriteIDLE_Count_For_ThreadId = { (uint8_t)(0), (uint8_t)(0), (uint8_t)(0) };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_WriteWAIT_Count_For_ThreadIdd()
    {
        *_stat_REG_LIST_Of_WriteWAIT_Count_For_ThreadId = { (uint8_t)(0), (uint8_t)(0), (uint8_t)(0) };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_new_writeCycle_Try_ThreadId_Index()
    {
        *_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = (uint8_t)(1);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_ptr_QUE_Of_ThreadID_To_Launch()
    {
        *_stat_REG_QUE_Of_ThreadID_To_Launch = { (uint8_t)(0), (uint8_t)(1), (uint8_t)(2) };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_app3_INITIALISE_writeCycle_Try_ThreadId_Index()
    {
        *_stat_REG_ptr_writeCycle_Try_ThreadId_Index = (uint8_t)(0);
    }
    bool* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_flag_praisingWrite()
    {
        return _stat_REG_ptr_flag_praisingWrite;
    }
    std::array<std::array<bool, 2>, 3>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState()
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
        return _stat_REG_ptr_new_writeCycle_Try_ThreadId_Index;
    }
    std::list<uint8_t>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_get_ptr_QUE_List_Of_ThreadToWrite()
    {
        return _stat_REG_QUE_Of_ThreadID_To_Launch;
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
        auto temp = stat_REG_get_ptr_Array_Of_3STATE_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control::stat_REG_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
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
        *_stat_REG_ptr_new_writeCycle_Try_ThreadId_Index = newValue;
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