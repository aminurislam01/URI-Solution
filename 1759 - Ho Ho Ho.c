#include<stdio.h>

int main()
{
	long long int a,i;
	scanf("%lld",&a);
		printf("Ho");
	for(i=1;i<=a-1;i++)
	{
		if(i==a-1)
		{
		printf(" Ho!\n");
		break;
		}
		printf(" Ho");
	}
	return 0;
}
