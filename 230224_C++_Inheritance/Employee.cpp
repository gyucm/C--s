#include "Employee.h"

Employee::Employee()
{
	cout << "Employee::Ctor" << endl;
}

Employee::Employee(string name, string address, string telNo, CDate joinDate)
{
	cout << "Employee::Ctor" << endl;
	this->name = name;
	this->address = address;
	this->telNo = telNo;
	this->joinDate = joinDate;
}

void Employee::DisplayEmployee()
{
	cout << "name : " << name << endl;
	cout << "address : " << address << endl;
	cout << "telNo : " << telNo << endl;
	
}

void Employee::DoWork()
{
	cout << "Employee::DoWork" << endl;
}

Employee::~Employee()
{
	cout << "Employee::Dtor" << endl;
}

RegularEmployee::RegularEmployee()
	:Employee()
{
	cout << "RegularEmployee::Ctor" << endl;
}

RegularEmployee::RegularEmployee(string name, string address, string telNo, CDate joinDate, int salary)
	:Employee(name, address, telNo, joinDate)
{
	this->salary = salary; //기본 클래스 정보는 상속 받고 파생에는 파생정보만 넣기 기본기능은 파생에서도 가능
	cout << "RegularEmployee::Ctor" << endl;
}

void RegularEmployee::DoWork()
{
	cout << "ReEmployee::DoWork" << endl;
}

RegularEmployee::~RegularEmployee()
{
	cout << "RegularEmployee::Dtor" << endl;
}
