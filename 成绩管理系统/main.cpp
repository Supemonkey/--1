#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "statement.h"

int main()
{
	Student *s[10];//������һ���� ���͵�ָ�����飬����ÿ����Ա����ŵ�ַ
	stuCreate(s,10);//�������һ��Ԫ�ش��ݹ�ȥ����ָ��������׵�ַ
	cout << "******************" << endl;
	stuShowInfo(s, 10);
	cout << "*JJJJJJJJJJJJJ" << endl;
	stuShowSorce(s, 10);

	system("pause");
	return 0;
}