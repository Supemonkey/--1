#include "stuCreate.h"
#include <iostream>
#include <string>
using namespace std;


Node *addStrt(Node *ph,Node *pe,Node *pn)
{
	//�봴�������Ƿ����ϵͳ�������أ�������ɡ�
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
	while (ph->next != NULL) {
		ph = ph->next;
	}
	pn = pe = ph;
	pn = new Node;
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