#include<stdio.h>
int main()
{
	long long int a,i,j,k,s=0;
		while(scanf("%lld",&a)==1&&a!=0)
		{
			s=0;
			if(a%2!=0)
			{
			a=a+1;
			}
			for(i=a,k=1;k<=5;k++,i=i+2){
				//	printf("%d\n",i);
			s=s+i;
			}
		printf("%lld\n",s);
		}
	return 0;
}
