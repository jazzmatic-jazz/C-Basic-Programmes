#include <stdio.h>
#include <math.h>

int main()
{
	float i,a,r,n,t,p;
	
	char X;

	do
{
	printf ("To exit press 'e', 'c' to continue \n");
	scanf (" %c",&X);
		
	if (X=='e')
{	printf ("EXIT");					}
	
	else if (X=='c')
{
	
	printf ("Press 1 for Compound Interest\nPress 2 for Simple Interest\n");
	scanf ("%f",&a);
	
	if (a==1)
{	printf("Enter the value of p,r,n,t\n");
	scanf ("%f%f%f%f",&p,&r,&n,&t);
	i=p*pow((1+(r/n)),(n*t));
	printf ("Compound Interest:%f",	i)	;		}
	
	if (a==2)
{	printf ("Enter the values of p,r,t\n");
	scanf ("%f%f%f",&p,&r,&t);
	i=p*(1+r*t);
	printf ("Simple Interest:%f",i)	;		}		
	
	

}
}
	while (X!='e');
	
	
	return 0;
}

float Compound ()
{
	return 	i=p*pow((1+(r/n)),(n*t));
	
}

float Simple ()
{
	return i=p*(1+r*t);
}
