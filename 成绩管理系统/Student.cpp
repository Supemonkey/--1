#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
#define UNUSED -404





Student::Student(string n,
	int a, string s,
	int i, string p,
	string dn, double c,
	double m, double e,
	double d)
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

void Student::showInfo()
{
	cout <<  name << " " <<  sex << " "
		<<  age << " " << id << " "
		<< phoenNum << " " << dormitNum << " "
		<< chinScore << " " << mathScore << " "
		<< englScore << " " << datBScore << " "
		<< endl;
	cout << "************JJJJJJJJJJJJJJJ" << endl;

}

void Student::showSorce()
{
	cout << name << " " << id << " "
		<< chinScore << " " << mathScore << " "
		<< englScore << " " << datBScore << " "
		<< endl;
	cout << "*****************FFFFFFFFFFFFFFF*******" << endl;
}

Student::Student()
{
	this->age = UNUSED;
	this->name = UNUSED;
	this->sex = UNUSED;
	this->id = UNUSED;
	this->phoenNum = UNUSED;
	this->dormitNum = UNUSED;
	this->chinScore = UNUSED;
	this->mathScore = UNUSED;
	this->englScore = UNUSED;
	this->datBScore = UNUSED;
}

string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

string Student::getSex()
{
	return sex;
}

int Student::getId()
{
	return id;
}

string Student::getPhoenNum()
{
	return string();
}

string Student::getDormitNum()
{
	return dormitNum;
}

double Student::getChinScore()
{
	return chinScore;
}

double Student::getMathScore()
{
	return mathScore;
}

double Student::getEnglScore()
{
	return englScore;
}

double Student::getdatBScore()
{
	return datBScore;
}



void Student::modiName(string name)
{
	this->name = name;
}

void Student::modiAge()
{
}

void Student::modiSex()
{
}

void Student::modiId()
{
}

void Student::modiPN()
{
}

void Student::modiDN()
{
}

void Student::modiCS()
{
}

void Student::modiMS()
{
}

void Student::modiES()
{
}

void Student::modiBS()
{
}







