# 定义目标文件名称
TARGET = sysinfo

# 定义源文件列表
SRCS = main.c

# 定义编译命令
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11 -I./include

# 编译目标文件
all: $(TARGET)

$(TARGET): $(SRCS)
	make -C lib
	$(CC) $(CFLAGS) -o $@ $(SRCS) -L./lib -losinfo 

# 测试
test:
	gcc -o test test.c
	./test

# 清理规则
clean:
	make -C lib clean
	rm -f sysinfo sysinfo.o test test.o

# 帮助信息
help:
	echo "Makefile 用于编译 sysinfo 程序"
	echo "使用方法：make"
