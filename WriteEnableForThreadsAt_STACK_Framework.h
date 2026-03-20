#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK_Framework
    {
    public:
        WriteEnableForThreadsAt_STACK_Framework();
        virtual ~WriteEnableForThreadsAt_STACK_Framework();
        static void app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework();
        static void app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework();
        static void app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework();
        static void app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework();
        void app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app_initialise(class WriteEnableForThreadsAt_STACK_Framework* obj);
        class WriteEnableForThreadsAt_STACK* dyn_CLASS_get_ptr_WriteEnable();
    private:
        static class WriteEnableForThreadsAt_STACK* _CLASS_get_ptr_WriteEnable;
        static void stat_CLASS_app1_DEFINE_WriteEnableForThreadsAt_STACK();
        static void stat_CLASS_app3_INITIALISE_WriteEnableForThreadsAt_STACK();
        static class WriteEnableForThreadsAt_STACK* stat_CLASS_get_ptr_WriteEnable();
    };
}