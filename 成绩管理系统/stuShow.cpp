#include <iostream>
#include "stuCreate.h"

void sphow(Node *ph)
{
	if (ph->next != NULL) {
		ph = ph->next;//可以设置异常抛出
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
//	//ph->s.showSorce();为了测试数据的方便，先注释单个
//}