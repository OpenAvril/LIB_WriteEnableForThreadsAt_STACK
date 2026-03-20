#pragma once
namespace OpenAvrilCLIBWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK
    {
    public:
        WriteEnableForThreadsAt_STACK();
        virtual ~WriteEnableForThreadsAt_STACK();
        static void app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK();
        static void app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK();
        static void app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK();
        static void app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK();
        void app1_REG_DEFINE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void app4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void dyn_app_FUNCT_write_End(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
        void dyn_app_FUNCT_write_Start(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
        class WriteEnableForThreadsAt_STACK_Global* dyn_CLASS_get_ptr_Global();
        class WriteEnableForThreadsAt_STACK_Control* dyn_CLASS_get_ptr_WriteEnable_Control();
        static class WriteEnableForThreadsAt_STACK_Global* _stat_CLASS_ptr_Global;
        static class WriteEnableForThreadsAt_STACK_Control* _stat_CLASS_ptr_WriteEnable_Control;
        static void stat_CLASS_app1_DEFINE_Global();
        static void stat_CLASS_app1_DEFINE_WriteEnable_Control();
        static void stat_CLASS_app3_INITIALISE_Global();
        static void stat_CLASS_app3_INITIALISE_WriteEnable_Control();
        static class WriteEnableForThreadsAt_STACK_Global* stat_CLASS_get_ptr_Global();
        static class WriteEnableForThreadsAt_STACK_Control* stat_CLASS_get_ptr_WriteEnable_Control();
    };
}