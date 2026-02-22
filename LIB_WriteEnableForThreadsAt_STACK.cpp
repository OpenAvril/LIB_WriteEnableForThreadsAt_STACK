#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"

OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* _ptr_WriteEnableForThreadsAt_STACK_Framework = NULL;

OpenAvrilLIB::Library_WriteEnableForThreadsAt_STACK::Library_WriteEnableForThreadsAt_STACK()
{

}
void* OpenAvrilLIB::Library_WriteEnableForThreadsAt_STACK::create_Program()
{
    set_ptr_Framework(new class OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework());
    while (get_ptr_Framework() == NULL) {}
    get_ptr_Framework()->initialise(get_ptr_Framework());
    return (void*)get_ptr_Framework();
}
void OpenAvrilLIB::Library_WriteEnableForThreadsAt_STACK::write_End(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId)
{
    obj->get_ptr_WriteEnable()->write_End(obj, coreId);
}
void OpenAvrilLIB::Library_WriteEnableForThreadsAt_STACK::write_Start(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, int8_t coreId)
{
    obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
}
OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilLIB::Library_WriteEnableForThreadsAt_STACK::get_ptr_Framework()
{
    return _ptr_WriteEnableForThreadsAt_STACK_Framework;
}
void OpenAvrilLIB::Library_WriteEnableForThreadsAt_STACK::set_ptr_Framework(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* writeEnable)
{
    _ptr_WriteEnableForThreadsAt_STACK_Framework = writeEnable;
}