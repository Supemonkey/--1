#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "stuCreate.h"
#define MAXSIZE 10000



int main()
{
	Node s;
	Node *phead, *pend, *pnew;
	phead = pend = pnew = NULL;
	string name;
	int id;
	phead=initStrt(phead,pend,pnew);
	show(phead);
	cout << "HHHHHHHHHHHHHHh" << endl;
	//addStrt(phead, pend, pnew);
	////pe,pn并没有从inintstrt中return回来，会陪自动释放
	//show(phead);
	cout << "根据姓名删除" << endl;
	cout << "请输入需要删除的姓名" << endl;
	cin >> name;
	anyDeletStrt(phead, name);
	show(phead);
	while (1) {
		cout << "根据id删除" << endl;
		cout << "请输入需要删除的姓名" << endl;
		cin >> id;
		anyDeletStrt(phead, id);
		show(phead);
	}
	
	system("pause");
	return 0;
}