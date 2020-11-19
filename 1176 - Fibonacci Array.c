
#include<stdio.h>

int main()
{
	long long int a,i,N[65],t,j;
	scanf("%lld",&t);
	for(j=1;j<=t;j++)
	{
	N[0]=1;
	N[1]=1;
	scanf("%lld",&a);
	if(a==0)
	printf("Fib(0) = 0\n");
	else
	{
	for(i=2;i<=a;i++)
	{
	  N[i]=N[i-2]+N[i-1];
	}
	for(i=0;i<a;i++)
	{
	     if(i==(a-1))
		 printf("Fib(%lld) = %lld\n",a,N[i]);
	}
	}
	}
	return 0;
}
