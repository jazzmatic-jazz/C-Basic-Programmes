#include <stdio.h>

struct school{
			char sch_name[50];
			int total;
			char prin[30];
			};

int main ()
{
	struct school s1={"Holy Cross School",1000,"Jasmine"};
	struct school s2={"Green Valley School", 1200, "Lee jong Suk"};
	printf ("%s\t%s",s1.prin,s2.prin);
}			
		
