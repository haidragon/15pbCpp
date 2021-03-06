// 04.拷贝构造.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class CMyClsA {
public:
	CMyClsA(int a) {
		m_nNumA = a;
		m_pSz = new char[10]{"12345"};
	}
	~CMyClsA() {
		if (m_pSz)
		{
			delete[] m_pSz;
			m_pSz = nullptr;
		}
	}
	// 默认拷贝构造函数->浅拷贝
	//CMyClsA(CMyClsA &objC) {
	//	memcpy_s(this, sizeof(CMyClsA), &objC, sizeof(CMyClsA));
	//}
	
	// 深拷贝
	CMyClsA(const CMyClsA& objC) {
		// 先把内存拷贝一份
		memcpy_s(this, sizeof(CMyClsA), &objC, sizeof(CMyClsA));
		// 再把相关资源拷贝一份
		m_pSz = new char[10];
		memcpy_s(m_pSz, 10, objC.m_pSz, 10);
		printf("CMyClsA\n");
	}
	int m_nNumA;
	char *m_pSz;
};

CMyClsA& Fun(CMyClsA& obj) {
	printf("void");
	return obj;
}

int main()
{
	int a = 10;
	int b = a;
	CMyClsA obj(10);
	// 构造函数调用
	// CMyClsA objC = obj;
	//CMyClsA objA = obj;
	CMyClsA &objC = Fun(obj);
    return 0;
}

