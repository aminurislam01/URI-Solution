#include<stdio.h>
int main()
{
	int a,b,i;
	while(scanf("%d%d",&a,&b)==2)
	{
	if(a>0 && b>0)
	printf("primeiro\n");
	else if(a<0 && b>0)
	printf("segundo\n");
	else if(a<0 && b<0)
	printf("terceiro\n");
	else if(a>0 && b<0)
	printf("quarto\n");
	else if(a==0 || b==0)
		printf("");
	}
	return 0;
	}
