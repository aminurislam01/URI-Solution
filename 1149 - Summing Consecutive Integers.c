#include<stdio.h>

int main()
{
	long long int a,n,i,j,s=0;
	scanf("%lld",&a);
	scanf("%lld",&n);
	while(n<=0)
	{
			scanf("%lld",&n);
	}
	if(n>0)
	{
		for(i=0,j=a;i<n;i++,j++)
		{
			s=s+j;
		}
		printf("%lld\n",s);
	}
	return 0;
}
