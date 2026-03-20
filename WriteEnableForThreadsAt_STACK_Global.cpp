#include "pch.h"
    std::array<bool, 2>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_3STATE_flag_IDLE = NULL;
    std::array<bool, 2>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_3STATE_flag_WAIT = NULL;
    std::array<bool, 2>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_3STATE_flag_WRITE = NULL;
    uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_REG_ptr_number_Of_Implemented_Threads = NULL;
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::WriteEnableForThreadsAt_STACK_Global()
    {
        app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global();
        app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global();
        app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global();
        app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::~WriteEnableForThreadsAt_STACK_Global()
    {
        delete _REG_ptr_3STATE_flag_IDLE;
        delete _REG_ptr_3STATE_flag_WAIT;
        delete _REG_ptr_3STATE_flag_WRITE;
        delete _REG_ptr_number_Of_Implemented_Threads;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app0_CLASS_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered app0_CLASS_DECLAIRE_Framework_App()" << std::endl;

        std::cout << "exiting app0_CLASS_DECLAIRE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app1_CLASS_DEFINE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered app1_CLASS_DEFINE_Framework_App" << std::endl;

        std::cout << "exiting app1_CLASS_DEFINE_Framework_App" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app3_CLASS_INITIALISE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered app3_CLASS_INITIALISE_Framework_App()" << std::endl;

        std::cout << "exiting app3_CLASS_INITIALISE_Framework_App()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()
    {
        std::cout << "entered app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;

        std::cout << "exiting app0_REG_DECLAIRE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
        stat_REG_app1_DEFINE_ptr_3STATE_flag_IDLE();
        stat_REG_app1_DEFINE_ptr_3STATE_flag_WAIT();
        stat_REG_app1_DEFINE_ptr_3STATE_flag_WRITE();
        stat_REG_app1_DEFINE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting app1_REG_DEFINE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
        stat_REG_app2_SUBSTANTIATE_ptr_3STATE_flag_IDLE();
        stat_REG_app2_SUBSTANTIATE_ptr_3STATE_flag_WAIT();
        stat_REG_app2_SUBSTANTIATE_ptr_3STATE_flag_WRITE();
        stat_REG_app2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads();
        std::cout << "exiting app2_REG_SUBSTANTIATE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        std::cout << "entered app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
        stat_REG_app3_INITIALISE_ptr_3STATE_flag_IDLE();
        stat_REG_app3_INITIALISE_ptr_3STATE_flag_WAIT();
        stat_REG_app3_INITIALISE_ptr_3STATE_flag_WRITE();
        std::cout << "exiting app3_REG_INITIALISE_WriteEnableForThreadsAt_STACK_Global()" << std::endl;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::app4_PGM_INSTANTIATE_WriteEnableForThreadsAt_STACK_Global(OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
    std::array<bool, 2> OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_3STATE_flag_IDLE()
    {
        return *stat_REG_get_ptr_3STATE_flag_IDLE();
    }
    std::array<bool, 2> OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_3STATE_flag_WAIT()
    {
        return *stat_REG_get_ptr_3STATE_flag_WAIT();
    }
    std::array<bool, 2> OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_3STATE_flag_WRITE()
    {
        return *stat_REG_get_ptr_3STATE_flag_WRITE();
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::dyn_REG_get_number_Of_Implemented_Threads()
    {
        return *stat_REG_get_ptr_number_Of_Implemented_Threads();
    }
    uint8_t OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ByteArray_to_uint8_t(unsigned char* bytes)
    {
        uint8_t cpp_uint8_t_value;
        std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
        return cpp_uint8_t_value;
    }
    OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_ObjPtr_to_Class(void* obj)
    {
        return reinterpret_cast<OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework*>(obj);
    }
    unsigned char* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_CONVERT_uint8_t_to_ByteArray(uint8_t uint8_t_Value)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
        return bytes_array;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app1_DEFINE_ptr_3STATE_flag_IDLE()
    {
        _REG_ptr_3STATE_flag_IDLE = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app1_DEFINE_ptr_3STATE_flag_WAIT()
    {
        _REG_ptr_3STATE_flag_WAIT = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app1_DEFINE_ptr_3STATE_flag_WRITE()
    {
        _REG_ptr_3STATE_flag_WRITE = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app1_DEFINE_ptr_number_Of_Implemented_Threads()
    {
        _REG_ptr_number_Of_Implemented_Threads = NULL;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app2_SUBSTANTIATE_ptr_3STATE_flag_IDLE()
    {
        _REG_ptr_3STATE_flag_IDLE = new std::array<bool, 2>();
        while (stat_REG_get_ptr_3STATE_flag_IDLE() == NULL) {}
        *_REG_ptr_3STATE_flag_IDLE = { true, true };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app2_SUBSTANTIATE_ptr_3STATE_flag_WAIT()
    {
        _REG_ptr_3STATE_flag_WAIT = new std::array<bool, 2>();
        while (stat_REG_get_ptr_3STATE_flag_WAIT() == NULL) {}
        *_REG_ptr_3STATE_flag_WAIT = { true, true };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app2_SUBSTANTIATE_ptr_3STATE_flag_WRITE()
    {
        _REG_ptr_3STATE_flag_WRITE = new std::array<bool, 2>();
        while (stat_REG_get_ptr_3STATE_flag_WRITE() == NULL) {}
        *_REG_ptr_3STATE_flag_WRITE = { true, true };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app2_SUBSTANTIATE_ptr_number_Of_Implemented_Threads()
    {
        _REG_ptr_number_Of_Implemented_Threads = new uint8_t(UINT8_MAX);
        while (stat_REG_get_ptr_number_Of_Implemented_Threads() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app3_INITIALISE_ptr_3STATE_flag_IDLE()
    {
        *_REG_ptr_3STATE_flag_IDLE = { false, false };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app3_INITIALISE_ptr_3STATE_flag_WAIT()
    {
        *_REG_ptr_3STATE_flag_WAIT = { false, true };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app3_INITIALISE_ptr_3STATE_flag_WRITE()
    {
        *_REG_ptr_3STATE_flag_WRITE = { true, false };
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_app3_INITIALISE_ptr_number_Of_Implemented_Threads()
    {
        *_REG_ptr_number_Of_Implemented_Threads = uint8_t(4);
    }
    std::array<bool, 2>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_3STATE_flag_IDLE()
    {
        return _REG_ptr_3STATE_flag_IDLE;
    }
    std::array<bool, 2>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_3STATE_flag_WAIT()
    {
        return _REG_ptr_3STATE_flag_WAIT;
    }
    std::array<bool, 2>* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_3STATE_flag_WRITE()
    {
        return _REG_ptr_3STATE_flag_WRITE;
    }
    uint8_t* OpenAvrilCLIBWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_REG_get_ptr_number_Of_Implemented_Threads()
    {
        return _REG_ptr_number_Of_Implemented_Threads;
    }