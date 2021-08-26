
#include <stdio.h>
// write a program using conditional operators to determines whether a year entered through the keyboard is a leap year or not.
/*if year is not divisible by 4 then it is a common year
else if year is not divisible by 100 then it is a leap year
else if year is not divisible by 400 then it is a common year
else it is a leap year*/

int main ()
{
	int year;
	printf ("Enter the year:\n");
	scanf ("%d",&year);
	
	if (year%400==0)//century year
{	printf ("%d It is a leap year",year);	}

	else if (year%100==0)
{   printf ("%d It is not a leap year",year);}

	else if (year%4==0)
{	printf ("%d It is a leap year",year);		}	
	
	else 
{	printf ("%d It is not a leap year",year);		}		
	
	return 0;
}
