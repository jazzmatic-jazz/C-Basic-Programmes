#include <stdio.h>

struct {char *name;   /*global scope declaration*/
		int age;
		int salary;
		} emp1, emp2 ;// variables
		
int manager()
{
struct  {char *name;   //local declaration
		int age;
		int salary;
        } manager;
		
	manager.age=21;
	
	if (manager.age>30)
	{ 
		 manager.salary=50000;
	}			
	else
	{
		manager.salary=40000;
	}
	return manager.salary;
}

int main()
{
	printf ("Enter the salary for emp 1: ");
	scanf("%d",&emp1.salary);
	printf ("Enter the salary for emp 2: ");
	scanf("%d",&emp2.salary);
	printf ("Salary for emp 1 is:%d\n ",emp1.salary);
	printf ("Salary for emp 2 is:%d\n",emp2.salary);
	printf ("Manager's salary is :%d",manager());
	
}
