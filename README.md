# OpenAvrilLIB.
## .DLL Library Template - Request, Wait, Write for Threads at STACK.

### Using C++.

### Using Windows 11 Home.
Edition: Windows 11 Home OEM System Builder

Version: 24H2

### Using Microsoft Visual Studio Professional 2022 (64-bit).

Version 17.13.4

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
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSTACK
	{
		class LIBWRITEENABLEFORTHREADSATSTACK_API CLIBWriteEnableForThreadsAtSTACK
		{
		public:
			static void* app_FUNCT_generate_Program();
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_write_End(void*, unsigned char* bytes);
			static void app_FUNCT_write_Start(void*, unsigned char* bytes);
		private:
			static void stat_app1_CLASS_DEFINE_Framework();
			static void stat_app3_CLASS_INITIALISE_Framework();
			static class WriteEnableForThreadsAt_STACK_Framework* stat_CLASS_get_ptr_Framework();
		};
	}
}
````
#### LIB_WriteEnableForThreadsAt_STACK.cpp
````
#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"
class OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK;
void* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_generate_Program()
{
	std::cout << "started Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;
	stat_app1_CLASS_DEFINE_Framework();
	stat_app3_CLASS_INITIALISE_Framework();
	std::cout << "done Classes - DECLAIRE, DEFINE INITIALISE, Registers - DECLAIRE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_Framework()->app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "started Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "started Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_Framework()->app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "started Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_Framework()->app4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(stat_CLASS_get_ptr_Framework());
	std::cout << "started Program - INSTANTIATE." << std::endl;

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
	return (void*)stat_CLASS_get_ptr_Framework();
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_terminate_Program()
{
	delete _ptr_Framework_WriteEnableForThreadsAt_STACK;
	while (stat_CLASS_get_ptr_Framework() != NULL) {}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_write_End(void* obj, unsigned char* bytes)
{
	OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_End(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::app_FUNCT_write_Start(void* obj, unsigned char* bytes)
{
	OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_app_FUNCT_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_app1_CLASS_DEFINE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_app3_CLASS_INITIALISE_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_STACK = new class OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework();
	while (stat_CLASS_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIBWriteEnableForThreadsAtSTACK::stat_CLASS_get_ptr_Framework()
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
- https://github.com/OpenAvril/TestBench_OpenAvril
