#include<stdio.h>

int main()
{
	long long int t,i,j,a,s;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		s=0;
			scanf("%lld",&a);
			for(j=1;j<a;j++)
			{
				if(a%j==0)
				{
					//	printf("%lld\n",j);
					s=s+j;
					//	printf("%lld\n",j);
				}
			}
		//	printf("%lld\n",s);
		if(s==a)
			printf("%lld eh perfeito\n",a);
			else
					printf("%lld nao eh perfeito\n",a);
	}
	return 0;
}
