#include<stdio.h>
int main()
{
	int a,b,m=0,i;
	scanf("%d%d",&a,&b);
//	if(b==a+1 || a==b+1)
//	break;
	if(a>=b){
	for(i=b;i<=a;i++)
	{
			if(b==a+1 || a==b+1)
         	break;
		if(i%13!=0)
		m=m+i;
	}
	}
	else
		for(i=a;i<=b;i++)
	{
			if(b==a+1 || a==b+1)
         	break;
		if(i%13!=0)
		m=m+i;
	}
	printf("%d\n",m);
	return 0;
}
