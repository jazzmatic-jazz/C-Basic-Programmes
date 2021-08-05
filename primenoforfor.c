#include <stdio.h>
int main()
{
	int num,i,f;
	
	for(num=1;num<=150;num++)
{	
	for (i=1;i<=num;i++)
{
	if (num%i==0)
	f++;	
	
}
	
	if (f==2)
	{printf ("%d is a PRIME NUMBER\n",num);			}
	
	else 
	{printf ("%d is NOT a prime number\n",num);		}
		f=0;
}	

	
	return 0;
	
}
