#include<stdio.h>
int main()
{
	long long int t,a,i,x,j;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		x=0;
		scanf("%lld",&a);
		for(j=1;j<=a;j++)
		{
			if(a%j==0)
			x=x+1;
		}
		if(x==2)
		printf("%lld eh primo\n",a);
		else
		printf("%lld nao eh primo\n",a);
	}
	return 0;
}
