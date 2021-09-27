#include<stdio.h>

int main()
{
	int t, m , n, k;
	
	scanf("%d",&t);
	
	while (t>0)
	{
		t--;
		
		scanf("%d %d %d",&m, &n, &k);
		
		if (n*k>=m)
		{
			printf("NO\n");
		}
		else if(n*k<m)
		{
			printf("YES\n");
		}
		
	}
	
}

