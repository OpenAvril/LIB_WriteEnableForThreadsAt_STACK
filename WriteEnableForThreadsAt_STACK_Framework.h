#pragma once
namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK_Framework
    {
    public:
        WriteEnableForThreadsAt_STACK_Framework();
        virtual ~WriteEnableForThreadsAt_STACK_Framework();
        void app_initialise(class WriteEnableForThreadsAt_STACK_Framework* obj);
        class WriteEnableForThreadsAt_STACK* dyn_CLASS_get_ptr_WriteEnable();
    private:
        static class WriteEnableForThreadsAt_STACK* _CLASS_get_ptr_WriteEnable;
        static void stat_CLASS_create_WriteEnable();
        static class WriteEnableForThreadsAt_STACK* stat_CLASS_get_ptr_WriteEnable();
    };
}