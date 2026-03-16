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
#### LIB_WriteEnableForThreadsAt_STACK.h
````
#ifdef LIBWRITEENABLEFORTHREADSATSTACK_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllimport)
#endif

namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
{
	class LIBWRITEENABLEFORTHREADSATSTACK_API CLIDWriteEnableForThreadsAtSTACK 
	{
	public:
// public.
	// constructor.
		CLIDWriteEnableForThreadsAtSTACK();

	// destructor.

	// dynamic.
		static void* generate_Program();
		static void terminate_Program();
		static void write_End(void*, uint8_t coreId);
		static void write_Start(void*, uint8_t coreId);
		// get.
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
		static void stat_create_Framework();
		// get.
		static class WriteEnableForThreadsAt_STACK_Framework* stat_get_ptr_Framework();
		// set.
	// pointers.
		// classes.
		// registers.
	};
}
````
