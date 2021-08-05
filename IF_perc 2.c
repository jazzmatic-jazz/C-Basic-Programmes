#include<stdio.h>

int main()

{
	int m1,m2,m3,m4,m5,per;
	printf("Enter marks of five subjects:\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	per=(m1+m2+m3+m4+m5)/500.*100;
	
	if (per>=60)
	  {printf("First");		 }
	
		else if (per>=50)	
	 	 {printf ("Second");	  }
	  
	  		else if (per>=40)
	 	 	 {printf ("Third");	  }

					else 
					  printf("Fail");
					
	
	return 0;


}
