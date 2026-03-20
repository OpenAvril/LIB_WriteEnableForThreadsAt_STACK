#include "pch.h"
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::_CLASS_get_ptr_WriteEnable = NULL;
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
{
	boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework();
	boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework();
	boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework();
	boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework();
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
{
	delete _CLASS_get_ptr_WriteEnable;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered boot0_CLASS_DECLAIRE_Framework_App()" << std::endl;

	std::cout << "exiting boot0_CLASS_DECLAIRE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered boot1_CLASS_DEFINE_Framework_App" << std::endl;
	stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK();
	std::cout << "exiting boot1_CLASS_DEFINE_Framework_App" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered boot3_CLASS_INITIALISE_Framework_App()" << std::endl;
	stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK();
	std::cout << "exiting boot3_CLASS_INITIALISE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered boot0_REG_DECLAIRE_Framework_App()" << std::endl;

	std::cout << "exiting boot0_REG_DECLAIRE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::cout << "entered CLIBMyMath::Framework_App::boot1_REG_DEFINE_Framework_App()" << std::endl;

	std::cout << "exiting CLIBMyMath::Framework_App::boot1_REG_DEFINE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::cout << "entered CLIBMyMath::Framework_App::boot2_REG_SUBSTANTIATE_Framework_App()" << std::endl;

	std::cout << "exiting CLIBMyMath::Framework_App::boot2_REG_SUBSTANTIATE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::cout << "entered CLIBMyMath::Framework_App::boot3_REG_INITIALISE_Framework_App()" << std::endl;

	std::cout << "exiting CLIBMyMath::Framework_App::boot3_REG_INITIALISE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::boot4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	//if thread primed and system initialised, exit, else wait.
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::dyn_CLASS_get_ptr_WriteEnable()
{
	return stat_CLASS_get_ptr_WriteEnable();
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK()
{
	_CLASS_get_ptr_WriteEnable = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK()
{
	_CLASS_get_ptr_WriteEnable = new class OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK();
	while (stat_CLASS_get_ptr_WriteEnable() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _CLASS_get_ptr_WriteEnable;
	}