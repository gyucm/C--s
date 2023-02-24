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
	//Down-Casting, 다운캐스팅..기본 클래스가 파생 클래스를 가리킨다.
	//pEmployee = &re; //부모는 자식을 가르킬 수 있다 부모여도 자식을 가르키면 자식 값만 나온다
	//pEmployee->DisplayEmployee();
	
	
	

	return 1;
}