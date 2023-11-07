// 文件：get_mem_info.c
// 实现了 get_mem_info() 函数

#include "head.h"
#include <sys/syscall.h>
#include <sys/sysinfo.h>

// 函数定义
void get_mem_info(void) {

  // 获取内存信息
  struct sysinfo info;
  sysinfo(&info);

  // 打印内存信息
  printf("Total RAM: %llu bytes\n", info.totalram * info.mem_unit);
  printf("Free RAM: %llu bytes\n", info.freeram * info.mem_unit);
}
