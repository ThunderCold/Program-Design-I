#include<stdio.h>

int main(void){
	int n,m;
	scanf("%d %d",&n,&m);
	if(n==1)
	{
		for(int i=m;i>0;i--)
		{
			for(int j=i;j>0;j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if(n==2)
	{
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else if(n==3)
	{
		for(int i=m;i>0;i--)
		{
			for(int j=m;j>i;j--)
			{
				printf(" ");
			}
			for(int j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		for(int i=1;i<=m;i++)
		{
			for(int j=m;j>i;j--)
			{
				printf(" ");
			}
			for(int j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}
