#include "Statement.h"

void create(Student array[], int n)
{
	for (int i = 0; i < n; ++i) {
		array[i] = new Student(name,age,sex,
			id,phoenNum,dormitNum
			,chinScore,mathScore,
			englScore,datBScore);
	}
}