#pragma once
namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK_Global
    {
    public:
        WriteEnableForThreadsAt_STACK_Global();
        ~WriteEnableForThreadsAt_STACK_Global();
        void dyn_REG_initialise_Item_Of_ptr_3STATE_flag_IDLE(std::array<bool, 2>*newINITIALISED_FlagBits);
        void dyn_REG_initialise_Item_Of_ptr_3STATE_flag_WAIT(std::array<bool, 2>* newINITIALISED_FlagBits);
        void dyn_REG_initialise_Item_Of_ptr_3STATE_flag_WRITE(std::array<bool, 2>* newINITIALISED_FlagBits);
        void dyn_REG_initialise_Ptr_number_Of_Implemented_Threads(uint8_t* newValue);
        std::array<bool, 2> dyn_REG_get_3STATE_flag_IDLE();
        std::array<bool, 2> dyn_REG_get_3STATE_flag_WAIT();
        std::array<bool, 2> dyn_REG_get_3STATE_flag_WRITE();
        uint8_t dyn_REG_get_number_Of_Implemented_Threads();
        static class WriteEnableForThreadsAt_STACK_Framework* stat_OBJ_get_ClassOf(void* obj);
    private:
        static std::array<bool, 2>* _REG_ptr_3STATE_flag_IDLE;
        static std::array<bool, 2>* _REG_ptr_3STATE_flag_WAIT;
        static std::array<bool, 2>* _REG_ptr_3STATE_flag_WRITE;
        static uint8_t* _REG_ptr_number_Of_Implemented_Threads;
        static void stat_REG_create_3STATE_flag_IDLE(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void stat_REG_create_3STATE_flag_WAIT(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void stat_REG_create_3STATE_flag_WRITE(std::array<bool, 2>* newDEAFULT_FlagSet);
        static void stat_REG_create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value);
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_IDLE();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_WAIT();
        static std::array<bool, 2>* stat_REG_get_ptr_3STATE_flag_WRITE();
        static uint8_t* stat_REG_get_ptr_number_Of_Implemented_Threads();
        static void stat_REG_set_3STATE_flag_IDLE(std::array<bool, 2> new_FlagBitSet);
        static void stat_REG_set_3STATE_flag_WAIT(std::array<bool, 2> new_FlagBitSet);
        static void stat_REG_set_3STATE_flag_WRITE(std::array<bool, 2> new_FlagBitSet);
        static void stat_REG_set_number_Of_Implemented_Threads(uint8_t newValue);
    };
}