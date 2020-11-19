#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int a,b,q,r,i,j=1,s=0;
			scanf("%lld%lld",&a,&b);
			if(a<0 && (b>0 || b<0))
			{
				if(b<0){
				b=-b;
				for(i=1;i<=abs(a);i++)
				{
					s=s+b;
					if(s>=abs(a))
					{
				      r=s-abs(a);
				      q=i;
				    printf("%lld %lld\n",q,r);
					return r;
					}
				}
				}

				else
				for(i=1;i<=abs(a);i++)
				{
					s=s+b;
					if(s>=abs(a))
					{
				      r=s-abs(a);
				      q=-i;
				    printf("%lld %lld\n",q,r);
					return r;
					}
				}
			}
			else
			{
			q=a/b;
			r=a%b;
		printf("%lld %lld\n",q,r);
			}
	return 0;
}
