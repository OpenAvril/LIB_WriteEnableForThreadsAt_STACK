#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"


// pointers.
	// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::generate_Program()
	{
		stat_create_Framework();
		while (stat_get_ptr_Framework() == NULL) {}
		stat_get_ptr_Framework()->dyn_initialise(stat_get_ptr_Framework());
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|        MIT Write Que .dll         |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		return (void*)stat_get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::terminate_Program()
	{
		delete _ptr_Framework_WriteEnableForThreadsAt_STACK;
		while (stat_get_ptr_Framework() != NULL) {}
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::write_End(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::write_Start(void* obj, uint8_t coreId)
	{
		OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_OBJ_get_ClassOf(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_OBJ_get_ClassOf(obj), coreId);
	}
		// get.
		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_create_Framework()
	{
		_ptr_Framework_WriteEnableForThreadsAt_STACK = new WriteEnableForThreadsAt_STACK_Framework();
		while (stat_get_ptr_Framework() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_STACK;
	}
		// set.