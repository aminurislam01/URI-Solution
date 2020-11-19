#include<stdio.h>
int main()
{
	long long int n,a[10000],in=0,out=0,i;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		if(10<=a[i] && a[i]<=20)
		{
		in++;
		}
		else
		{
		  out++;
		}
	}
		printf("%lld in\n%lld out\n",in,out);
	return 0;
}
