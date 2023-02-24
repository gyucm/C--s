#pragma once
#include "common.h"
class CDate
{
public:
	CDate() {year = month = day = 0;}
	CDate(int _year, int _month, int _day)
	{year = _year, month = _month, day = _day;}
	~CDate() {};
	int GetYear() { return year; }
	int GetMonth() { return month; }
	int GetDay() { return day; }
private:
	int year, month, day;
};


class Employee
{
public:
	Employee();
	Employee(string name, string address, string telNo, CDate joinDate);
	void DisplayEmployee();
	void DoWork();
	~Employee();


private:
	string name;
	string address;
	string telNo;
	CDate joinDate;
};

class RegularEmployee : public Employee // : 부모 입력
{
public:
	RegularEmployee();
	RegularEmployee(string name, string address, 
		string telNo, CDate joinDate, int salary);
	void DoWork();
	~RegularEmployee();
	

private: //부모 프라이빗 입력 필요 없음
	int salary;

};