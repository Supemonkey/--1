#include                "Student.h"
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
	name            = n;
	age             = a;
	sex             = s;
	id              = i;
	phoenNum        = p;
	dormitNum       = dn;
	chinScore       = c;
	mathScore       = m;
	englScore       = e;
	datBScore       = d;
}

Student::~Student()
{

}

void Student::showInfo()
{
	cout <<  name <<    " " <<  sex << " "
		<<  age <<      " " << id << " "
		<< phoenNum <<  " " << dormitNum << " "
		<< chinScore << " " << mathScore << " "
		<< englScore << " " << datBScore << " "
		<< endl;
	cout <<             "************JJJJJJJJJJJJJJJ" << endl;

}

void Student::showSorce()
{
	cout << name <<     " " << id << " "
		<< chinScore << " " << mathScore << " "
		<< englScore << " " << datBScore << " "
		<< endl;
	cout <<             "*****************FFFFFFFFFFFFFFF*******" << endl;
}

Student::Student()
{
	this->age       = UNUSED;
	this->name      = UNUSED;
	this->sex       = UNUSED;
	this->id        = UNUSED;
	this->phoenNum  = UNUSED;
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
	return phoenNum;
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
	this->name= name;
}

void Student::modiAge(int age)
{
	this->age = age;
}

void Student::modiSex(string sex)
{
	this->sex = sex;
}

void Student::modiId(int id)
{
	this->id = id;
}

void Student::modiPN(string phoenNum)
{
	this->phoenNum = phoenNum;
}

void Student::modiDN(string dormitNum)
{
	this->dormitNum = dormitNum;
}

void Student::modiCS(double chinScore)
{
	this->chinScore = chinScore;
}

void Student::modiMS(double mathScore)
{
	this->mathScore = mathScore;
}

void Student::modiES(double englScore)
{
	this->englScore = englScore;
}

void Student::modiBS(double datBScore)
{
	this->datBScore = datBScore;
}