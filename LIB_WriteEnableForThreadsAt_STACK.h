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
// constructor.
		CLIDWriteEnableForThreadsAtSTACK();

// destructor.

// public.
	// dynamic.
		//static void* generate_Program();//ToDO: uncomment for C#.
		static void* generate_Program();//ToDO: uncomment for C++.
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