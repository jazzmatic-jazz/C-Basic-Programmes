#include<stdio.h>

int main ()
{
	int n, m;
	float a,b;
	
	scanf ("%d %d\n",&n,&m);
	scanf("%f %f",&a, &b);
	
	printf("%d %d\n",n+m,n-m);
	printf ("%.1f %.1f",a+b,a-b);
}
