#include "stuCreate.h"
#include <string>
using namespace std;

void nameDeletStrt(Node *pfront ,string n)
{
	string name;
	Node *pback;
	pback = pfront;
	pfront = pfront->next;//��һ���ڵ�Ϊ�գ������õ�һ���ڵ�
	name = pfront->s.getName();//����������ѭ����
	
	while (name != n) {
		pfront = pfront->next;
		pback = pfront;
		name = pfront->s.getName();
	}
	if (pfront->next == NULL) {
		pback = NULL;
		cout << "1ɾ���ɹ�" << endl;
	}
	else {
		pback->next = pfront->next;
		pfront->next = NULL;
		cout << "2ɾ���ɹ�" << endl;
	}
	
	return;
}