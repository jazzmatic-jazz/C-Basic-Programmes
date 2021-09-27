#include<stdio.h>
#pragma pack1

int main()
{
	float f=7.0;
	short s=*(short*)&f;
	
	printf("%hi\n",s);
	
	int i=5;
	float fl=*(float*)&i;
	
	printf("%f",fl);
}
