#include <stdio.h>
int main()
//prime numbers are only divisible by 1 and itself
//fators for 5 is 5 and 1 only 2 factors
{
	int num, f, i;
	
	printf (" Enter the number:");
	scanf ("%d",&num);
	f=0;
	i=1;
	if (num<=100)
{
	while (i<=num )
{
	if (num%i==0)

	f++;
	
	i++;	
	
}
	i=f;//can use f directly also
	
	if (i==2)//f==2
	{printf ("It is a prime no");	}
	
	else
	{printf ("Not a prime no.");	}

}
	return 0;
}
