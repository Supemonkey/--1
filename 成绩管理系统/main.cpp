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
	phead=initStrt(phead,pend,pnew);
	show(phead);
	system("pause");
	return 0;
}