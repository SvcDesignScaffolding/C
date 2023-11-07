#!/bin/bash

# 创建目录结构
mkdir -p bin doc include lib src .github/workflows/

# 创建文件
touch doc/design.md doc/README.md doc/requirements.txt include/head.h Makefile Dockerfile src/main.c src/test.c .github/workflows/pipeline.yaml
# 设置权限
chmod +x Makefile

# 提示初始化完成
echo "项目初始化完成"
