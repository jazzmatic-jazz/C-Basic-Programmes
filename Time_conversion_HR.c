#include<stdio.h>

int main()
{
	int hh, mm, ss;
	char z[3];
	scanf("%d:%d:%d%s",&hh,&mm,&ss,z) ;
	//printf("%d:%d:%d%s",hh,mm,ss,z);
	
	
	if((hh<=12) && (mm<=59) && (ss<=59))
	{
		
	if((strcmp(z,"PM")==0)&&(hh!=12) && (hh!=0))
	{
		hh=hh+12;
			
			
	}
	if ((strcmp(z,"AM")==0) && (hh==12))
	{
		hh=0;
		
	}
		printf("%d:%d:%d",hh,mm,ss);
}
	
	
}
