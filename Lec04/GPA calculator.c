#include<stdio.h>
#include<string.h>

int main(void){
	char s[5000];
	scanf("%s",s);
	double point=0,credit=0,curp=0,curc=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			curc+=(s[i]-'0');
			while(s[i+1]>='0'&&s[i+1]<='9')
			{
				curc*=10;
				curc+=(s[i+1]-'0');
				i++;
			}
		}
		else
		{
			if(s[i]=='A')
			{
				if(s[i+1]=='+')
				{
					curp=4.3;
					i++;
				}
				else if(s[i+1]=='-')
				{
					curp=3.7;
					i++;
				}
				else curp=4;
			}
			else if(s[i]=='B')
			{
				if(s[i+1]=='+')
				{
					curp=3.3;
					i++;
				}
				else if(s[i+1]=='-')
				{
					curp=2.7;
					i++;
				}
				else curp=3;
			}
			else if(s[i]=='C')
			{
				if(s[i+1]=='+')
				{
					curp=2.3;
					i++;
				}
				else if(s[i+1]=='-')
				{
					curp=1.7;
					i++;
				}
				else curp=2;
			}
			else if(s[i]=='F') curp=0;
			point+=(curp*curc);
			credit+=curc;
			curp=curc=0;
		}
	}
	printf("%.2lf",point/credit);

	return 0;
}
