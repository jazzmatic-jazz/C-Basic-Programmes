#include <stdio.h>

	int main ()
{
	int a,s,d,r;
	
	printf ("Enter the operand:\n",a,s);
	scanf ("%d%d",&a,&s);
	
 	printf ("Enter the operators:\n1Add\n2Sub\n3Mult\n4Divi\n");
 	scanf ("%d",&d);
 	
 		
 	if (d==1)
 {	  printf (" Additions=%d\n", a+s);			}
 
 	if (d==2)
 {    printf ("Subtraction=%d\n", a-s);		}
	
	if (d==3)
 {    printf ( "Multiplication=%d\n",a*s);	}
 
    if (d==4)
 {    printf ("Division=%d\n",a/s);			}
		
  r=(1%d,2%d,3%d,4%d);
  printf ("remainder of:%d",r);
  
	return 0;
	
}
