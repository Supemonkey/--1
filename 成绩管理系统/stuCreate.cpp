#include <iostream>
#include <string>
using namespace std;

#include "Student.h"
#include "stuCreate.h"


Node *initStrt(Node *ph,Node *pe,Node *pn)
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
	pn = new Node;

	//���ӵ����Ϊ�սڵ㲻����
	ph = pe = pn;
	while (1) {//����0ֹͣ����
		cin >> name;
		if (name == "0")break; //�ж��û��Ƿ������������
		cin >> age >> sex
			>> id >> phoenNum >> dormitNum
			>> chinScore >> mathScore
			>> englScore >> datBScore;
		pn = new Node;
		pn->s = Student(name, age, sex,
			id, phoenNum, dormitNum,
			chinScore, mathScore, englScore, datBScore);
		pe->next = pn;
		pe = pn;
	}
	pn = new Node;
	pn->s = Student();//���һ��Ϊ�ڵ㣬Ϊδʹ��
	pe->next = pn;
	pe = pn;
	pe->next = NULL;

	
	return ph;
}