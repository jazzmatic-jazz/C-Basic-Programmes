#include <stdio.h>
int main()
{
	int a=0,marks[10],i;

	for (i=0;i<10;i++)	
{	scanf ("%d",&marks[i]);						}
	
/*	marks[0]=20;
	marks[1]=30;
	marks[2]=55;
	marks[3]=87;
	marks[4]=26;
	marks[5]=59;
	marks[6]=76;
	marks[7]=80;
	marks[8]=36;
	marks[9]=45;	*/
	
	for (i=0;i<10;i++)
{	a=a+marks[i];								}	
	a=a/i;
	printf ("Average of the marks :%d\n",a);
	
	
	
	
	return 0;
}
