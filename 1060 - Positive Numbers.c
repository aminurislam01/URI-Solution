#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,x,y,z,m,n,k,l;
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a>0)
	x=1;
	else
	x=0;
		if(b>0)
	y=1;
	else
	y=0;
		if(c>0)
	z=1;
	else
	z=0;
		if(d>0)
	m=1;
	else
	m=0;
		if(e>0)
	n=1;
	else
	n=0;
		if(f>0)
	l=1;
	else
	l=0;
	k=x+y+z+m+n+l;
	printf("%d valores positivos\n",(int)k);
	return 0;
}
