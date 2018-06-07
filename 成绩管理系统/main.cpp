#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "statement.h"

int main()
{
	Student *s[10];//定义了一个类 类型的指针数组，里面每个成员都存放地址
	stuCreate(s,10);//将数组第一个元素传递过去，即指针数组的首地址
	cout << "******************" << endl;
	stuShowInfo(s, 10);
	cout << "*JJJJJJJJJJJJJ" << endl;
	stuShowSorce(s, 10);

	system("pause");
	return 0;
}