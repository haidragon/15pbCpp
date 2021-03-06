// 02.多继承的动态联编.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class A1 {
public:
	virtual void Fun1() {
		printf("A1::Fun1\n");
	}
	virtual void Fun2() {
		printf("A1::Fun2\n");
	}
};
class A2 {
public:
	virtual void Fun1() {
		printf("A2::Fun1\n");
	}
	virtual void Fun2() {
		printf("A2::Fun2\n");
	}
};
class A :public A1, public A2 {
public:
	virtual void Fun1() {// 两个表里的Fun1函数地址都变成A::Fun1
		printf("A::Fun1\n");
	}
	virtual void Fun3() {// Fun3的地址放在拷贝自A1的虚函数表数组后面
		printf("A::Fun3\n");
	}
};
int main()
{
	A1 objA1;
	A2 objA2;
	A obj;
    return 0;
}

