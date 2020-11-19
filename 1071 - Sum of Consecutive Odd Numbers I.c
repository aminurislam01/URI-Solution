#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int a,b,i,m=0,c;
	scanf("%lld%lld",&a,&b);
	if(a>=b)
	for(i=(b)+1;i<(a);i++)
	{
		c=i;
		if(abs(c)%2  != 0)
		{
		m=m+i;
		}
	}
	else
	for(i=(a)+1;i<(b);i++)
	{
		c=i;
		if(abs(c)%2  != 0)
		{
		m=m+i;
		}
	}
	printf("%lld\n",m);
	return 0;
}
