#pragma once

namespace OpenAvrilLIB
{
    class WriteEnableForThreadsAt_STACK_Control
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_STACK_Control(class WriteEnableForThreadsAt_STACK_Global* global);

// destructor.
        ~WriteEnableForThreadsAt_STACK_Control();

// public.
        void initialise(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void writeEnable_Activate(class WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId);
        void writeEnable_SortQue(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void writeEnable_Request(class WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId);
        void writeQue_Update(class WriteEnableForThreadsAt_STACK_Framework* obj);
    // get.
        bool get_flag_praisingWrite();
        std::list<bool> get_Item_On_list_Of_2ibt_flag_WriteState(int8_t threadID);
        uint32_t get_Item_On_list_Of_WriteActive_Count_For_ThreadId(int8_t threadID);
        uint32_t get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(int8_t threadID);
        uint32_t get_Item_On_list_Of_WriteWait_Count_For_ThreadId(int8_t threadID);
        int8_t get_new_writeCycle_Try_ThreadId_Index();
        int8_t get_Item_On_QUE_List_Of_ThreadToWrite(int8_t slotID);
        int8_t get_writeCycle_Try_ThreadId_Index();
        std::list<uint32_t>* get_ptr_list_Of_WriteActive_Count_For_ThreadId();
        std::list<uint32_t>* get_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        std::list<uint32_t>* get_ptr_list_Of_WriteWait_Count_For_ThreadId();
        std::list<std::list<bool>>* get_ptr_list_Of_2ibt_flag_WriteState();
        std::list<int8_t>* get_ptr_que_List_Of_ThreadToWrite();
    // set.
        void set_flag_praisingWrite(bool newFlag);
        void set_Item_On_list_Of_2ibt_flag_WriteState(int8_t threadID, std::list<bool> newState);
        void set_Item_On_list_Of_WriteActive_Count_For_ThreadId(int8_t threadID, uint32_t newCount);
        void set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(int8_t threadID, uint32_t newCount);
        void set_Item_On_list_Of_WriteWait_Count_For_ThreadId(int8_t threadID, uint32_t newCount);
        void set_Item_On_QUE_List_Of_ThreadToWrite(int8_t slotID, int8_t threadID);
        void set_new_writeCycle_Try_ThreadId_Index(int8_t newValue);
        void set_writeCycle_Try_ThreadId_Index(int8_t newValue);

    private:
// private.
        void create_flag_praisingWrite();
        void create_list_Of_2ibt_flag_WriteState(class WriteEnableForThreadsAt_STACK_Global* objGlobal);
        void create_list_Of_WriteActive_Count_For_ThreadId();
        void create_list_Of_WriteIdle_Count_For_ThreadId();
        void create_list_Of_WriteWait_Count_For_ThreadId();
        void create_new_writeCycle_Try_ThreadId_Index();
        void create_que_List_Of_ThreadToWrite();
        void create_writeCycle_Try_ThreadId_Index();
        void create_ptr_list_Of_2ibt_flag_WriteState();
        void create_ptr_list_Of_WriteActive_Count_For_ThreadId();
        void create_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        void create_ptr_list_Of_WriteWait_Count_For_ThreadId();
        void create_ptr_que_List_Of_ThreadToWrite();
        void dynamicStagger(class WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId);
        void writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_STACK_Framework* obj, int8_t concurrent_ThreadId_A, int8_t concurrent_ThreadId_B);
    // get.
    // set.
        void set_ptr_list_Of_2ibt_flag_WriteState(std::list<std::list<bool>>* newPtr);
        void set_ptr_list_Of_WriteActive_Count_For_ThreadId(std::list<uint32_t>* newPtr);
        void set_ptr_list_Of_WriteIdle_Count_For_ThreadId(std::list<uint32_t>* newPtr);
        void set_ptr_list_Of_WriteWait_Count_For_ThreadId(std::list<uint32_t>* newPtr);
        void set_ptr_que_List_Of_ThreadToWrite(std::list<int8_t>* newPtr);
    };
}