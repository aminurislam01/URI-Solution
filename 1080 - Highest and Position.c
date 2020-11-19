#include<stdio.h>
int main()
{
	long long int arr[100],temp,i,j,k,x,an[100],m;
	for(i=0,k=0;i<100;i++,k++){
	scanf("%lld",&arr[i]);
	an[k]=arr[i];
	}
	for(i=0;i<99;i++){
	for(j=i+1;j<100;j++){
		if(arr[i]>arr[j]){
		temp =arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
	}
			printf("%lld\n",arr[99]);
		for(k=0;k<100;k++)
		{
			if(an[k]==arr[99])
			printf("%lld\n",k+1);
		}
	return 0;
}
