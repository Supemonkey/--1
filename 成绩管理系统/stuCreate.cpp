#include "Student.h"
#include <iostream>
#include <string>
using namespace std;


void stuCreate(Student *array, int n)
{
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

	for (int i = 0; i < n; ++i) {
		cin >> name >> age >> sex
			>> id >> phoenNum >> dormitNum
			>> chinScore >> mathScore
			>> englScore >> datBScore;
		array[i] =  Student(name, age, sex,
			id, phoenNum, dormitNum
			, chinScore, mathScore,
			englScore, datBScore);
	}
}
