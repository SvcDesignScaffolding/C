// 文件：main.c
// 包含了 main() 函数，并引用了 head.h 头文件

#include "head.h"

int main(int argc, char **argv) {
  // 处理命令行参数
  if (argc == 2 && strcmp(argv[1], "-h") == 0) {
    printf("usage: sysinfo [-h]\n\n");
    printf("-h 显示帮助信息\n");
    return 0;
  }

  // 获取系统版本信息
  get_system_version();

  // 获取 CPU/Mem 信息
  get_cpu_info();
  get_mem_info();

  // 获取系统磁盘信息
  get_disk_info();

  return 0;
}
