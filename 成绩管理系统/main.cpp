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
	Student *s[MAXSIZE];//������һ���� ���͵�ָ�����飬����ÿ����Ա����ŵ�ַ
	cout << "��������Ҫ����ѧ����������" << endl;
	cin >> n;
	stuCreate(s,n);//�������һ��Ԫ�ش��ݹ�ȥ����ָ��������׵�ַ
	result = m + n;
	cout << "******************" << endl;
	/*stuShowInfo(s, 10);
	cout << "*JJJJJJJJJJJJJ" << endl;
	stuShowSorce(s, 10);*/

	system("pause");
	return 0;
}