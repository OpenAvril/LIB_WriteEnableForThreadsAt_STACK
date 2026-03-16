#pragma once
namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK
    {
    public:
        WriteEnableForThreadsAt_STACK();
        virtual ~WriteEnableForThreadsAt_STACK();
        void dyn_initialise_Control(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void dyn_write_End(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
        void dyn_write_Start(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_STACK_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_STACK_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_STACK_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_STACK_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_create_ptr_Global();
        static void stat_CLASS_create_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_STACK_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_STACK_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}