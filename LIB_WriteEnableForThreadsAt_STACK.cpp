#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"

// pointers.
	// classes.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::_ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
	// registers.

// constructor.
	OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}
	void OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::write_End(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::write_Start(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::get_ptr_Framework()
	{
		return stat_get_ptr_Framework();
	}
		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_STACK_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_STACK;
	}
	// get.
		// set.
	void OpenAvrilLIB::CLIDWriteEnableForThreadsAtSTACK::stat_set_ptr_Framework(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_STACK = writeEnable;
	}