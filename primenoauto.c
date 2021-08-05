#include <stdio.h>
int main()
{
	int num,f,i;
	num=1;
	i=1;
	
	
while (num<=150)
{ f=0;	//for resetting the value of f
	while (i<=num)
	{
		if (num%i==0)
		
		f++;
		i++;
		
	}

	if (f==2)
	{printf ("It is a prime no.%d\n",num);	}
	
	else
	{printf ("Not a prime no.%d\n",num);	}
	
	num++;
	i=1;	//for resetting the value of i
}	
	
	
	
	return 0;
	
}
