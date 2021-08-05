#include <stdio.h>

	int main ()
{
	int a,s,operators,r;
	
	printf ("Enter the operand:\n",a,s);
	scanf ("%d%d",&a,&s);
	
 	printf ("Enter the operators:\n1Add\n2Sub\n3Mult\n4Divi\n");
 	scanf ("%d",&operators);
 	
 		
 	if (operators==1)
 {	  printf (" Additions=%d\n", a+s);		}
 
 	if (operators==2)
 {    printf ("Subtraction=%d\n", a-s);		}
	
	if (operators==3)
 {    printf ( "Multiplication=%d\n",a*s);	}
 
    if (operators==4)
 {    printf ("Division=%d\n",a/s);	
 	  printf ("remainder=%d",a%s); 			} //exit
 
	
  
	return 0;
	
}
