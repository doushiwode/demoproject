// 防止头文件被重复包含
#ifndef HEADER_H
#define HEADER_H

// 如果是 C++ 编译器，使用 extern "C" 来指示使用 C 语言的链接方式
#ifdef __cplusplus
extern "C" {
#endif

// 示例函数声明
// 这个函数在其他地方实现，可以在其他文件中包含这个头文件来调用它
void exampleFunction();

// 如果是 C++ 编译器，结束 extern "C" 块
#ifdef __cplusplus
}
#endif

// 结束头文件防重复包含的宏定义
#endif // HEADER_H