#include<stdio.h>

int main()
{
	long long int n,i,j,k;
	scanf("%lld",&n);
for(i=1,j=2,k=3;k<(n*4);i=i+4,j=j+4,k=k+4)
	{
		printf("%lld %lld %lld PUM\n",i,j,k);
	}
	return 0;
}
