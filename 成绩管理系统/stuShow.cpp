#include <iostream>
#include "stuCreate.h"

void sphow(Node *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;//���������쳣�׳�
		while (ph->next != NULL) {
			ph->s.showInfo();
			//ph->s.sphowSorce();
			ph = ph->next;
		}
	}
}

//void notLoopSphow(Node *ph)
//{
//	ph->s.showInfo();
//	//ph->s.showSorce();Ϊ�˲������ݵķ��㣬��ע�͵���
//}