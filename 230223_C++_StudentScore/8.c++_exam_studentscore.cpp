#include "StudentScore.h"

int main()
{
	studentScore* pstudentScore = new studentScore();
	StudentInfo stStudentInfo;
	string name;
	int scores[classMax] = {87,94,83};
	std::cin >> name;
	pstudentScore->SetStudentName(name);

	for (size_t i = 0; i < classMax; i++)
		pstudentScore->SetSubjectScore(subjectNames[i], scores[i]);

	pstudentScore->DoCalc();

	return 0;
}