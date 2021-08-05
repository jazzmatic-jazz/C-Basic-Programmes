#include <stdio.h>
int main ()
{
	float j,k,s=1;//s can also be 0 remove the comment in line 22 n check for yourself
	int i;
	
	for (i=7;i>1;i--)
{	
		for (j=i;j>1;j--)
	{	
			if (i==j)
		{
			k=j*(j-1);			
		}		
			else 
		{
			k=k*(j-1);	
		
		}
	
	}	

		k=i/k;
		s=s+k;
}	
	//s=k+s;
	printf ("%f\n",s);	//1/1=1,2/2=1,3/3=0.08333,4/4=0.16666, 5/5=0.4166666,6/6=0.0083,7/7=0.0013888 =2.71
		
	
	return 0;
}
