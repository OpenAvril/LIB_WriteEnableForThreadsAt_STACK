#pragma once

namespace OpenAvrilLIB
{
    class WriteEnableForThreadsAt_STACK
    {
        // classes.

        // registers.

        // pointers.

    public:
        // constructor.
        WriteEnableForThreadsAt_STACK();

        // destructor.
        virtual ~WriteEnableForThreadsAt_STACK();

        // public.
        void initialise_Control(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId);
        // get.
        class WriteEnableForThreadsAt_STACK_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_STACK_Control* get_ptr_WriteEnable_Control();
        // set.

    private:
        // private.
        void create_ptr_Global();
        void create_ptr_WriteEnable_Control();
        // get.
        // set.
        static void set_ptr_Global(class WriteEnableForThreadsAt_STACK_Global* global);
        static void set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_STACK_Control* writeEnableControl);
    };
}