#include "pch.h"

// classes.

// registers.
    std::list<bool> _2bit_flag_write_IDLE = { NULL};
    std::list<bool> _2bit_flag_write_WAIT = { NULL };
    std::list<bool> _2bit_flag_write_WRITE = { NULL };
    int8_t _number_Of_Implemented_Threads = NULL;

// pointers.
    std::list<bool>* _ptr_2bit_flag_write_IDLE = NULL;
    std::list<bool>* _ptr_2bit_flag_write_WAIT = NULL;
    std::list<bool>* _ptr_2bit_flag_write_WRITE = NULL;

// constructor.
    Avril_FSD::WriteEnableForThreadsAt_STACK_Global::WriteEnableForThreadsAt_STACK_Global()
    {
        create_2bit_flag_write_IDLE();
        create_2bit_flag_write_WAIT();
        create_2bit_flag_write_WRITE();
        create_number_Of_Implemented_Threads();
    }

// destructor.
    Avril_FSD::WriteEnableForThreadsAt_STACK_Global::~WriteEnableForThreadsAt_STACK_Global()
    {
        delete _ptr_2bit_flag_write_IDLE;
        delete _ptr_2bit_flag_write_WAIT;
        delete _ptr_2bit_flag_write_WRITE;
    }

// public.
    // get.
    std::list<bool>* Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_ptr_2bit_flag_write_IDLE()
    {
        return _ptr_2bit_flag_write_IDLE;
    }
    std::list<bool>* Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_ptr_2bit_flag_write_WAIT()
    {
        return _ptr_2bit_flag_write_WAIT;
    }
    std::list<bool>* Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_ptr_2bit_flag_write_WRITE()
    {
        return _ptr_2bit_flag_write_WRITE;
    }
    int8_t Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_number_Of_Implemented_Threads()
    {
        return _number_Of_Implemented_Threads;
    }
    // set.

// private.
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_IDLE()
    {
        std::list<bool> _2bit_flag_write_IDLE = { NULL, NULL };
        create_ptr_2bit_flag_write_IDLE();
        auto temp1 = get_ptr_2bit_flag_write_IDLE()->begin();
        std::advance(temp1, 0);
        *temp1 = bool(false);
        auto temp2 = get_ptr_2bit_flag_write_IDLE()->begin();
        std::advance(temp2, 1);
        *temp2 = bool(false);
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_WAIT()
    {
        std::list<bool> _2bit_flag_write_WAIT = { NULL, NULL };
        create_ptr_2bit_flag_write_WAIT();
        auto temp1 = get_ptr_2bit_flag_write_WAIT()->begin();
        std::advance(temp1, 0);
        *temp1 = bool(false);
        auto temp2 = get_ptr_2bit_flag_write_WAIT()->begin();
        std::advance(temp2, 1);
        *temp2 = bool(true);
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_WRITE()
    {
        std::list<bool> _2bit_flag_write_WRITE = { NULL, NULL };
        create_ptr_2bit_flag_write_WRITE();
        auto temp1 = get_ptr_2bit_flag_write_WRITE()->begin();
        std::advance(temp1, 0);
        *temp1 = bool(true);
        auto temp2 = get_ptr_2bit_flag_write_WRITE()->begin();
        std::advance(temp2, 1);
        *temp2 = bool(false);
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_number_Of_Implemented_Threads()
    {
        set_number_Of_Implemented_Threads(4);
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_ptr_2bit_flag_write_IDLE()
    {
        set_ptr_2bit_flag_write_IDLE(&_2bit_flag_write_IDLE);
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_ptr_2bit_flag_write_WAIT()
    {
        set_ptr_2bit_flag_write_WAIT(&_2bit_flag_write_WAIT);
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::create_ptr_2bit_flag_write_WRITE()
    {
        set_ptr_2bit_flag_write_WRITE(&_2bit_flag_write_WRITE);
    }
    // get.
    std::list<bool> Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_IDLE()
    {
        return _2bit_flag_write_IDLE;
    }
    std::list<bool> Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_WAIT()
    {
        return _2bit_flag_write_WAIT;
    }
    std::list<bool> Avril_FSD::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_WRITE()
    {
        return _2bit_flag_write_WRITE;
    }
    // set.
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_Item_Of_2bit_flag_write_IDLE(int8_t slot, bool newValue)
    {
        auto temp = get_ptr_2bit_flag_write_IDLE()->begin();
        std::advance(temp, slot);
        *temp = newValue;
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_Item_Of_2bit_flag_write_WAIT(int8_t slot, bool newValue)
    {
        auto temp = get_ptr_2bit_flag_write_WAIT()->begin();
        std::advance(temp, slot);
        *temp = newValue;
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_Item_Of_2bit_flag_write_WRITE(int8_t slot, bool newValue)
    {
        auto temp = get_ptr_2bit_flag_write_WRITE()->begin();
        std::advance(temp, slot);
        *temp = newValue;
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_ptr_2bit_flag_write_IDLE(std::list<bool>* newPtr)
    {
        _ptr_2bit_flag_write_IDLE = newPtr;
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_ptr_2bit_flag_write_WAIT(std::list<bool>* newPtr)
    {
        _ptr_2bit_flag_write_WAIT = newPtr;
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_ptr_2bit_flag_write_WRITE(std::list<bool>* newPtr)
    {
        _ptr_2bit_flag_write_WRITE = newPtr;
    }
    void Avril_FSD::WriteEnableForThreadsAt_STACK_Global::set_number_Of_Implemented_Threads(int8_t newValue)
    {
        _number_Of_Implemented_Threads = newValue;
    }
