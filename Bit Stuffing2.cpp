#include<stdio.h>
#include<string.h>
int main()
{
	char bits[500];
	int count=0,i;
	printf("Enter the bits to stuffed : ");
	scanf("%s",&bits);
	printf("01111110 ");
	for(i=0;i<strlen(bits);i++)
	{
		if(bits[i]=='1')
			count++;
		else
			count=0;
		printf("%c",bits[i]);
		if(count==5)
		{
			printf("0");
			count=0;
		}
	}
	printf(" 01111110");
}

