#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
void* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::generate_Program()
{
	stat_create_Framework();
	stat_get_ptr_Framework()->app_initialise(stat_get_ptr_Framework());
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
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::terminate_Program()
{
	delete _ptr_Framework_WriteEnableForThreadsAt_STACK;
	while (stat_get_ptr_Framework() != NULL) {}
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::write_End(void* obj, unsigned char* bytes)
{
	OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_End(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::write_Start(void* obj, unsigned char* bytes)
{
	OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj)->dyn_CLASS_get_ptr_WriteEnable()->dyn_write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(obj), OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(bytes));
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_create_Framework()
{
	_ptr_Framework_WriteEnableForThreadsAt_STACK = new WriteEnableForThreadsAt_STACK_Framework();
	while (stat_get_ptr_Framework() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_get_ptr_Framework()
{
	return _ptr_Framework_WriteEnableForThreadsAt_STACK;
}