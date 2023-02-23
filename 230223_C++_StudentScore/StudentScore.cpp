#include "StudentScore.h"

studentScore::studentScore()
{
	cout << "std::Ctor" << endl;
}

studentScore::~studentScore()
{
	cout << "std::Dtor" << endl;
}

int studentScore::SetStudentName(string name)
{
	stStudentInfo.name = name;
	
	return 0;
}

int studentScore::SetSubjectScore(string subject, int score)
{
	for (size_t i = 0; i < classMax; i++)
	{
		if (subjectNames[i] == subject)
		{
			stStudentInfo.subjects[i] = subject;
			stStudentInfo.scores[i] = score;
			break;
		}
	}
	return 0;
}

int studentScore::DoCalc()
{
	cout << stStudentInfo.name;
	for (size_t i = 0; i < classMax; i++)
	{
		cout << " " << stStudentInfo.subjects[i] << " : " << stStudentInfo.scores[i];
	}
	cout << " 합 : " << GetSum() << " 평균 : " << GetAvg() << " 최고값 : " << GetMax() << " 최저값 : " << GetMin() << endl;
	
	return 0;
}

int studentScore::GetSum()
{
	int sum = 0;
	for (size_t i = 0; i < classMax; i++)
	{
		sum += stStudentInfo.scores[i];
	}
	return sum;
}

int studentScore::GetAvg()
{
	int avg = 0;
	for (size_t i = 0; i < classMax; i++)
	{
		avg += stStudentInfo.scores[i];
	}
	return avg/classMax;
}

int studentScore::GetMax()
{
	int max = stStudentInfo.scores[0];
	for (size_t i = 0; i < classMax; i++)
	{
		if(max<stStudentInfo.scores[i])
			max= stStudentInfo.scores[i];
	}
	return max;
}

int studentScore::GetMin()
{
	int min = stStudentInfo.scores[0];
	for (size_t i = 0; i < classMax; i++)
	{
		if (min > stStudentInfo.scores[i])
			min = stStudentInfo.scores[i];
	}
	return min;
}

