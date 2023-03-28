#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int lower=0,upper=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			upper+=1;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			lower+=1;
		}
	}
	printf("%d %d",upper,lower);
}
