#include <stdio.h>

struct employee {char *name;  //tag- /*global scope declaration*/
		int age;
		int salary;
		}  ;
int main()
{
	struct employee emp1;// old type 
	emp1.name="jasmine";
	printf ("%s",emp1.name);
}		
