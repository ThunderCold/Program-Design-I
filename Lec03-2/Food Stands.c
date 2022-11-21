#include <stdio.h>

int min(int a,int b)
{
	if(a>b) return b;
	else return a;
}

int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int main(void) {
	int x;
	int minn=1e9,maxx=1;
	while(scanf("%d",&x))
	{
		if(x==-1) break;
		minn=min(minn,x);
		maxx=max(maxx,x);
	}
	printf("%d",maxx-minn);
}
