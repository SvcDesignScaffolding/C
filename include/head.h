#ifndef HEAD_H_
#define HEAD_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// Function declarations for system version information
void get_system_version();

// Function declarations for CPU information
void get_cpu_info(void);

// Function declarations for memory information
void get_mem_info(void);

// Function declarations for disk information
void get_disk_info(void);

#endif
