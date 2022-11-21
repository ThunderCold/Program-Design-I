#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	getchar();
	int cap=1,ct=0;
	while(1)
	{
		char c=getchar();
		if(c=='\n') break;
		else if(c==';'||c==','||c=='.')
		{
			printf("\n");
			cap=1;
			ct++;
			if(ct>=n) break;
		}
		else if(c==' ')
		{
			printf(" ");
			cap=1;
		}
		else if(cap)
		{
			if(c>='a'&&c<='z') c-=('a'-'A');
			printf("%c",c);
			cap=0;
		}
		else
		{
			if(c>='A'&&c<='Z') c+=('a'-'A');
			printf("%c",c);
			cap=0;
		}
	}

	return 0;
}
