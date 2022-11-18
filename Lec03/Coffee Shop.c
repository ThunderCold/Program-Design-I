#include<stdio.h>

int main(void){
	int a[5]={0,110,150,135,145};
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>=1&&x<=4)
	{
		printf("The total price is %d dollars!",a[x]*y);
	}
	else
	{
		printf("Wait, what?");
	}

	return 0;
}
