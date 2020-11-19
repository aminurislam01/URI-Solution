#include<stdio.h>

int main()
{
	float a,b,av;
	int x;
	while(scanf("%f",&a)==1)
	{
	if(a>=0 && a<=10)
	{
		x=1;
		while(scanf("%f",&b)==1)
		{
		if(b>=0 && b<=10)
		{
	       	x=2;
	       	av=(a+b)/2;
	       	printf("media = %0.2f\n",av);
	       	if(x==2)
	       	break;
		}
			else
	printf("nota invalida\n");
		}
	}
	else
	printf("nota invalida\n");
	}
	return 0;
}
