# OpenAvrilLIB
## .DLL Library Template - Request, Wait, Write for Threads at STACK.

### Using C++

### Using Windows 11 Home
Edition: Windows 11 Home OEM System Builder

Version: 24H2

### Using Microsoft Visual Studio Professional 2022 (64-bit) - Current

Version 17.13.4

## Using
### C++
#### LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h
````
#ifdef LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION
{
	class LIBWRITEENABLEFORTHREADSATSERVERINPUTACTION_API CLIDWriteEnableForThreadsAtSERVERINPUTACTION 
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		CLIDWriteEnableForThreadsAtSERVERINPUTACTION();

// destructor.

// public.
	// dynamic.
		static void* create_Program();
		static void write_End(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* get_ptr_Framework();
		// set.
	// static.
		// get.
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		// set.
		static void set_ptr_Framework(class WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* writeEnable);
	};
}
````
#### LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.cpp
````
#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"

// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::create_Program()
	{
		set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework * OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION;
	}

		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = writeEnable;
	}
````
#### LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h
````
#ifdef LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE
{
	class LIBWRITEENABLEFORTHREADSATSERVEROUTPUTRECIEVE_API CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE 
	{
// classes.

// registers.

// pointers.

	public:
// constructor.
		CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE();

// destructor.

// public.
	// dynamic.
		static void* create_Program();
		static void write_End(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* get_ptr_Framework();
		// set.
	// static.
		// get.
		// set.

	private:
// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		// set.
		static void set_ptr_Framework(class WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable);
	};
}
````
#### LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.cpp
````
#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"

// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::create_Program()
	{
		set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework * OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE;
	}

		// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
		// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE = writeEnable;
	}
````

### C#
#### IMPORT_LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.cs
````
﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class WriteEnableForThreadsAtCLIENTINPUTACTION
    {
        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?create_Program@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?write_End@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAXPAVWriteEnableForThreadsAt_CLIENTINPUTACTION_Framework@2@E@Z")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.dll", EntryPoint = "?write_Start@CLIDWriteEnableForThreadsAtCLIENTINPUTACTION@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION@@SAXPAVWriteEnableForThreadsAt_CLIENTINPUTACTION_Framework@2@E@Z")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}
````
#### IMPORT_LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.cs
````
﻿using System.Runtime.InteropServices;
using System.Security;
using System;

namespace OpenAvrilCLIB
{
    [SuppressUnmanagedCodeSecurity]
    public static class WriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
    {
        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?create_Program@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAPAXXZ")]
        public static extern IntPtr create_Program();

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?write_End@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAXPAVWriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework@2@E@Z")]
        public static extern void write_End(IntPtr obj, byte coreId);

        [DllImport("LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.dll", EntryPoint = "?write_Start@CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE@@SAXPAVWriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework@2@E@Z")]
        public static extern void write_Start(IntPtr obj, byte coreId);
    }
}
````

## TestBench(s) in C#.
 - https://github.com/OpenAvril/TESTBENCH_OpenAvril
