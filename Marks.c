#include <stdio.h>

	int main()
{
	int English,Hindi, Maths, Physics, Chemistry, aggre, per;
	
	printf("enter marks obtained in subjects:\n");
	scanf("%d%d%d%d%d",&English,&Hindi,&Maths,&Physics,&Chemistry);
	
	 aggre= English+Hindi+Maths+Physics+Chemistry;
	 printf("Total Marks:%d\n",aggre);
	 
	 per= (aggre/500.)*(100);
	 printf ("Percentage obtained:%d",per);
	 
	 
	 return 0;
		
	
}
