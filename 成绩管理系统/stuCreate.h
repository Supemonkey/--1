#pragma once
#include "Student.h"

typedef struct array
{
	Student s;
array *next;
}Node;


Node * initStrt(Node *,Node * ,Node *);
void show(Node *);
Node *addStrt(Node *ph, Node *pe, Node *pn);
void nameDeletStrt(Node *,string );
