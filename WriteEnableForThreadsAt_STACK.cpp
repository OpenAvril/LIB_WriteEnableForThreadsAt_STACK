#include "pch.h"
    class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::_stat_CLASS_ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::_stat_CLASS_ptr_WriteEnable_Control = NULL;
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::WriteEnableForThreadsAt_STACK()
    {
        stat_CLASS_create_ptr_Global();
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::~WriteEnableForThreadsAt_STACK()
    {
        delete _stat_CLASS_ptr_Global;
        delete _stat_CLASS_ptr_WriteEnable_Control;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::app_initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->stat_CLASS_create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_3STATE_flag_IDLE());
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_get_ptr_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_set_flag_praisingWrite(false);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_writeEnable_Request(obj, coreId);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_writeQue_Update(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_writeEnable_SortQue(obj);
        obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->app_writeEnable_Activate(obj, coreId);
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::dyn_CLASS_get_ptr_Global()
    {
        return stat_CLASS_get_ptr_Global();
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::dyn_CLASS_get_ptr_WriteEnable_Control()
    {
        return stat_CLASS_get_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::stat_CLASS_create_ptr_Global()
    {
        _stat_CLASS_ptr_Global = new class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global();
        while (stat_CLASS_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::stat_CLASS_create_ptr_WriteEnable_Control()
    {
        _stat_CLASS_ptr_WriteEnable_Control = new class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control();
        while (stat_CLASS_get_ptr_WriteEnable_Control() == NULL) {}
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::stat_CLASS_get_ptr_Global()
    {
        return _stat_CLASS_ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Control* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK::stat_CLASS_get_ptr_WriteEnable_Control()
    {
        return _stat_CLASS_ptr_WriteEnable_Control;
    }