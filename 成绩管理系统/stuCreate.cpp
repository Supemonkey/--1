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

	//都接到设计为空节点不适用
	ph = pe = pn;
	while (1) {//输入0停止输入
		cin >> name;
		if (name == "0")break; //判断用户是否继续输入数据
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
	pn->s = Student();//设计一个为节点，为未使用
	pe->next = pn;
	pe = pn;
	pe->next = NULL;

	
	return ph;
}