// 07. 文件的输入输出.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
using namespace  std;
int main()
{
	// 向文件内写
	ofstream outFile("aaa.txt",ios_base::out|ios_base::binary,_SH_DENYRW);
	int a = 12;
	outFile.write((const char*)&a, 4);
	outFile.close();
	// 从文件中读
	ifstream inFile("aaa.txt", ios_base::in | ios_base::binary, _SH_DENYRW);
	char buf[100] = {};
	// 获取文件大小
	//把文件指针移动到最后位置
	inFile.seekg(0,// 移动到距离下一个参数的偏移
		ios_base::end);// 移动基准
	// 告诉我文件指针偏移值
	int nSize = inFile.tellg();
	// 把文件指针移动到开始位置，因为要读数据
	inFile.seekg(0,ios_base::beg);
	//inFile.read(buf, nSize);
	int b;
	inFile.read((char*)&b, 4);
	printf("%d\n", b);
	// 既读又写
	//fstream ioFile;
	//ioFile.open("aaa.txt", ios_base::app | ios_base::in | ios_base::out | ios_base::binary);
    return 0;
}

