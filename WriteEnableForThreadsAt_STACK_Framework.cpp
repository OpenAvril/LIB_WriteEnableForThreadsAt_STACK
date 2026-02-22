#include "pch.h"

// classes.
	class Avril_FSD::WriteEnableForThreadsAt_STACK* _ptr_WriteEnable = NULL;

// registers.

// pointers.

// constructor.
	Avril_FSD::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
	{
		create_ptr_WriteEnable();
	}

// destructor.
	Avril_FSD::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
	{
		delete _ptr_WriteEnable;
	}

	void Avril_FSD::WriteEnableForThreadsAt_STACK_Framework::initialise(Avril_FSD::WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		obj->get_ptr_WriteEnable()->initialise_Control(obj);
	}

	// public.
	// get.
	Avril_FSD::WriteEnableForThreadsAt_STACK* Avril_FSD::WriteEnableForThreadsAt_STACK_Framework::get_ptr_WriteEnable()
	{
		return _ptr_WriteEnable;
	}
	// set.

// private.
	void Avril_FSD::WriteEnableForThreadsAt_STACK_Framework::create_ptr_WriteEnable()
	{
		set_ptr_WriteEnable(new class Avril_FSD::WriteEnableForThreadsAt_STACK());
		while (get_ptr_WriteEnable() == NULL) { }
	}
	// get.
	// set.
	void Avril_FSD::WriteEnableForThreadsAt_STACK_Framework::set_ptr_WriteEnable(Avril_FSD::WriteEnableForThreadsAt_STACK* writeEnable)
	{
		_ptr_WriteEnable = writeEnable;
	}