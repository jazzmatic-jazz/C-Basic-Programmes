#include<stdio.h>
#pragma pack(1)
struct abc{
			
			char a; //1b
			int b; //1b
			char c;  // 4b
		  };
		  
int main()
{
	struct abc var;
	printf ("%d",sizeof(var));
}		 
