// 文件：get_memory_info.c
// 实现了 get_memory_info() 函数

#include "head.h"
#include <sys/syscall.h>
#include <sys/sysinfo.h>

// 函数定义
void get_memory_info(void) {

  // 获取内存信息
  struct sysinfo sysinfo;
  get_memory_info();

  // 打印内存信息
  printf("Total RAM: %llu bytes\n", sysinfo.totalram * sysinfo.mem_unit);
  printf("Free RAM: %llu bytes\n", sysinfo.freeram * sysinfo.mem_unit);
}
