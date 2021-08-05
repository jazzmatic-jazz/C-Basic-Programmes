#include <stdio.h>
int main ()
{
	int a,s,d,r;
	
 	r=0;
 	
 	while (r<10)
{	
 			printf ("Enter the operand:\n",a,s); //because we want the value again and again
			scanf ("%d%d",&a,&s);
			
			printf ("Enter the operators:\n1Add\n2Sub\n3Mult\n4Divi\n");
 			scanf ("%d",&d);
	
	 	  	printf ("process");
	 	  
	 	  	d==1;//it is just a statement
	 	  	
	 	   	if(d==1)// conditional statement	
		  	{printf (" Additions=%d\n", a+s);	}
 
 			d==2;
			 if (d==2)		
  			{printf ("Subtraction=%d\n", a-s);}		
	
			d==3;
			if (d==3)
  			printf ( "Multiplication=%d\n",a*s);	
 			
 			d==4;
 			if (d==4)
  			{
			printf ("Division=%d\n",a/s);	
 	 		printf ("remainder=%d\n",a%s); }	
 	 		
 	 		r++;
 	 		printf ("loop is running %d times\n",r);
			scanf ("%d",&r);
			
 }
 	
	return 0;
	
}
