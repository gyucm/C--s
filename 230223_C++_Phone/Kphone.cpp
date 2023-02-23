#include "Kphone.h"

Kphone::Kphone()
	:strNumber("000-0000-0000")
	, isConnected(false)
{
	cout << "Kphone::Ctor" << endl;
}

Kphone::~Kphone()
{
	cout << "Kphone::Dtor" << endl;
}

int Kphone::Send()
{
	if (strNumber == "000-0000-0000")
	{
		cout << "wrong number" << endl;
		return -1;
	}

	//check on the phone
	if (isConnected == true)
	{
		cout << "on the phone" << endl;
		return -1;
	}
	
	cout << "calling" << endl;

	cout << "linked" << endl;

	isConnected = true;

	cout << "commu start" << endl;

	//cancel
	cout << "finish" << endl;

	isConnected = false;

	return 0;

}

int Kphone::Cancel()
{
	cout << "cancel button activated";
	//cancel
	cout << "commu finish" << endl;

	isConnected = false;

	return 0;
}

int Kphone::Receive()
{
	if (isConnected == true)
	{
		cout << "on the phone" << endl;
		return -1;
	}
	
	cout << "linked" << endl;

	isConnected = true;

	cout << "commu start" << endl;
	//wait(5000);
	
	//cancel
	//cout << "finish" << endl;

	//isConnected = false;

	return 0;

}

int Kphone::Numbers(string _strNumber)
{
	
	strNumber = _strNumber;
	return 0;

}

int Kphone::Numbers(int* pAudioData, int length)
{
	//pAudioData분석
	//음성인식 알고리즘
	string number = "010-1234-5678";
	strNumber = number;
	//결과를 문자로 반환
	return 0;
}
