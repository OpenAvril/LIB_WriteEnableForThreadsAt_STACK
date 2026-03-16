#include "pch.h"
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::_CLASS_get_ptr_WriteEnable = NULL;
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
{
	stat_CLASS_create_WriteEnable();
}
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
{
	delete _CLASS_get_ptr_WriteEnable;
}
void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::dyn_initialise(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::array<bool, 2>* ptr_newINITIALISED_boolList = new std::array<bool, 2>;
	while (ptr_newINITIALISED_boolList == NULL) {}
	*ptr_newINITIALISED_boolList = { false, false };
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_initialise_Item_Of_ptr_3STATE_flag_IDLE(ptr_newINITIALISED_boolList);
	*ptr_newINITIALISED_boolList = { false, true };
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_initialise_Item_Of_ptr_3STATE_flag_WAIT(ptr_newINITIALISED_boolList);
	*ptr_newINITIALISED_boolList = { true, false };
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_initialise_Item_Of_ptr_3STATE_flag_WRITE(ptr_newINITIALISED_boolList);
	delete ptr_newINITIALISED_boolList;

	uint8_t* newINITIALISED_uint32_t1 = new uint8_t(UINT8_MAX);
	*newINITIALISED_uint32_t1 = 4;//NUMBER OF THREADS
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_initialise_Ptr_number_Of_Implemented_Threads(newINITIALISED_uint32_t1);
	delete newINITIALISED_uint32_t1;
		
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_initialise_Control(obj);
		
	bool* newINITIALISED_bool = new bool(false);
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_flag_praisingWrite(newINITIALISED_bool);
	delete newINITIALISED_bool;

	uint8_t* newINITIALISED_uint8_t2 = new uint8_t(UINT8_MAX);
	*newINITIALISED_uint8_t2 = 0;
	for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
	{
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_Item_On_QUE_List_Of_ThreadToWrite(concurrentThreadID, &concurrentThreadID);
	}
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_writeCycle_Try_ThreadId_Index(newINITIALISED_uint8_t2);
	*newINITIALISED_uint8_t2 = 1;
	obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_new_writeCycle_Try_ThreadId_Index(newINITIALISED_uint8_t2);
	delete newINITIALISED_uint8_t2;
		
	uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
	while (newINITIALISED_uint32_t == NULL) {}
	*newINITIALISED_uint32_t = 0;
	for (uint8_t concurrentThreadID = 0; concurrentThreadID < (uint8_t)(obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_Global()->dyn_REG_get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
	{
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_Item_On_list_Of_WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_Item_On_list_Of_WriteIDLE_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
		obj->dyn_CLASS_get_ptr_WriteEnable()->dyn_CLASS_get_ptr_WriteEnable_Control()->dyn_REG_initialise_Item_On_list_Of_WriteWAIT_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
	}
	delete newINITIALISED_uint32_t;
}
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::dyn_CLASS_get_ptr_WriteEnable()
{
	return stat_CLASS_get_ptr_WriteEnable();
}
void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_create_WriteEnable()
{
	_CLASS_get_ptr_WriteEnable = new class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK();
	while (stat_CLASS_get_ptr_WriteEnable() == NULL) {}
}
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _CLASS_get_ptr_WriteEnable;
	}