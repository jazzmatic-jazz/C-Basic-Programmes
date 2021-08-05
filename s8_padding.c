#include<stdio.h>
struct abc{
			//char a; //1b
			//char b; //1b
			//int c;  // 4b
			char a; //1b
			int b; //1b
			char c;  // 4b
		  };
		  
int main()
{
	struct abc var;
	printf ("%d",sizeof(var));
}		  
