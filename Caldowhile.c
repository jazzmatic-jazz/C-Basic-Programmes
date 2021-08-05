#include <stdio.h>
int main ()
{
	int one_no,sec_no,operators,r=1;
	char i;
	
	do
{
	printf ("This is the CALCULATOR\n\n");
	
	printf ("Press e-exit or c-continue..\n");

	scanf (" %c",&i);
	
	if (i=='e')
{	printf ("Exit\n");								}
	
	else{ if (i=='c')
{	
	printf ("Enter the operands:\n");
	scanf ("%d%d",&one_no,&sec_no);	
	printf ("Press-\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n ");
	scanf ("%d",&operators);																											
		if (operators==1)
	{	printf ("Addition Performed:%d\n",one_no+sec_no);			}
	
		if (operators==2)
	{	printf ("Substraction Performed:%d\n",one_no-sec_no);		}
	
		if (operators==3)
	{	printf ("Multiplication Performed:%d\n",one_no*sec_no);		}
	
		if (operators==4)
	{	printf ("Division Performed:%d\n",one_no/sec_no);			}
}
	else
	{printf ("Press e or c\n\n");		}								}
}
	while (i!='e');
	
	
	return 0;
}
