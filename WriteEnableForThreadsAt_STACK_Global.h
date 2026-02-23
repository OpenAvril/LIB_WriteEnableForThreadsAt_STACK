#pragma once

namespace OpenAvrilLIB
{
    class WriteEnableForThreadsAt_STACK_Global
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_STACK_Global();

// destructor.
        ~WriteEnableForThreadsAt_STACK_Global();

// public.
        void initialise_Item_Of_2bit_flag_write_IDLE(uint8_t slot, bool newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WAIT(uint8_t slot, bool newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WRITE(uint8_t slot, bool newINITIALISED_FlagBit);
        void initialise_number_Of_Implemented_Threads(uint8_t* newValue);
    // get.
        std::list<bool>* get_ptr_2bit_flag_write_IDLE();
        std::list<bool>* get_ptr_2bit_flag_write_WAIT();
        std::list<bool>* get_ptr_2bit_flag_write_WRITE();
        uint8_t get_number_Of_Implemented_Threads();
    // set.

// private.
        void create_2bit_flag_write_IDLE(bool newDEAFULT_FlagBit);
        void create_2bit_flag_write_WAIT(bool newDEAFULT_FlagBit);
        void create_2bit_flag_write_WRITE(bool newDEAFULT_FlagBit);
        void create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value);
        void create_ptr_2bit_flag_write_IDLE();
        void create_ptr_2bit_flag_write_WAIT();
        void create_ptr_2bit_flag_write_WRITE();
    // get.
        std::list<bool> get_2bit_flag_write_IDLE();
        std::list<bool> get_2bit_flag_write_WAIT();
        std::list<bool> get_2bit_flag_write_WRITE();
    // set.
        void set_Item_Of_2bit_flag_write_IDLE(uint8_t slot, bool newValue);
        void set_Item_Of_2bit_flag_write_WAIT(uint8_t slot, bool newValue);
        void set_Item_Of_2bit_flag_write_WRITE(uint8_t slot, bool newValue);
        void set_ptr_2bit_flag_write_IDLE(std::list<bool>* newPtr);
        void set_ptr_2bit_flag_write_WAIT(std::list<bool>* newPtr);
        void set_ptr_2bit_flag_write_WRITE(std::list<bool>* newPtr);
        void set_number_Of_Implemented_Threads(uint8_t newValue);
    };
}

