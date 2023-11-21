# 项目简介

该项目是一个简单的系统信息获取库，包含获取 CPU、内存、磁盘和系统版本等信息的函数。

# 代码结构

项目目录结构如下：

```
main.c
include/head.h
lib/
    get_cpu_info.c
    get_disk_info.c
    get_kernel_info.c
    get_memory_info.c
    get_system_version.c
test.c
Makefile
```

- include/head.h 头文件包含了所有函数的声明。
- lib/ 目录包含了所有源文件。
- Makefile 文件用于编译项目。

# 函数列表 

- get_cpu_info.c：包含 get_cpu_count() 和 get_cpu_mhz() 函数的实现。
- get_disk_info.c：包含 get_disk_total() 和 get_disk_free() 函数的实现。
- get_kernel_info.c：包含 get_kernel_version() 和 get_kernel_architecture() 函数的实现。
- get_memory_info.c：包含 get_memory_total() 和 get_memory_free() 函数的实现。
- get_system_version.c：包含 get_system_version() 函数的实现。


# 编译运行

使用 make 命令编译项目：

- make
  - 1. lib 目录将生成 libsysinfo.a 静态库文件。
  - 2. gcc 命令链接静态库文件，并生成可执行文件：
- make test
  - test.c 文件是一个简单的测试程序，用于测试库中的函数。
- make clean
  - 清理构建目录，以便全新构建，或者提交代码

# 测试验证

运行 sysinfo  可执行文件，可以验证库中的函数是否正常工作：

输出结果如下(不同版本Linux下显示信息不同)：

```
CPU 数量：1
CPU 频率：2.40 GHz
内存总量：8192 MB
内存可用量：6144 MB
磁盘总量：2000 GB
磁盘可用量：1000 GB
系统版本：Linux 5.10.0-rc3-amd64
```
# CICD

流水线配置文件 .github/workflows/pipeline.yaml 由四个阶段组成：

1. 构建测试：此阶段从源代码构建 sysinfo 库, 并运行测试套件，以确保 sysinfo 库正常工作。
2. Docker 镜像：此阶段构建一个包含 sysinfo 库的 Docker 镜像。
3. 设置 K3s：此阶段在远程服务器上设置 K3s 集群。
4. 部署应用：此阶段将 sysinfo 库部署到 K3s 集群。

触发器

管道由以下事件触发：

- 当打开或更新拉取请求时。
- 当代码推送到主分支时。
- 当工作流程手动调度时。

环境变量

管道使用以下环境变量：

- TZ: 用于时间戳的时区。
- REPO: Onwalk 制品存储库的名称。
- IMAGE: 要构建的 Docker 镜像的名称。
- TAG: 要分配给 Docker 镜像的标签。


# 扩展

该项目还可以扩展，添加获取其他系统信息的函数，例如：

1. 获取网卡信息
2. 获取进程信息
3. 获取文件系统信息

# 制品下载地址
1. GitHub Release: https://github.com/scaffolding-design/c/releases/tag/main
2. 容器镜像仓库  : artifact.onwalk.net/base/scaffolding-design/c:<git_commit_id>
其中，<git_commit_id> 是 Git 提交 ID。
