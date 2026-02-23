#include "pch.h"

// classes.

// registers.
    bool _flag_praisingWrite = NULL;
    std::list<std::list<bool>> _list_Of_2ibt_flag_WriteState = { {NULL, NULL} };
    std::list<uint32_t> _list_Of_WriteActive_Count_For_ThreadId = { NULL };
    std::list<uint32_t> _list_Of_WriteIdle_Count_For_ThreadId = { NULL };
    std::list<uint32_t> _list_Of_WriteWait_Count_For_ThreadId = { NULL };
    uint8_t _new_writeCycle_Try_ThreadId_Index = NULL;
    std::list<uint8_t> _que_List_Of_ThreadToWrite = { NULL };
    uint8_t _writeCycle_Try_ThreadId_Index = NULL;

// pointers.
    std::list<std::list<bool>>* _ptr_list_Of_2ibt_flag_WriteState = NULL;
    std::list<uint32_t>* _ptr_list_Of_WriteActive_Count_For_ThreadId = NULL;
    std::list<uint32_t>* _ptr_list_Of_WriteIdle_Count_For_ThreadId = NULL;
    std::list<uint32_t>* _ptr_list_Of_WriteWait_Count_For_ThreadId = NULL;
    std::list<uint8_t>* _ptr_que_List_Of_ThreadToWrite = NULL;

// constructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::WriteEnableForThreadsAt_STACK_Control(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* global)
    {
        create_flag_praisingWrite();
        create_list_Of_WriteActive_Count_For_ThreadId();
        create_list_Of_WriteIdle_Count_For_ThreadId();
        create_list_Of_WriteWait_Count_For_ThreadId();
        create_que_List_Of_ThreadToWrite();
        create_writeCycle_Try_ThreadId_Index();
        create_new_writeCycle_Try_ThreadId_Index();
    }

// destructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::~WriteEnableForThreadsAt_STACK_Control()
    {
        delete _ptr_list_Of_2ibt_flag_WriteState;
        delete _ptr_list_Of_WriteActive_Count_For_ThreadId;
        delete _ptr_list_Of_WriteIdle_Count_For_ThreadId;
        delete _ptr_list_Of_WriteWait_Count_For_ThreadId;
        delete _ptr_que_List_Of_ThreadToWrite;
    }

// public.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        create_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_Global());
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_Activate(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT());
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_SortQue(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WRITE())
                {
                    if ((obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                        || (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE()))
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WRITE())
                    {
                        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE())
                {
                    if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE())
                    {
                        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                {
                    if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                }
            }
        }
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_Request(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        while (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_flag_praisingWrite() == true)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->dynamicStagger(obj, coreId);
        }
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(true);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_new_writeCycle_Try_ThreadId_Index());
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT());
        }
        else
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() + 1);
            if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads())
            {
                set_new_writeCycle_Try_ThreadId_Index(0);
            }
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(false);
            writeEnable_Request(obj, coreId);
        }
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeQue_Update(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t threadID = 0; threadID < obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads(); threadID++)
        {
            if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(threadID) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(threadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(threadID, get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(threadID) + 1);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(threadID, 0);
            }
            else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(threadID) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(threadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(threadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(threadID, get_Item_On_list_Of_WriteWait_Count_For_ThreadId(threadID) + 1);
            }
            else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(threadID) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WRITE())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(threadID, get_Item_On_list_Of_WriteActive_Count_For_ThreadId(threadID) + 1);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(threadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(threadID, 0);
            }
        }
    }
    // get.
    bool OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_flag_praisingWrite()
    {
        return _flag_praisingWrite;
    }
    std::list<bool> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_2ibt_flag_WriteState(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t threadID)
    {
        auto temp = get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, threadID);
        return *temp;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_new_writeCycle_Try_ThreadId_Index()
    {
        return _new_writeCycle_Try_ThreadId_Index;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID)
    {
        return 0;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_writeCycle_Try_ThreadId_Index()
    {
        return _writeCycle_Try_ThreadId_Index;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteActive_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteIdle_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteWait_Count_For_ThreadId;
    }
    std::list<std::list<bool>>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_2ibt_flag_WriteState()
    {
        return _ptr_list_Of_2ibt_flag_WriteState;
    }
    std::list<uint8_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_que_List_Of_ThreadToWrite()
    {
        return _ptr_que_List_Of_ThreadToWrite;
    }
    // set.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_flag_praisingWrite(bool newFlag)
    {
        _flag_praisingWrite = newFlag;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t threadID, std::list<bool> newState)
    {
        auto temp = get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, threadID);
        *temp = newState;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t threadID, uint32_t newCount)
    {
        auto temp = get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, threadID);
        *temp = newCount;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t threadID, uint32_t newCount)
    {
        auto temp = get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, threadID);
        *temp = newCount;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t threadID, uint32_t newCount)
    {
        auto temp = get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, threadID);
        *temp = newCount;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t threadID)
    {
        auto temp = get_ptr_que_List_Of_ThreadToWrite()->begin();
        std::advance(temp, threadID);
        *temp = threadID;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        _new_writeCycle_Try_ThreadId_Index = newValue;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        _writeCycle_Try_ThreadId_Index = newValue;
    }

// private.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_flag_praisingWrite()
    {
        set_flag_praisingWrite(false);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_2ibt_flag_WriteState(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* objGlobal)
    {
        std::list<std::list<bool>> _list_Of_2ibt_flag_WriteState = { objGlobal->get_2bit_flag_write_IDLE(), objGlobal->get_2bit_flag_write_IDLE(), objGlobal->get_2bit_flag_write_IDLE(), objGlobal->get_2bit_flag_write_IDLE() };//NUMBER OF THREADS
        create_ptr_list_Of_2ibt_flag_WriteState();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_WriteActive_Count_For_ThreadId()
    {
        std::list<uint8_t> _list_Of_WriteActive_Count_For_ThreadId = { uint32_t(0), uint32_t(0), uint32_t(0), uint32_t(0) };//NUMBER OF THREADS
        create_ptr_list_Of_WriteActive_Count_For_ThreadId();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_WriteIdle_Count_For_ThreadId()
    {
                std::list<uint8_t> _list_Of_WriteIdle_Count_For_ThreadId = { uint32_t(0), uint32_t(0), uint32_t(0), uint32_t(0) };//NUMBER OF THREADS
        create_ptr_list_Of_WriteActive_Count_For_ThreadId();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_WriteWait_Count_For_ThreadId()
    {
        std::list<uint8_t> _list_Of_WriteWait_Count_For_ThreadId = { uint8_t(0), uint8_t(0), uint8_t(0), uint8_t(0) };//NUMBER OF THREADS
        create_ptr_list_Of_WriteActive_Count_For_ThreadId();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_new_writeCycle_Try_ThreadId_Index()
    {
        set_new_writeCycle_Try_ThreadId_Index(uint8_t(255));
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_que_List_Of_ThreadToWrite()
    {
        std::list<uint8_t> _que_List_Of_ThreadToWrite = { uint8_t(0), uint8_t(0), uint8_t(0), uint8_t(0) };//NUMBER OF THREADS
        create_ptr_que_List_Of_ThreadToWrite();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_writeCycle_Try_ThreadId_Index()
    {
        set_writeCycle_Try_ThreadId_Index(uint8_t(255));
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        set_ptr_list_Of_WriteActive_Count_For_ThreadId(&_list_Of_WriteActive_Count_For_ThreadId);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        set_ptr_list_Of_WriteIdle_Count_For_ThreadId(&_list_Of_WriteIdle_Count_For_ThreadId);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        set_ptr_list_Of_WriteWait_Count_For_ThreadId(&_list_Of_WriteWait_Count_For_ThreadId);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_2ibt_flag_WriteState()
    {
        set_ptr_list_Of_2ibt_flag_WriteState(&_list_Of_2ibt_flag_WriteState);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_que_List_Of_ThreadToWrite()
    {
        set_ptr_que_List_Of_ThreadToWrite(&_que_List_Of_ThreadToWrite);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::dynamicStagger(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == coreId)
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
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_ShiftQueValues(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId_A, uint8_t coreId_B)
    {
        int temp_A = int(0);
        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        uint8_t temp_B = uint8_t(0);
        temp_B = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(coreId_B, temp_B);
    }
    // get.
    // set.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_WriteActive_Count_For_ThreadId(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_WriteActive_Count_For_ThreadId = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_WriteIdle_Count_For_ThreadId(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_WriteIdle_Count_For_ThreadId = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_WriteWait_Count_For_ThreadId(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_WriteWait_Count_For_ThreadId = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_2ibt_flag_WriteState(std::list<std::list<bool>>* newPtr)
    {
        _ptr_list_Of_2ibt_flag_WriteState = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_que_List_Of_ThreadToWrite(std::list<uint8_t>* newPtr)
    {
        _ptr_que_List_Of_ThreadToWrite = newPtr;
    }