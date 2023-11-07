// 文件：get_disk_info.c
// 实现了 get_disk_info() 函数

#include "head.h"
#include <sys/statfs.h>

// 函数定义
void get_disk_info(void) {
  // 获取文件系统信息
  struct statfs disk_info;
  statfs("/", &disk_info);

  // 获取磁盘总大小
  long long total_size = disk_info.f_blocks * disk_info.f_bsize;

  // 获取磁盘可用空间
  long long available_size = disk_info.f_bavail * disk_info.f_bsize;

  // 打印磁盘信息
  printf("磁盘总大小：%lld 字节\n", total_size);
  printf("磁盘可用空间：%lld 字节\n", available_size);
}
