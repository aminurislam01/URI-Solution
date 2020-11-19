#include<stdio.h>
int main()
{
	long long int a,i,k;
	while(scanf("%lld",&a)==1)
	{
		if(a==0){
		break;
		}
		for(i=1;i<=a;i++)
		{
			if(i==1)
		printf("%lld",i);
		else
		printf(" %lld",i);
	//	if(i==a)
	//	for(k=0;k<1;k++)
	//	printf(" ");
		}
			printf("\n");
	}
	return 0;
}
