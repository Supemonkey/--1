#include "stuCreate.h"
#include <string>
using namespace std;

//���������γɺ�������

//��������ɾ��
void anyDeletStrt(Node *pfront ,string n)
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

//����ѧ��ɾ��
void anyDeletStrt(Node *pfront, int i)
{
	int id;
	Node *pback;
	pback = pfront;
	pfront = pfront->next;//��һ���ڵ�Ϊ�գ������õ�һ���ڵ�
	id = pfront->s.getId();//����������ѭ����

	while (pfront->next != NULL) {
		if (i == id) {
			pback->next = pfront->next;
			delete (pfront);//ɾ��ָ�룬�ͷſռ䡣
			cout << "����ɾ���ɹ���" << endl;
			return;
		}
		pback = pfront;
		pfront = pfront->next;
		id = pfront->s.getId();
	}
	cout << "���������ݣ��޷�ɾ��!" << endl;

	return;
}