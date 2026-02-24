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
    // dynamic.
        void initialise_Item_Of_2bit_flag_write_IDLE(std::array<bool, 2>* newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WAIT(std::array<bool, 2>* newINITIALISED_FlagBit);
        void initialise_Item_Of_2bit_flag_write_WRITE(std::array<bool, 2>* newINITIALISED_FlagBit);
        void initialise_number_Of_Implemented_Threads(uint8_t* newValue);
        // get.
        std::array<bool, 2> get_2bit_flag_write_IDLE();
        std::array<bool, 2> get_2bit_flag_write_WAIT();
        std::array<bool, 2> get_2bit_flag_write_WRITE();
        uint8_t get_number_Of_Implemented_Threads();
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
        static void create_2bit_flag_write_IDLE(std::array<bool, 2> newDEAFULT_FlagSet);
        static void create_2bit_flag_write_WAIT(std::array<bool, 2> newDEAFULT_FlagSet);
        static void create_2bit_flag_write_WRITE(std::array<bool, 2>newDEAFULT_FlagSet);
        static void create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value);
        static void create_ptr_2bit_flag_write_IDLE(std::array<bool, 2>* newPtr);
        static void create_ptr_2bit_flag_write_WAIT(std::array<bool, 2>* newPtr);
        static void create_ptr_2bit_flag_write_WRITE(std::array<bool, 2>* newPtr);
        static void create_ptr_number_Of_Implemented_Threads(uint8_t* newPtr);
        // get.
        std::array<bool, 2> stat_get_2bit_flag_write_IDLE();
        std::array<bool, 2> stat_get_2bit_flag_write_WAIT();
        std::array<bool, 2> stat_get_2bit_flag_write_WRITE();
        uint8_t stat_get_number_Of_Implemented_Threads();
        static std::array<bool, 2>* stat_get_ptr_2bit_flag_write_IDLE();
        static std::array<bool, 2>* stat_get_ptr_2bit_flag_write_WAIT();
        static std::array<bool, 2>* stat_get_ptr_2bit_flag_write_WRITE();
        static uint8_t* stat_get_ptr_number_Of_Implemented_Threads();
        // set.
        static void stat_set_2bit_flag_write_IDLE(std::array<bool, 2> new_FlagBitSet);
        static void stat_set_2bit_flag_write_WAIT(std::array<bool, 2> new_FlagBitSet);
        static void stat_set_2bit_flag_write_WRITE(std::array<bool, 2> new_FlagBitSet);
        static void stat_set_number_Of_Implemented_Threads(uint8_t newValue);
        static void stat_set_ptr_2bit_flag_write_IDLE(std::array<bool, 2>* newPtr);
        static void stat_set_ptr_2bit_flag_write_WAIT(std::array<bool, 2>* newPtr);
        static void stat_set_ptr_2bit_flag_write_WRITE(std::array<bool, 2>* newPtr);
        static void stat_set_ptr_number_Of_Implemented_Threads(uint8_t* newPtr);
    };
}

