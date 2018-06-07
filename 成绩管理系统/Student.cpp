#include "Student.h"




Student::Student(string n, int a, string s, int i, string p, string dn, double c, double m, double e, double d)
{
	name = n;
	age = a;
	sex = s;
	id = i;
	phoenNum = p;
	dormitNum = dn;
	chinScore = c;
	mathScore = m;
	englScore = e;
	datBScore = d;
}

Student::~Student()
{

}
