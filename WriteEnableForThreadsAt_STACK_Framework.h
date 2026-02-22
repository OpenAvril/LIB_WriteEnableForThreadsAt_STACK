#pragma once

namespace OpenAvrilLIB
{
    class WriteEnableForThreadsAt_STACK_Framework
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_STACK_Framework();

// destructor.
        virtual ~WriteEnableForThreadsAt_STACK_Framework();

// public.
        void initialise(class WriteEnableForThreadsAt_STACK_Framework* obj);
    // get.
        class WriteEnableForThreadsAt_STACK* get_ptr_WriteEnable();
    // set.

    private:
// private.
        void create_ptr_WriteEnable();
    // get.
    // set.
        void set_ptr_WriteEnable(class WriteEnableForThreadsAt_STACK* writeEnable);
    };
}