#include<stdio.h>
int main()
{
	long long int i,j,I,J,n=5;
	for(i=1;i<=9;i=i+2)
	{
		if(i==1){
		for(j=7;j>=5;j--)
		printf("I=%lld J=%lld\n",i,j);
		}
			if(i==3){
		for(j=9;j>=7;j--)
		printf("I=%lld J=%lld\n",i,j);
		}
			if(i==5){
		for(j=11;j>=9;j--)
		printf("I=%lld J=%lld\n",i,j);
		}
			if(i==7){
		for(j=13;j>=11;j--)
		printf("I=%lld J=%lld\n",i,j);
		}
			if(i==9){
		for(j=15;j>=13;j--)
		printf("I=%lld J=%lld\n",i,j);
		}
	}
	return 0;
}
