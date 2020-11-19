#include<stdio.h>
int main()
{
	long long int a,b,i,m;
	while(scanf("%lld%lld",&a,&b)==2 && (a>0&&b>0))
	{
		m=0;
		if(a>b)
		{
		for(i=b;i<=a;i++){
		m=m+i;
		printf("%lld ",i);
		}
		//printf("Sum=%d\n",m);
		}
		else
			for(i=a;i<=b;i++){
		m=m+i;
		printf("%lld ",i);
		}
		printf("Sum=%d\n",m);
	}
	return 0;
}
