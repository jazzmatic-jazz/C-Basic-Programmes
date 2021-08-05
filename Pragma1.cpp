#include <stdio.h>

int Dhushi ();
int Ginger ();
int Jasmine ();

int main()
{
	printf("Hi, my name is Main!!\n");
}

int __attribute__((constructor,weak))  Dhushi()
{
	printf ("Hi, My name is Dhushi\n");
}

int __attribute__ ((destructor)) Ginger()
{
	printf ("Hi, Ginger this side..\n");
}

/*int __attribute__((constructor)) Jasmine ()
{
	printf ("Hello!!!\n");
}*/

