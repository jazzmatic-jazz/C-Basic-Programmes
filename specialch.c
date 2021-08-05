#include<stdio.h>
//whether the character entered through the keyboard is a lower case alphabet or not. 
//whether a character entered through the keyboard is special symbol or not.
// a-z=97+25=122 A=65-90
//32–47 / 58–64 / 91–96 / 123–126
int main ()
{
	int a;
	char b;
	//printf("%c",65+25);
	scanf ("%c",&b);
	
	
	if (b>=97 && b<=122)
{	printf ("lower case Alphabet\n");							}
	
	else if (b>=65 && b<=90)
{	printf ("Not a  lower case Alphabet\n");					}	
	
	else if(b>=32<=47 || b>=58<=64 || b>=91<=96 || b>=123<=126 )
{	printf ("It is a special character\n");						}	
	
	return 0;
}
