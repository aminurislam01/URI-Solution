#include<stdio.h>
int main()
{
	int a,b,i;
	while(scanf("%d%d",&a,&b)==2)
	{
        if(a>b)
            printf("Decrescente\n");
        else if(b>a)
            printf("Crescente\n");
        else if(a==b)
		printf("");
	}
	return 0;
	}
