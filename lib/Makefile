# 定义目标文件名称
TARGET = libosinfo.a

# 定义源文件列表
SRCS = get_cpu_info.c get_disk_info.c get_memory_info.c get_system_version.c

# 定义编译命令
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -I../include

# 定义链接命令
AR = ar
RANLIB = ranlib

# 编译目标文件
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	$(AR) rcs $(TARGET) $(OBJS)
	$(RANLIB) $(TARGET)

# 清理目标文件
clean:
	rm -f $(TARGET) $(OBJS)
