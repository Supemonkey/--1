#include "Student.h"


void stuShowInfo(Student *array, int n)
{
	for (int i = 0; i < n; ++i,++array) {
		array->showInfo();
	}
}

void stuShowSorce(Student *array, int n)
{
	for (int i = 0; i < n; ++i,++array) {
		array->showSorce();
	}
}
