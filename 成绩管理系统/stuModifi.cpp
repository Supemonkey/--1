#include "stuCreate.h"
#include <iostream>
#include <string>
using namespace std;


void modifiItem(Node *ph, int i);

//�������������޸��������
void anyModifiStrt(Node *ph,string n)
{
	string name;
	int i;
	ph = ph->next;
	while (ph->next != NULL) {
		if (n == name) {
			cout << "�ҵ�������" << endl;
			ph->s.showInfo();
			//ph->s.getMathScore();
			cout << "��������Ҫ�޸ĵ���Ŀ" << endl;
			cin >> i;
			modifiItem(ph, i);
		}
		ph = ph->next;
	}
	cout << "�����ڸ�����" << endl;
	
}

void modifiItem(Node *ph, int i)
{
	switch (i) {
		case 1: {
			string name, n;
			cin >> name;
			
		}
		case 2: {
			cout << "name" << endl;
		}
		case 3: {

		}
		case 4: {

		}
		case 5: {

		}
		case 6: {

		}
		case 7: {

		}
		case 8: {

		}
		case 9: {

		}
		case 10: {

		}
		default :
			cout << "�����ڸ�ѡ�" << endl;
	}
}