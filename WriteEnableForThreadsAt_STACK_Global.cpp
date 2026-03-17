#include "pch.h"
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_3STATE_flag_IDLE = NULL;
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_3STATE_flag_WAIT = NULL;
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_3STATE_flag_WRITE = NULL;
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_number_Of_Implemented_Threads = NULL;
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::WriteEnableForThreadsAt_STACK_Global()
    {
        std::array<bool, 2>* newDEAFULT_FlagSet = new std::array<bool, 2>{true, true};
        stat_REG_create_3STATE_flag_IDLE(newDEAFULT_FlagSet);
        stat_REG_create_3STATE_flag_WAIT(newDEAFULT_FlagSet);//
        stat_REG_create_3STATE_flag_WRITE(newDEAFULT_FlagSet);
        delete newDEAFULT_FlagSet;
        uint8_t* newDEFAULT_Value = new uint8_t(UINT8_MAX);
        stat_REG_create_number_Of_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::~WriteEnableForThreadsAt_STACK_Global()
    {
        delete _REG_ptr_3STATE_flag_IDLE;
        delete _REG_ptr_3STATE_flag_WAIT;
        delete _REG_ptr_3STATE_flag_WRITE;
        delete _REG_ptr_number_Of_Implemented_Threads;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app_REG_initialise_Item_Of_ptr_3STATE_flag_IDLE(std::array<bool, 2>* newINITIALISED_FlagBits)
    {
        stat_REG_set_3STATE_flag_IDLE(*newINITIALISED_FlagBits);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app_REG_initialise_Item_Of_ptr_3STATE_flag_WAIT(std::array<bool, 2 >* newINITIALISED_FlagBits)
    {
        stat_REG_set_3STATE_flag_IDLE(*newINITIALISED_FlagBits);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app_REG_initialise_Item_Of_ptr_3STATE_flag_WRITE(std::array<bool, 2 >* newINITIALISED_FlagBits)
    {
        stat_REG_set_3STATE_flag_WRITE(*newINITIALISED_FlagBits);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app_REG_initialise_Ptr_number_Of_Implemented_Threads(uint8_t* newValue)
    {
        stat_REG_set_number_Of_Implemented_Threads(*newValue);
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_3STATE_flag_IDLE()
    {
        return *stat_REG_get_ptr_3STATE_flag_IDLE();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_3STATE_flag_WAIT()
    {
        return *stat_REG_get_ptr_3STATE_flag_WAIT();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_3STATE_flag_WRITE()
    {
        return *stat_REG_get_ptr_3STATE_flag_WRITE();
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_number_Of_Implemented_Threads()
    {
        return *stat_REG_get_ptr_number_Of_Implemented_Threads();
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(void* obj)
    {
        return reinterpret_cast<OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework*>(obj);
    }
    unsigned char* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_uint8_t_to_ByteArray(uint8_t uint8_t_Value)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_create_3STATE_flag_IDLE(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        _REG_ptr_3STATE_flag_IDLE = new std::array<bool, 2>;
        while (stat_REG_get_ptr_3STATE_flag_IDLE() == NULL) {}
        *_REG_ptr_3STATE_flag_IDLE = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_create_3STATE_flag_WAIT(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        _REG_ptr_3STATE_flag_WAIT = new std::array<bool, 2>;
        while (stat_REG_get_ptr_3STATE_flag_WAIT() == NULL) {}
        *_REG_ptr_3STATE_flag_WAIT = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_create_3STATE_flag_WRITE(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        _REG_ptr_3STATE_flag_WRITE = new std::array<bool, 2>;
        while (stat_REG_get_ptr_3STATE_flag_WRITE() == NULL) {}
        *_REG_ptr_3STATE_flag_WRITE = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        _REG_ptr_number_Of_Implemented_Threads = new uint8_t();
        while (stat_REG_get_ptr_number_Of_Implemented_Threads() == NULL) {}
        *_REG_ptr_number_Of_Implemented_Threads = *newDEFAULT_Value;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_3STATE_flag_IDLE()
    {
        return _REG_ptr_3STATE_flag_IDLE;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_3STATE_flag_WAIT()
    {
        return _REG_ptr_3STATE_flag_WAIT;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_3STATE_flag_WRITE()
    {
        return _REG_ptr_3STATE_flag_WRITE;
    }
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_number_Of_Implemented_Threads()
    {
        return _REG_ptr_number_Of_Implemented_Threads;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_set_3STATE_flag_IDLE(std::array<bool, 2> new_FlagBitSet)
    {
        *_REG_ptr_3STATE_flag_IDLE = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_set_3STATE_flag_WAIT(std::array<bool, 2> new_FlagBitSet)
    {
        *_REG_ptr_3STATE_flag_WAIT = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_set_3STATE_flag_WRITE(std::array<bool, 2> new_FlagBitSet)
    {
        *_REG_ptr_3STATE_flag_WRITE = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_set_number_Of_Implemented_Threads(uint8_t newValue)
    {
        *_REG_ptr_number_Of_Implemented_Threads = newValue;
    }