#include "StudentScore_rev0.0.h"


StudentScore::StudentScore()
{
	cout << "StudentScore::Ctor" << endl;
}

StudentScore::~StudentScore()
{
	cout << "StudentScore::Dtor" << endl;
}

int StudentScore::GetSum()
{

	return (studentInfo.kor+
		studentInfo.eng+
		studentInfo.math);
}

float StudentScore::GetAvg()
{

	return GetSum()/3.0;
}

int StudentScore::GetMin()
{
	//if ���� ��ȿ����
	int score[3] = { studentInfo.kor,studentInfo.eng,studentInfo.math };
	int min = score[0];
	for (size_t i = 0; i < 3; i++)
		if (min > score[i])
			min = score[i];
	//sort
	//��������[0,������].....[n-1,ū��]
	std::sort(score, score + 3);//score.begin, score.end()
	return score[0];
}

int StudentScore::GetMax()
{
	int score[3] = { studentInfo.kor,studentInfo.eng,studentInfo.math };
	int min = score[0];
	for (size_t i = 0; i < 3; i++)
		if (min > score[i])
			min = score[i];
	//sort
	//��������[0,������].....[n-1,ū��]
	std::sort(score, score + 3);//score.begin, score.end()
	return score[3-1];
}

int StudentScore::SetStudentName(string name)
{
	studentInfo.name = name;
	return 0;
}

int StudentScore::SetSubjectScore(string subject, int score)
{	//kor, KOR, Kor, KoR, kOr
	//KOR - upperCase ���Ͻ�����
	//convert char
	//str -> lower -> upper
	string str = subject;
	//string {'a','b','c','d'} => "abcd"
	//lower -> upper
	//str[0] 'a'--> 'A'            =?"Abcd"
	//str[1] 'b'--> 'B'            =?"ABcd"
	//c-style
	for (size_t i = 0; i < str.size(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
	//c++ style :: lambda expresstion
	std::transform(str.begin(), str.end(), 
		str.begin(), [](uchar c) {return toupper(c); });

	//�̸����� �Լ� :lambda - �Լ� ���·� �־���
	//[](uchar c) // ??[�Լ��̸�??](uchar c)
	//{return toupper(c);}

	
	if (str == "KOR")       studentInfo.kor = score;
	else if (str == "ENG")  studentInfo.eng= score;
	else if (str == "MATH") studentInfo.math = score;
	else
		cout << "Subject {Kor, Eng, Math} Only" << endl;
	return 0;
}

int StudentScore::DoCalc()
{
	cout << studentInfo.name << "="
		<< "���� : " << studentInfo.kor << " | "
		<< "���� : " << studentInfo.eng << " | "
		<< "���� : " << studentInfo.math << " | "
		<< "���� : " << GetSum() << " | "
		<< "��� : " << GetAvg() << " | "
		<< "�ּ� : " << GetMin() << " | "
		<< "�ִ� : " << GetMax() <<
		endl;
	return 0;
}
