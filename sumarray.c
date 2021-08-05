#include<stdio.h>
int main ()
{
	int sum [10],a=0,i,b=0,c=0;
	
	for (i=0;i<10;i++)
{
	scanf ("%d",&sum[i]);			}	
	
	for(i=0;i<5;i++)
{					
	a=a+sum[i];					}	
	
	printf ("Sum of first five digits:%d\n",a);
			
	for (i=5;i<10;i++)
{	b=b+sum[i];						}			
	
	printf ("Sum of other five digits:%d\n",b);
	
	c=a-b;
	printf ("Total 	:%d\n",c);
	
return 0;
}

