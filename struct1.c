#include <stdio.h>

struct {
	 	char *office_name;// member name 
	 	char *employeename;// global scope declaration
	 	int count;
	 	float distance;
	   } office1, office2; //variables

int main ()
{
	office1.office_name="OPTUM";//'.' dot is to access the member of the structure
	office1.employeename="Jasmine";
	office2.office_name="UHG";
	office2.employeename="Loyed";
	office1.count=1000;
	
	printf ("%s\n", office1.office_name);
	printf ("%s\n", office2.office_name);
	printf ("%s\n",office1.employeename);
	printf ("%s\n",office2.employeename);
	printf ("%d\n",office1.count);
}	   
	   
