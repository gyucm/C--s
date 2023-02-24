#pragma once
#include "common.h"

class StudentScore
{
public:
	StudentScore();
	~StudentScore();
private:
	int GetSum();
	float GetAvg();
	int GetMin();
	int GetMax();


	struct StudentInfo
	{
	string name;
	int eng, kor, math; //과목
	int sum, min, max;
	float avg;
	};
	StudentInfo studentInfo; //멤버변수 생성

public:
//기능
//입력 학생 이름
int SetStudentName(string name);
//과목, 성적 입력
int SetSubjectScore(string subject, int score);
//결과산출 sum avg min max
int DoCalc();
};