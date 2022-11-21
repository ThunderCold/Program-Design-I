#include<stdio.h>

int main(void){
	double x[6],h[6],y[6];
	double w=0.9,u=0.1,b=-51,u_=-0.98,b_=153;
	h[0]=0;
	scanf("%lf",&x[0]);
	for(int i=0;i<5;i++)
	{
		h[i+1]=w*x[i]+u*h[i]+b;
		x[i+1]=y[i+1]=u_*h[i+1]+b_;
		printf("%.1lf ",y[i+1]);
	}

	return 0;
}
