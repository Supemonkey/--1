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
	
	//都接到设计为空节点不适用
	phead = pend = pnew;
	while (1) {//输入0停止输入
		cin >> name;
		if (name == "0")break; //判断用户是否继续输入数据
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
	//Student *s[MAXSIZE];//定义了一个类 类型的指针数组，里面每个成员都存放地址
	//cout << "请输入需要创建学生的数量：" << endl;
	//cin >> n;
	//stuCreate(s,n);//将数组第一个元素传递过去，即指针数组的首地址
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