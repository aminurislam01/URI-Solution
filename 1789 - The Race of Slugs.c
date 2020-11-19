#include<stdio.h>

int main()
{
	long long int b,t,i,j,temp;
	while(scanf("%lld",&t)==1)
	{
		long long int arr[t];
	for(i=0;i<t;i++)
	{
			scanf("%lld",&arr[i]);
	}
	for(i=0;i<t-1;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	/*for(i=0;i<t;i++)
	{
			//scanf("%d",&arr[i]);
			printf("%d\n",arr[i]);
	}*/

	if(arr[t-1]<10)
	printf("1\n");
	else if(arr[t-1]>=10 && arr[t-1]<20)
	printf("2\n");
	else
		printf("3\n");
	}
	return 0;
}
