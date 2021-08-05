#include <stdio.h>

struct employee {char *name;  //tag-
 /*global scope declaration*/
		int age;
		int salary;
		}  ;
		
int manager()
{
struct employee manager;
		
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
	struct employee emp1;
	struct employee emp2;
	printf ("Enter the salary for emp 1: ");
	scanf("%d",&emp1.salary);
	printf ("Enter the salary for emp 2: ");
	scanf("%d",&emp2.salary);
	printf ("Salary for emp 1 is:%d\n ",emp1.salary);
	printf ("Salary for emp 2 is:%d\n",emp2.salary);
	printf ("Manager's salary is :%d",manager());
	
}
