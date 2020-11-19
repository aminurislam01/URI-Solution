#include<stdio.h>
int main()
{
	int a,b,c,d,e,x,y,z,m,n,k;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a%2==0)
	x=1;
	else
	x=0;
		if(b%2==0)
	y=1;
	else
	y=0;
		if(c%2==0)
	z=1;
	else
	z=0;
		if(d%2==0)
	m=1;
	else
	m=0;
		if(e%2==0)
	n=1;
	else
	n=0;
	k=x+y+z+m+n;
	printf("%d valores pares\n",k);
	return 0;
}
