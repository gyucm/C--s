#include "Employee.h"

int main()
{
	CDate date(2023, 2, 24);
	{
		Employee e("Parent", "Here", "010-1234-5678", date);
		e.DisplayEmployee();
		//e.DoWork();
	}
	{
		RegularEmployee re("KCCI", "Here", "010-1234-5678", date, 100);
		re.DisplayEmployee();
		//re.DoWork();
	}


	//pointer....class....derived class...pointer
	//parent class pointer
	//derived class pointer
	//Employee* pEmployee = &e; //int* pA =&a
	//RegularEmployee* pReEmployee = &re;
	//Down-Casting, �ٿ�ĳ����..�⺻ Ŭ������ �Ļ� Ŭ������ ����Ų��.
	//pEmployee = &re; //�θ�� �ڽ��� ����ų �� �ִ� �θ𿩵� �ڽ��� ����Ű�� �ڽ� ���� ���´�
	//pEmployee->DisplayEmployee();
	
	
	

	return 1;
}