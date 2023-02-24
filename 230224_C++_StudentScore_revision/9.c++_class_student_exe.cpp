#include "StudentScore_rev1.0.h"
int main(){
	
	if (false)
	{
		//name, scorekor, eng, math
		string strName;
		int scoreKor, scoreEng, scoreMath;
		cout << "Input Student Name :";
		cin >> strName;
		cout << "Input Student Subject {Kor, Eng, Math} Score : ";
		cin >> scoreKor >> scoreEng >> scoreMath;
		StudentScore ss;
		ss.SetStudentName(strName);
		ss.SetSubjectScore("kor", scoreKor);
		ss.SetSubjectScore("ENG", scoreEng);
		ss.SetSubjectScore("Math", scoreMath);
		ss.DoCalc();
	}

	vector<StudentScore> vStudent;
	//int a = 1, 2, 3, 4 ....0;
	//int* pA = new int[1];


	string strName;
	string subject;
	StudentScore ss;
	
	while (true)
	{
		int score;
		cout << "Input Student Name :";
		cin >> strName;
		if (strName == "Q" || strName == "q")
		{
			break;
		}
			ss.SetStudentName(strName);

		while (true)
		{
			cout << "Input Subject Name :";
			cin >> subject;
			if (subject == "Q" || subject == "q")
			{
				ss.DoCalc();
				break;
			}
			cout << "Input Subject score :";
			cin >> score;

			ss.SetSubjectScore(subject, score);
		}
		
		vStudent.push_back(ss);
	}
	
	/*for (size_t i = 0; i < vStudent.size(); i++)
	{
		vStudent[i].DoCalc();
	}*/

	cout << "[ Score Table ]" << endl; 
	for (int i = 0; i < 50; i++) cout << "--";
	cout << endl;
	
	for (auto iter = vStudent.begin(); iter != vStudent.end(); iter++)
	{
		iter->DoCalc();
	}



	return 1;
}
