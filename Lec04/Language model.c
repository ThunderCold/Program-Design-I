#include<stdio.h>

int main(void){
	double ans=1,cur;
	for(int i=0;i<5;i++)
	{
		if(i!=4) scanf("%lf ",&cur);
		else scanf("%lf",&cur);
		ans*=cur;
	}
	printf("%.15lf",ans);

	return 0;
}
