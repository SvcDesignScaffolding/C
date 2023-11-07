#include <stdio.h>
#include <stdlib.h>
#include "lib/get_cpu_info.c"
#include "lib/get_disk_info.c"
#include "lib/get_memory_info.c"
#include "lib/get_system_version.c"

// 测试 CPU 信息
void test_cpu_info(void) {
  // 获取 CPU 信息
  get_cpu_info();

  // 断言 CPU 数量正确
  assert(cpu_count > 0);

  // 断言 CPU 频率正确
  assert(cpu_mhz > 0);

  // 断言 CPU 型号正确
  assert(cpu_model != NULL);
}

// 测试磁盘信息
void test_disk_info(void) {
  // 获取磁盘信息
  get_disk_info();

  // 断言磁盘总大小正确
  assert(total_size > 0);

  // 断言磁盘可用空间正确
  assert(available_size > 0);
}

// 测试内存信息
void test_memory_info(void) {
  // 获取内存信息
  get_memory_info();

  // 断言内存总量正确
  assert(total_mem > 0);

  // 断言内存可用空间正确
  assert(available_mem > 0);
}

// 测试系统版本信息
void test_system_version(void) {
  // 获取系统版本信息
  get_system_version();

  // 断言系统名称正确
  assert(sysname != NULL);

  // 断言系统版本正确
  assert(release != NULL);
}

int main(void) {
  // 运行单元测试
  test_cpu_info();
  test_disk_info();
  test_memory_info();
  test_system_version();

  return 0;
}
