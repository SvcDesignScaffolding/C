/* filename: get_cpu_info.c
*  实现了 get_cpu_info() 函数
*/

#include "head.h"
#include <sys/types.h>

// 函数定义
void get_cpu_info(void) {
  // 获取 CPU 数量
  int cpu_count = sysconf(_SC_NPROCESSORS_ONLN);

  // 获取 CPU 频率
  long long cpu_mhz = sysconf(_SC_CLK_TCK);

  // 获取 CPU 型号
  char cpu_model[100];
  uname(cpu_model, 100);

  // 打印 CPU 信息
  printf("CPU 数量：%d\n", cpu_count);
  printf("CPU 频率：%lld MHz\n", cpu_mhz);
  printf("CPU 型号：%s\n", cpu_model);
}
