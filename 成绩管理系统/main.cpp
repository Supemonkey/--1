#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "statement.h"
#define MAXSIZE 10000

typedef struct array
{
	Student *s;
	array *next;
}Node;

Node *phead, *pend, *pnew;


Node *initStrt()
{
	int age;
	string name;
	string sex;
	int id;
	string phoenNum;
	string dormitNum;
	double chinScore;
	double mathScore;
	double englScore;
	double datBScore;
	pnew= new Node;
	
	//���ӵ����Ϊ�սڵ㲻����
	phead = pend = pnew;
	while (1) {//����0ֹͣ����
		cin >> name;
		if (name == "0")break; //�ж��û��Ƿ������������
		cin >>age >> sex
			>> id >> phoenNum >> dormitNum
			>> chinScore >> mathScore
			>> englScore >> datBScore;
		pnew = new Node;
		pnew->s = new Student(name, age, sex,
			id, phoenNum, dormitNum,
			chinScore, mathScore, englScore, datBScore);
		pend->next = pnew;
		pend = pnew;
	}
	pend->next = NULL;
	return phead;
}

void show(Node *h)
{
	while (h->next!= NULL) {
		h->s->showInfo();
		h->s->showSorce();
		h = h->next;
	}
}

int main()
{

	//int n, m, result;
	//Student *s[MAXSIZE];//������һ���� ���͵�ָ�����飬����ÿ����Ա����ŵ�ַ
	//cout << "��������Ҫ����ѧ����������" << endl;
	//cin >> n;
	//stuCreate(s,n);//�������һ��Ԫ�ش��ݹ�ȥ����ָ��������׵�ַ
	//result = m + n;
	//cout << "******************" << endl;
	///*stuShowInfo(s, 10);
	//cout << "*JJJJJJJJJJJJJ" << endl;
	//stuShowSorce(s, 10);*/
	Node *h;
	Node s;
	h=initStrt();
	show(h);
	system("pause");
	return 0;
}