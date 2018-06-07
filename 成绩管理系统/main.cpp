#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;
#include "Statement.h"
int main()
{
	Student *s[10] = {0};
	create(*s, 10);
	system("pause");
	return 0;
}