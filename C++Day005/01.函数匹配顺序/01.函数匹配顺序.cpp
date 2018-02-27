// 01.函数匹配顺序.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

template<typename T>
void Max(T a, T b) {
	printf("1\n");
}

template<typename T>
void Max(T* a, T* b) {
	printf("2\n");
}

// int* 输出2
// int 输出3
template<>
void Max<int*>(int* a, int* b) {
	printf("3\n");
}


int main()
{
	int a, b;
	Max(&a, &b);
    return 0;
}

