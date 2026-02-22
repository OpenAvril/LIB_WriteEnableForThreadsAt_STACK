#include "pch.h"

// classes.
	class OpenAvrilLIB::WriteEnableForThreadsAt_STACK* _ptr_WriteEnable = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
	{
		create_ptr_WriteEnable();
	}

// destructor.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
	{
		delete _ptr_WriteEnable;
	}

	void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::initialise(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		obj->get_ptr_WriteEnable()->initialise_Control(obj);
	}

	// public.
	// get.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::get_ptr_WriteEnable()
	{
		return _ptr_WriteEnable;
	}
	// set.

// private.
	void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::create_ptr_WriteEnable()
	{
		set_ptr_WriteEnable(new class OpenAvrilLIB::WriteEnableForThreadsAt_STACK());
		while (get_ptr_WriteEnable() == NULL) { }
	}
	// get.
	// set.
	void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::set_ptr_WriteEnable(OpenAvrilLIB::WriteEnableForThreadsAt_STACK* writeEnable)
	{
		_ptr_WriteEnable = writeEnable;
	}