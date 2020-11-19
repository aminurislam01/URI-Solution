#include<stdio.h>

int main()
{
	//int i,j=1;
	double s=0,a,i,j=1.00;
	for(i=1.00;i<=39;i=i+2)
	{
	    s=s+(i/j);
	    j=j*2;
	}
	printf("%0.2lf\n",s);
	return 0;
}
