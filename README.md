# OpenAvrilLIB.
## .DLL Library Template - Request, Wait, Write for Threads at STACK.

### Using C++.

### Using Windows 11 Home.
Edition: Windows 11 Home OEM System Builder

Version: 24H2

### Using Microsoft Visual Studio Professional 2022 (64-bit).

Version 17.13.4

## Branches.

### Main - Stable RELEASE.

### TESTBENCH - with cout<<.


## How To Implement.
### C++.
#### LIB_WriteEnableForThreadsAt_STACK.h.
````
#ifdef LIBWRITEENABLEFORTHREADSATSTACK_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
	{
		class LIBWRITEENABLEFORTHREADSATSTACK_API CLIDWriteEnableForThreadsAtSTACK
		{
		public:
			CLIDWriteEnableForThreadsAtSTACK();
			static void* generate_Program();
			static void terminate_Program();
			static void write_End(void*, uint8_t coreId);
			static void write_Start(void*, uint8_t coreId);
		private:
			static void stat_create_Framework();
			static class WriteEnableForThreadsAt_STACK_Framework* stat_get_ptr_Framework();
		};
	}
}
````
#### LIB_WriteEnableForThreadsAt_STACK.cpp
````
#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK()
{

}
void* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::generate_Program()
{
	stat_create_Framework();
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
void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_create_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_STACK = new WriteEnableForThreadsAt_STACK_Framework();
	while (stat_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_STACK;
}
````

### C#.
````
````

### Java.
````
````

## TestBench.
- https://github.com/OpenAvril/TESTBENCH_OpenAvril
