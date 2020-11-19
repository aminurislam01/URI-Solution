#include<stdio.h>
int main()
{
	long long int temp,i,j,k,n;
	scanf("%lld",&n);
	long long int arr[n],an[n];
	for(i=0,k=0;i<n;i++,k++){
	scanf("%lld",&arr[i]);
	an[k]=arr[i];
	}
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
		temp =arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
	}
			printf("Menor valor: %lld\n",arr[0]);
		for(k=0;k<n;k++)
		{
			if(an[k]==arr[0])
			printf("Posicao: %lld\n",k);
		}
	return 0;
}
