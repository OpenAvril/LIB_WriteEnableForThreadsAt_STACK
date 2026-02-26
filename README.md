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

````
#### LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.cpp
````

````
#### LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h
````

````
#### LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.cpp
````

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
