#include <iostream>

#include "stuCreate.h"

void show(Node *h)
{
	if (h->next != NULL) {
		h = h->next;//���������쳣�׳�
		while (h->next != NULL) {
			h->s.showInfo();
			//h->s.showSorce();
			h = h->next;
		}
		h->s.showInfo();
		//h->s.showSorce();
	}
}