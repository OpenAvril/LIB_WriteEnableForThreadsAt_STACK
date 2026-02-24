#include "pch.h"

// classes.

// registers.
    std::array<bool, 2> _2bit_flag_write_IDLE = { NULL, NULL };
    std::array<bool, 2> _2bit_flag_write_WAIT = { NULL, NULL };
    std::array<bool, 2> _2bit_flag_write_WRITE = { NULL, NULL };
    uint8_t _number_Of_Implemented_Threads = NULL;

// pointers.
    std::array<bool, 2>* _ptr_2bit_flag_write_IDLE = NULL;
    std::array<bool, 2>* _ptr_2bit_flag_write_WAIT = NULL;
    std::array<bool, 2>* _ptr_2bit_flag_write_WRITE = NULL;
    uint8_t* _ptr_number_Of_Implemented_Threads = NULL;

// constructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::WriteEnableForThreadsAt_STACK_Global()
    {
        std::array<bool, 2>* newDEAFULT_FlagSet = new std::array<bool, 2>{true, true};
        create_2bit_flag_write_IDLE(*newDEAFULT_FlagSet);
        create_2bit_flag_write_WAIT(*newDEAFULT_FlagSet);
        create_2bit_flag_write_WRITE(*newDEAFULT_FlagSet);
        delete newDEAFULT_FlagSet;
        uint8_t* newDEFAULT_Value = new uint8_t(UINT8_MAX);
        create_number_Of_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

// destructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::~WriteEnableForThreadsAt_STACK_Global()
    {
        delete _ptr_2bit_flag_write_IDLE;
        delete _ptr_2bit_flag_write_WAIT;
        delete _ptr_2bit_flag_write_WRITE;
        delete _ptr_number_Of_Implemented_Threads;
    }
// public.
    // dynamic.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::initialise_Item_Of_2bit_flag_write_IDLE(std::array<bool, 2>* new_FlagBitSet)
    {
        stat_set_2bit_flag_write_IDLE(*new_FlagBitSet);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::initialise_Item_Of_2bit_flag_write_WAIT(std::array<bool, 2 >* new_FlagBitSet)
    {
        stat_set_2bit_flag_write_IDLE(*new_FlagBitSet);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::initialise_Item_Of_2bit_flag_write_WRITE(std::array<bool, 2 >* new_FlagBitSet)
    {
        stat_set_2bit_flag_write_WRITE(*new_FlagBitSet);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::initialise_number_Of_Implemented_Threads(uint8_t* newValue)
    {
        stat_set_number_Of_Implemented_Threads(*newValue);
    }
        // get.
    std::array<bool, 2> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_IDLE()
    {
        return stat_get_2bit_flag_write_IDLE();
    }
    std::array<bool, 2> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_WAIT()
    {
        return stat_get_2bit_flag_write_WAIT();
    }
    std::array<bool, 2> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_WRITE()
    {
        return stat_get_2bit_flag_write_WRITE();
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::get_number_Of_Implemented_Threads()
    {
        return *stat_get_ptr_number_Of_Implemented_Threads();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_IDLE(std::array<bool, 2> newDEAFULT_FlagSet)
    {
        std::array<bool, 2> _2bit_flag_write_IDLE = { newDEAFULT_FlagSet };
        create_ptr_2bit_flag_write_IDLE(&_2bit_flag_write_IDLE);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_WAIT(std::array<bool, 2> newDEAFULT_FlagSet)
    {
        std::array<bool, 2> _2bit_flag_write_WAIT = { newDEAFULT_FlagSet };
        create_ptr_2bit_flag_write_WAIT(&_2bit_flag_write_WAIT);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_WRITE(std::array<bool, 2> newDEAFULT_FlagSet)
    {
        std::array<bool, 2> _2bit_flag_write_WRITE = { newDEAFULT_FlagSet };
        create_ptr_2bit_flag_write_WRITE(&_2bit_flag_write_WRITE);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        stat_set_number_Of_Implemented_Threads(*newDEFAULT_Value);
        create_ptr_number_Of_Implemented_Threads(&_number_Of_Implemented_Threads);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_ptr_2bit_flag_write_IDLE(std::array<bool, 2>* newPtr)
    {
        stat_set_ptr_2bit_flag_write_IDLE(newPtr);
        while (stat_get_ptr_2bit_flag_write_IDLE() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_ptr_2bit_flag_write_WAIT(std::array<bool, 2>* newPtr)
    {
        stat_set_ptr_2bit_flag_write_WAIT(newPtr);
        while (stat_get_ptr_2bit_flag_write_WAIT() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_ptr_2bit_flag_write_WRITE(std::array<bool, 2>* newPtr)
    {
        stat_set_ptr_2bit_flag_write_WRITE(newPtr);
        while (stat_get_ptr_2bit_flag_write_WRITE() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::create_ptr_number_Of_Implemented_Threads(uint8_t* newPtr)
    {
        stat_set_ptr_number_Of_Implemented_Threads(newPtr);
        while (stat_get_ptr_number_Of_Implemented_Threads() == NULL) {}
    }
        // get.
    std::array<bool, 2> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_2bit_flag_write_IDLE()
    {
        return _2bit_flag_write_IDLE;
    }
    std::array<bool, 2> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_2bit_flag_write_WAIT()
    {
        return _2bit_flag_write_WAIT;
    }
    std::array<bool, 2> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_2bit_flag_write_WRITE()
    {
        return _2bit_flag_write_WRITE;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_number_Of_Implemented_Threads()
    {
        return _number_Of_Implemented_Threads;
    }
    std::array<bool, 2>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_2bit_flag_write_IDLE()
    {
        return _ptr_2bit_flag_write_IDLE;
    }
    std::array<bool, 2>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_2bit_flag_write_WAIT()
    {
        return _ptr_2bit_flag_write_WAIT;
    }
    std::array<bool, 2>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_2bit_flag_write_WRITE()
    {
        return _ptr_2bit_flag_write_WRITE;
    }
    uint8_t* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_number_Of_Implemented_Threads()
    {
        return _ptr_number_Of_Implemented_Threads;
    }
        // set.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_2bit_flag_write_IDLE(std::array<bool, 2> new_FlagBitSet)
    {
        _2bit_flag_write_IDLE = new_FlagBitSet;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_2bit_flag_write_WAIT(std::array<bool, 2> new_FlagBitSet)
    {
        _2bit_flag_write_WAIT = new_FlagBitSet;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_2bit_flag_write_WRITE(std::array<bool, 2> new_FlagBitSet)
    {
        _2bit_flag_write_WRITE = new_FlagBitSet;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_number_Of_Implemented_Threads(uint8_t newValue)
    {
        _number_Of_Implemented_Threads = newValue;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_ptr_2bit_flag_write_IDLE(std::array<bool, 2>* newPtr)
    {
        _ptr_2bit_flag_write_IDLE = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_ptr_2bit_flag_write_WAIT(std::array<bool, 2>* newPtr)
    {
        _ptr_2bit_flag_write_WAIT = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_ptr_2bit_flag_write_WRITE(std::array<bool, 2>* newPtr)
    {
        _ptr_2bit_flag_write_WRITE = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global::stat_set_ptr_number_Of_Implemented_Threads(uint8_t* newPtr)
    {
        _ptr_number_Of_Implemented_Threads = newPtr;
    }