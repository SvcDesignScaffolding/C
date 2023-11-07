# 定义目标文件名称
TARGET = libosinfo.a

# 定义文件列表
SRCS = get_cpu_info.c get_disk_info.c get_memory_info.c get_system_version.c
OBJS = get_cpu_info.o get_disk_info.o get_memory_info.o get_system_version.o

# 定义编译命令
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -I../include -O2 -fPIC 

# 定义链接命令
AR = ar
RANLIB = ranlib

# 定义 debug 模式
DEBUG = no

# 编译目标文件
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	$(AR) rcs $(TARGET) $(OBJS)
	$(RANLIB) $(TARGET)
ifeq ($(DEBUG), yes)
	nm -s $(TARGET)
endif

# 清理目标文件
clean:
	rm -f $(TARGET) $(OBJS)
