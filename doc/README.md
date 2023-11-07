get_cpu_info.c：包含 get_cpu_count() 和 get_cpu_mhz() 函数的实现。
get_disk_info.c：包含 get_disk_total() 和 get_disk_free() 函数的实现。
get_kernel_info.c：包含 get_kernel_version() 和 get_kernel_architecture() 函数的实现。
get_memory_info.c：包含 get_memory_total() 和 get_memory_free() 函数的实现。
get_system_version.c：包含 get_system_version() 函数的实现。
这些源文件都需要包含 head.h 头文件，以便使用 get_cpu_info()、get_disk_info()、get_kernel_info()、get_memory_info() 和 get_system_version() 函数。
