#include <stdio.h>
int main ()
{
	int f,i,num;
	

	for (num=1;num<=150;num++)
{	f=0;
	for (i=1; i<=num;i++)	
{
	if (num%i==0)
	
		f++;


}
	
		if (f==2)
	{printf ("%dIt is a prime no\n",num);	}

	else
	
	{printf ("%dNot a prime no.\n",num);	}
	
}


	return 0;
}

