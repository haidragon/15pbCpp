// 04.DLL.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "04.DLL.h"


void Fun() {
}

void FunTest() {
	Fun();
	MessageBox(0, L"我是DLL函数！", 0, MB_OK);
}


void Fun2() {
	MessageBox(0, L"我是DLL函数2！", 0, MB_OK);
}