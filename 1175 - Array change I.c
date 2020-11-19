#include<stdio.h>

int main()
{
	int n[20],i,j,an[20],k[20],m,t;
	for(i=0,m=0;i<20;i++,m++)
	{
		scanf("%d",&n[i]);
		an[m]=n[i];
	}
	for(i=19,m=0;i>=10;i--,m++){
		k[i]=an[m];
		k[m]=an[i];
		}
		for(t=0;t<20;t++)
		{
			printf("N[%d] = %d\n",t,k[t]);
		}
	return 0;
}
