#include<stdio.h>

int main()
{
	long long int i,j,a,b,n;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		a=0;b=0;
		for(j=1;j<=2;j++)
		{
			if(j==1)
			{
			a=i*i;
			b=i*i*i;
			printf("%lld %lld %lld\n",i,a,b);
			}
			else
	        	{
			a=i*i+1;
			b=i*i*i+1;
			printf("%lld %lld %lld\n",i,a,b);
			}
		}
	}
	return 0;
}
