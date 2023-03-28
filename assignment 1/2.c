#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("it is divisible by 5 and 11");
	}
	else
	{
		printf("not divisible by 5 and 11");
	}
}
