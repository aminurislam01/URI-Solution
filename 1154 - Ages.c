#include<stdio.h>

int main()
{
	long long int a,n,i=0,j,s=1;
	double av=0;
	while(scanf("%lld",&a)==1)
	{
		if(a<0)
		break;
		av=av+a;
		i++;
	}
			av=av/i;
			printf("%0.2lf\n",av);
	return 0;
}
