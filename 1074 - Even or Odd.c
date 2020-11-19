#include<stdio.h>
int main()
{
	int t,i,a;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&a);
		if(a==0)
			{
			printf("NULL\n");
		}
		else if(a%2==0)
		{
			if(a>0)
			{
				printf("EVEN POSITIVE\n");
			}
			else if(a<0)
			{
			   printf("EVEN NEGATIVE\n");
			}
		}
		else if(a%2 !=0)
			{
			if(a>0)
			{
				printf("ODD POSITIVE\n");
			}
			else if(a<0)
			{
			   printf("ODD NEGATIVE\n");
			}
		}
	}
	return 0;
}
