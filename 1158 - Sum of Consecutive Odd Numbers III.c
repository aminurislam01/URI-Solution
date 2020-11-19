#include<stdio.h>
int main()
{
	long long int t,a,b,i,j,k,s=0;
	scanf("%lld",&t);
	for(j=1;j<=t;j++)
	{
		s=0;
		scanf("%lld%lld",&a,&b);
	//	if(a>=b)
	//	{
			if(a%2==0){
			a=a+1;
			}
			for(i=a,k=1;k<=b;k++,i=i+2){
				//	printf("%d\n",i);
			s=s+i;
			}
	//	}
	/*	else
			{
					if(b%2==0){
			b=b+1;
			}
			for(i=b,k=1;k<=b;k++,i=i+2){
			s=s+i;
			}
		}*/
		printf("%lld\n",s);
	}
	return 0;
}
