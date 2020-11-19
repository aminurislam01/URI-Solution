#include<stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b; )
	{
		for(j=0;j<a;j++)
		{
			if(i==b+1)
			break;
			if(j==0)
			printf("%d",i++);
			else
			printf(" %d",i++);
		}
		printf("\n");
	}
	return 0;
}
