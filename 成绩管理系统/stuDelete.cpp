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
	
	while (pfront->next != NULL) {
		if (name == n) {
			pback->next = pfront->next;
			delete (pfront);//ɾ��ָ�룬�ͷſռ䡣
			cout << "����ɾ���ɹ���" << endl;
			return;
		}
		pback = pfront;
		pfront = pfront->next;
		name = pfront->s.getName();
	}
	cout << "���������ݣ��޷�ɾ��!" << endl;
	
	return;
}