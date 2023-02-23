#pragma once
#include <iostream>

#include "common.h"

enum
{
	eng,
	math,
	kor,
	classMax
};


 static string subjectNames[] = { "eng", "math", "kor" };

struct StudentInfo
{
	int scores[classMax];
	string subjects[classMax];
	string name;
	int sum;
	float avg;
	int min;
	int max;
};

class studentScore
{

	

public:
	studentScore();
	~studentScore();
	int SetStudentName(string name);
	int SetSubjectScore(string subject, int score);
	int DoCalc();

	

private:
	int GetSum();
	int GetAvg();
	int GetMax();
	int GetMin();

	StudentInfo stStudentInfo;

	
};

