#include<stdio.h>
int main()
{
	long long int a,b,i,m=0,c,j,t;
	scanf("%lld",&t);
	for(j=1;j<=t;j++)
	{
		m=0;
		scanf("%lld%lld",&a,&b);
	if(a>=b)
	for(i=b+1;i<a;i++)
	{
		if(i%2  != 0)
		m=m+i;
	}
	else
	for(i=a+1;i<b;i++)
	{
		if(i%2  != 0)
		m=m+i;
	}
	printf("%lld\n",m);
	}
	return 0;
}
