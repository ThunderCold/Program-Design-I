#include<stdio.h>
#include<math.h>

int main(void){
	int d1,d2,d3,d4,d5,d6;
	int p1=100,com=100;
	while(1)
	{
		scanf("%d %d %d %d %d %d",&d1,&d2,&d3,&d4,&d5,&d6);
		if((d1+d2+d3)%2==0)
		{
			if(abs(d4-d5)>d6)
			{
				p1-=15;
			}
			else if(d4+d5!=d6)
			{
				p1-=5;
			}
		}
		else
		{
			if(d6>d5&&d5>d4)
			{
				com-=25;
			}
			else if((d4%2==d5%2)||(d5%2==d6%2))
			{
				com-=5;
			}
		}
		if(p1<=0)
		{
			printf("Dragon wins");
			break;
		}
		if(com<=0)
		{
			printf("Player wins");
			break;
		 } 
	}

	return 0;
}
