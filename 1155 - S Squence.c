#include<stdio.h>

int main()
{
	int i,j;
	double s=0,a;
	for(i=1;i<=100;i++)
	{
	    s=s+((1.00)/i);
	}
	printf("%0.2lf\n",s);
	return 0;
}
