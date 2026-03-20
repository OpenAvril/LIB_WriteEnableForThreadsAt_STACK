#ifdef LIBWRITEENABLEFORTHREADSATSTACK_EXPORTS
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllexport)
#else
#define LIBWRITEENABLEFORTHREADSATSTACK_API __declspec(dllimport)
#endif
extern "C"
{
	namespace OpenAvrilCLIBWriteEnableForThreadsAtSTACK
	{
		class LIBWRITEENABLEFORTHREADSATSTACK_API CLIBWriteEnableForThreadsAtSTACK
		{
		public:
			static void* app_FUNCT_generate_Program();
			static void app_FUNCT_terminate_Program();
			static void app_FUNCT_write_End(void*, unsigned char* bytes);
			static void app_FUNCT_write_Start(void*, unsigned char* bytes);
		private:
			static void stat_app1_CLASS_DEFINE_Framework();
			static void stat_app3_CLASS_INITIALISE_Framework();
			static class WriteEnableForThreadsAt_STACK_Framework* stat_CLASS_get_ptr_Framework();
		};
	}
}