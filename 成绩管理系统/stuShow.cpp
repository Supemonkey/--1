#include <iostream>

#include "stuCreate.h"

void show(Node *h)
{
	while (h->next != NULL) {
		h->s.showInfo();
		h->s.showSorce();
		h = h->next;
	}
	h->s.showInfo();
	h->s.showSorce();
}