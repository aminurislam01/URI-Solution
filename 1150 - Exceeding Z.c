#include<stdio.h>

int main()
{
	int a,b,i,j,k=0;
	scanf("%d",&a);
	scanf("%d",&b);
	while(b<=a)
	{
			scanf("%d",&b);
		}

			for(i=a,j=1;i<=b;i++,j++)
			{
				k=k+i;
				if(k>=b)
				{
					printf("%d\n",j);
					break;
					}
				}
	return 0;
	}
