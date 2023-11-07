// 文件：get_system_version.c
// 实现了 get_system_version() 函数

#include "head.h"
#include <sys/utsname.h>

// 函数定义
void get_system_version(void) {
  // 获取系统名称和版本
  struct utsname os;
  uname(&os);

  // 打印系统信息
  printf("系统名称：%s\n", os.sysname);
  printf("系统版本：%s\n", os.release);
  printf("内核版本：%s\n", os.version);
}
