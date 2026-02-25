#ifdef LIBWRITEENABLEFORTHREADSATSTACK_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllimport)
#endif

namespace OpenAvrilLIB
{
	class LIBWRITEENABLEFORTHREADSATSTACK_API CLIDWriteEnableForThreadsAtSTACK 
	{
	public:
// constructor.
		CLIDWriteEnableForThreadsAtSTACK();

// destructor.

// public.
	// dynamic.
		static void* generate_Program();
		static void write_End(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
		static void write_Start(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
		// get.
		static class WriteEnableForThreadsAt_STACK_Framework* get_ptr_Framework();
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
		static void create_Framework();
		// get.
				static WriteEnableForThreadsAt_STACK_Framework* stat_get_ptr_Framework();
		// set.
		static void stat_set_ptr_Framework(class WriteEnableForThreadsAt_STACK_Framework* newPtr);
	// pointers.
		// classes.
		static WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK;
		// registers.
	};
}