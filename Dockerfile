# 基础镜像
FROM debian:latest as builder

# 安装依赖
RUN apt-get update && apt-get install -y gcc libc6-dev make

# 编译程序
COPY . /app
WORKDIR /app
RUN make

# 生成可执行文件
RUN mv sysinfo /usr/bin/sysinfo

# 运行镜像
FROM debian:latest as prod

# 添加可执行文件
COPY --from=builder /usr/bin/sysinfo /usr/bin/sysinfo

# 运行程序
CMD ["/bin/sh"]
