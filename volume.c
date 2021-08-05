#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
int volume(box);
int height(box);

struct box {
			int l, w, h;
			};

typedef struct box box;			

int volume(box b)
{
	return ((b.l)*(b.w)*(b.h));
}

int height(box b)
{
	if (b.h<41)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
	
}

int main()
{
	int n,i;
	scanf ("%d",&n);
	
	box *boxes=malloc(n*sizeof(box));

	for (i=0; i<n; i++)
	{
		scanf("%d%d%d",&boxes[i].l,&boxes[i].w,&boxes[i].w);
	}	
	
	for (i=0; i<n; i++)
	{
		if (height(boxes[i]));
		{
			printf("%d\n",volume(boxes[i]));
		}
	}
	
}			
