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
	this->salary = salary; //�⺻ Ŭ���� ������ ��� �ް� �Ļ����� �Ļ������� �ֱ� �⺻����� �Ļ������� ����
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
