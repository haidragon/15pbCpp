// 03.内存申请和释放.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>


int main()
{
	// C：
	// 返回的是无类型的指针
	int *p2;
	int *p = (int*)malloc(100*sizeof(int));
	ZeroMemory(p, 100 * sizeof(int));
	free(p);
	p = nullptr;
	// c++
	// new 什么类型的内存[多少份]
	// 返回类型取决于new的类型
	// 可以申请的时候同时初始化
	int *p3 = new int[100]{1,2,3,4,5};
	delete[] p3;
	// delete什么时候带[]什么时候不带[]->看new有没有[]
	int *p4 = new int(5);
	delete p4;
	int *p5 = new int[100];
	delete[] p5;
    return 0;
}

