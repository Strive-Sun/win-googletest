# win-googletest

本项目演示了如何在 Windows 平台下使用 GoogleTest 框架对 C 语言代码进行单元测试。

## 目录结构

```
calculate.exe                # 计算程序可执行文件
CMakeLists.txt               # 顶层 CMake 构建文件
src/                         # 源代码目录
  calculate/                 # 计算相关代码
    add.c                    # 加法实现
    main.c                   # 主程序入口
    include/add.h            # 加法头文件
unittest/                    # 测试相关目录
  googletest/                # GoogleTest 源码
  testcase/calculate_test/   # 计算模块的测试用例
    calculate_test.cpp       # 测试代码
    CMakeLists.txt           # 测试构建文件
    build/                   # 测试构建输出
```

## 构建与运行

### 1. 构建主程序

```powershell
mkdir build
cd build
cmake ..
cmake --build .
```

### 2. 构建并运行单元测试

```powershell
cd unittest/testcase/calculate_test
mkdir build
cd build
cmake ..
cmake --build .
ctest
```

或直接运行生成的 `calculate_test.exe`。

## 依赖
- [GoogleTest](https://github.com/google/googletest)
- CMake 3.10+
- 支持 C/C++ 的编译器（如 MSVC、MinGW 等）

## 参考
- [GoogleTest 官方文档](https://github.com/google/googletest/blob/main/docs/primer.md)
- [Windows 下搭建 googletest 测试框架(C/C++)](https://www.cnblogs.com/strive-sun/p/18704366)

## 许可证
本项目遵循 MIT 许可证。
