#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	Student(string n,int a,string s, int i,string p,string dn,double c,double m ,double e,double d);
	~Student();
	void showInfo();
	void showSorce();
	Student();

	string getName();
	int getAge();
	string getSex();
	int getId();
	string getPhoenNum();
	string getDormitNum();
	double getChinScore();
	double getMathScore();
	double getEnglScore();
	double getdatBScore();

	void modiName(string);
	void modiAge(int);
	void modiSex(string);
	void modiId(int);
	void modiPN(string);
	void modiDN(string);
	void modiCS(double);
	void modiMS(double);
	void modiES(double);
	void modiBS(double);
	

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