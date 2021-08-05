#include <stdio.h>

typedef struct employee {char *name;  // old type -struct employee(typedef is for to not to write again again the type
						int age;
						int salary;
						}  emp;// emp is the new type
int main()
{
	//struct employee emp1;
	// we can replace this with the below line
	emp emp1; // emp becomes our new datatype which we have created, no need to write struct again and again
	emp1.name="jasmine massey";
	emp emp2;
	emp2.age=65;
	
	printf ("%s",emp1.name);
	printf ("%d",emp2.age);
}		
