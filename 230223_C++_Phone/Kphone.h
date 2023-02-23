#pragma once
#include "common.h"

class Kphone
{
public:
	Kphone();
	~Kphone();
	int Send(); //전화를 건다
	int Cancel(); // 전화를 끊다
	
	int Receive(); //전화를 받다
	int Numbers(string _strNumber); //전화번호 입력
	int Numbers(int* pAudioData, int length);

private:
	string strNumber; //전화번호
	bool isConnected; //통화중?
};

