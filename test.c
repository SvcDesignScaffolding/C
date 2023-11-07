#include "head.h"
#include <stdlib.h>
#include <string.h>
#include "lib/get_cpu_info.c"
#include "lib/get_mem_info.c"
#include "lib/get_disk_info.c"
#include "lib/get_system_version.c"

typedef struct {
    const char *function_name;
    int ret_val;
} test_result_t;

int test_function(test_result_t *result) {

    // 调用函数
    int (*function_ptr)( void ) = result->function_name;
    result->ret_val = function_ptr();

    return 0;
}

int main() {
    // 初始化待测试函数集合
    test_result_t results[] = {
        {"get_system_version", 0},
        {"get_cpu_info",       0},
        {"get_mem_info",       0},
        {"get_disk_info",      0},
    };

    // 循环测试每个函数
    for (int i = 0; i < sizeof(results) / sizeof(results[0]); i++) {
        // 调用测试函数
        test_function(&results[i]);
    }

    // 统计测试结果
    int success_count = 0;
    for (int i = 0; i < sizeof(results) / sizeof(results[0]); i++) {
        if (results[i].ret_val == 0) {
            success_count++;
        }
    }

    // 输出测试结果
    printf("测试结果：\n");
    for (int i = 0; i < sizeof(results) / sizeof(results[0]); i++) {
        printf("    函数名：%s，测试结果：%s\n", results[i].function_name, results[i].ret_val == 0 ? "成功" : "失败");
    }

    // 判断测试结果
    if (success_count == sizeof(results) / sizeof(results[0])) {
        printf("测试全部完成\n");
    } else {
        printf("测试未通过\n");
        exit(1);
    }

    return 0;
}
