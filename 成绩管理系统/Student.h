#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	Student(string n,int a,string s, int i,string p,string dn,double c,double m ,double e,double d);
	~Student();

private:
	int age;
	string name;
	string sex;
	int id;
	string phoenNum;
	string dormitNum;
	double chinScore;
	double mathScore;
	double englScore;
	double datBScore;
};

