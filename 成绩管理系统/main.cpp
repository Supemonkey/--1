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
	////pe,pn��û�д�inintstrt��return�����������Զ��ͷ�
	//show(phead);
	cout << "��������ɾ��" << endl;
	cout << "��������Ҫɾ��������" << endl;
	cin >> name;
	anyDeletStrt(phead, name);
	show(phead);
	while (1) {
		cout << "����idɾ��" << endl;
		cout << "��������Ҫɾ��������" << endl;
		cin >> id;
		anyDeletStrt(phead, id);
		show(phead);
	}
	
	system("pause");
	return 0;
}