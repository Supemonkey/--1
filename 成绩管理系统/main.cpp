#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "statement.h"
#define MAXSIZE 10000

int main()
{
	int n, m, result;
	Student *s[MAXSIZE];//定义了一个类 类型的指针数组，里面每个成员都存放地址
	cout << "请输入需要创建学生的数量：" << endl;
	cin >> n;
	stuCreate(s,n);//将数组第一个元素传递过去，即指针数组的首地址
	result = m + n;
	cout << "******************" << endl;
	/*stuShowInfo(s, 10);
	cout << "*JJJJJJJJJJJJJ" << endl;
	stuShowSorce(s, 10);*/

	system("pause");
	return 0;
}