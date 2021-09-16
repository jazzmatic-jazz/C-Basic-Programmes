#include<stdio.h>

int main()

{
	int t, m, s, ans;
	
	scanf("%d",&t);
	
	while(t>0)
	{
		scanf("%d %d",&m,&s);
		ans=m/s;
		
		printf("%d\n",ans);
		t--;
	}

	
}
