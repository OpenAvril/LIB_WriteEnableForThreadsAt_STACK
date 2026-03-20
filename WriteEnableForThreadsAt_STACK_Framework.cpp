#include "pch.h"
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::_CLASS_get_ptr_WriteEnable = NULL;
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
{
	app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework();
	app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework();
	app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework();
	app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework();
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
{
	delete _CLASS_get_ptr_WriteEnable;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered app0_CLASS_DECLAIRE_Framework_App()" << std::endl;

	std::cout << "exiting app0_CLASS_DECLAIRE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered app1_CLASS_DEFINE_Framework_App" << std::endl;
	stat_CLASS_app1_DEFINE_WriteEnableForThreadsAt_STACK();
	std::cout << "exiting app1_CLASS_DEFINE_Framework_App" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered app3_CLASS_INITIALISE_Framework_App()" << std::endl;
	stat_CLASS_app3_INITIALISE_WriteEnableForThreadsAt_STACK();
	std::cout << "exiting app3_CLASS_INITIALISE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Framework()
{
	std::cout << "entered app0_REG_DECLAIRE_Framework_App()" << std::endl;

	std::cout << "exiting app0_REG_DECLAIRE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::cout << "entered CLIBMyMath::Framework_App::app1_REG_DEFINE_Framework_App()" << std::endl;

	std::cout << "exiting CLIBMyMath::Framework_App::app1_REG_DEFINE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::cout << "entered CLIBMyMath::Framework_App::app2_REG_SUBSTANTIATE_Framework_App()" << std::endl;

	std::cout << "exiting CLIBMyMath::Framework_App::app2_REG_SUBSTANTIATE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	std::cout << "entered CLIBMyMath::Framework_App::app3_REG_INITIALISE_Framework_App()" << std::endl;

	std::cout << "exiting CLIBMyMath::Framework_App::app3_REG_INITIALISE_Framework_App()" << std::endl;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::app4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
{
	//if thread primed and system initialised, exit, else wait.
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::dyn_CLASS_get_ptr_WriteEnable()
{
	return stat_CLASS_get_ptr_WriteEnable();
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_app1_DEFINE_WriteEnableForThreadsAt_STACK()
{
	_CLASS_get_ptr_WriteEnable = NULL;
}
void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_app3_INITIALISE_WriteEnableForThreadsAt_STACK()
{
	_CLASS_get_ptr_WriteEnable = new class OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK();
	while (stat_CLASS_get_ptr_WriteEnable() == NULL) {}
}
OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_CLASS_get_ptr_WriteEnable()
	{
		return _CLASS_get_ptr_WriteEnable;
	}