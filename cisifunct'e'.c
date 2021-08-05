#include <stdio.h>
#include <math.h>

float ci();
float si();

float ci()
{
	float a,r,n,t,p;
	
	printf ("Enter r,t,n,p:\n ");
	scanf ("%f%f%f%f",&r,&n,&t,&p);
	a=p*pow((1+(r/n)),(n*t));
	printf ("Compound Interest:%f\n",a);
	main ();
	
}

float si()
{
	float p, r , t, a;
	
	printf ("Enter r, t, p:\n ");
	scanf ("%f%f%f%f",&r,&t,&p);
	a=p*(1+r*t);
	printf ("Simple Interest:%f\n",a);
	main ();
	
}
	
int main ()
{
	char X;
	int a,b;
	
	printf ("To exit press 'e'\n");
	scanf (" %c",&X);

	
	if (X=='e')
{	
	printf ("Exit");					}	//if		
	
	
	
	else if (X=='c')
	
{	
	printf ("Press\n 1.for CI\n2. for SI\n\n");
	scanf ("%d",&a);
	  
		if (a==1)
	{
		b=ci();
		
	}
	
		if (b==2)
	{	
		b=si();
		
	}
}
	return 0;
	
}//main
/*r= 0.03875 p=10000.00  t= 5.0(si) n=12.0  t=7.5(ci)*/

