#include <stdio.h>

int Addition (int a, int b);// function declaration
int Subtraction( int a, int b);

int Addition (int a, int b)// function signature function name,return type, parameters()
{
	int sum;									/*funtion defined*/ // function definition
	
				 /**/
	sum=a+b;
	printf ("Addition of two numbers:%d\n",sum);
//	return sum;	
	
}

int Subtraction( int a,int b)// function called
{
	int sub;
	
	sub=a-b;
	printf ("Substraction of two numbers:%d\n",sub);
//	return sub ;	
		
	
}

int main()//The only difference is that the main function is "called" by the operating system when the user runs the program.
{
	int a=10,b=20,j;
	
	Addition(a,b);// function calling return value 
//	printf ("%d\n",j);// giving return value from addition
	
	Subtraction (b,a);// function calling
//	printf ("%d\n",j);// giving return value from subtraction
	

		
}
