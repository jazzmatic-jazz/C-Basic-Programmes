#include <stdio.h>

int jazsoso ();
int jazcoso(int a,int k); 

int main ()
{	int i,b,a=10,k=5;
	for(i=0; i<100; i++)
	{	if(i==5)
		break;
		b=jazsoso();
		printf("%d\n",b);
		b=jazcoso(a,k);
		printf("%d %d\n",b,a);
	}
	
	
}

int jazsoso ()
{	
	printf("lee jong suk is lob\n");
	jazcoso(1,1);
	return 'a';
}

int jazcoso (int a,int k)
{	int sum;
	sum = k+a;
	a = a-k;
	return a;
}

