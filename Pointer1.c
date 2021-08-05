#include <stdio.h>
 
int main()
{
    int *a,**b,***c,d,e;
    
    d=1;
    
    e=2;
    d=a;
    a=&e;
    b=&a;
    c=&b;
   	
    
	
	printf ("Value of d and e: %d\t%d\n",d,e);
	printf ("Value at a: %d\n", *a);
	printf ("Address of b: %d\n",b);	
	printf ("Value at b:%d\n",**b);
	printf ("Value at c:%d\n",**c);
	printf ("Value :%u\n",&e);

    
}

