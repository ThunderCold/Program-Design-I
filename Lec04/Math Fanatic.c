#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	long long int cur,summ=0;
	for(int i=0;i<n;i++)
	{
		if(i!=n-1) scanf("%lld ",&cur);
		else scanf("%lld",&cur);
		summ+=cur;
		if(summ%cur==0)
		{
			if(i==0) printf("%lld %lld",summ,cur);
			else printf("\n%lld %lld",summ,cur);
		}
	}

	return 0;
}
