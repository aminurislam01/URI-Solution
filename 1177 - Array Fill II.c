#include<stdio.h>

int main()
{
	long long int N[1000],i,j,a,k;
	scanf("%lld",&a);
	for(i=0;i<1000; )
	{
		// if(i==999)
	   //  break;
		for(j=0;j<a;j++)
		{
	     printf("N[%lld] = %lld\n",i++,j);
	     //return 999;
	     if(i==1000)
	        return i;
	   //  break;
		}
		// if(i==1000)
	     // break;
	}

	return 0;
}
