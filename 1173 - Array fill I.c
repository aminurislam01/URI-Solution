#include<stdio.h>

int main()
{
	int x[10],i,a,j,p=0;
		scanf("%d",&a);
	printf("N[0] = %d\n",a);
	for(i=1;i<10;i++)
	{
	     a=a*2;
		printf("N[%d] = %d\n",i,a);

	}
	return 0;
}
