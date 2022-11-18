#include<stdio.h>

int main(void){
	char s[12];
	scanf("%s",s);
	int a,b,x,y,z;
	a=(s[1]-'0')+(s[3]-'0')+(s[5]-'0')+(s[7]-'0')+(s[9]-'0')+(s[11]-'0');
	b=(s[0]-'0')+(s[2]-'0')+(s[4]-'0')+(s[6]-'0')+(s[8]-'0')+(s[10]-'0');
	x=3*a+b;
	y=x-1;
	z=9-(y%10);
	printf("%d",z);

	return 0;
}
