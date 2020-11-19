#include<stdio.h>

int main()
{
	float a,b,c,d,e,f,s=0,s1=0,s2=0,s3=0,s4=0,s5=0,sum;
	int p=0,p1=0,p2=0,p3=0,p4=0,p5=0,pos;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a>0)
	{
		p=1;
		s=a;
	}
		if(b>0)
	{
		p1=1;
		s1=b;
	}
		if(c>0)
	{
		p2=1;
		s2=c;
	}
		if(d>0)
	{
		p3=1;
		s3=d;
	}
		if(e>0)
	{
		p4=1;
		s4=e;
	}
		if(f>0)
	{
		p5=1;
		s5=f;
	}
	pos=p+p1+p2+p3+p4+p5;
	sum=(s+s1+s2+s3+s4+s5)/pos;
	printf("%d valores positivos\n%0.1f\n",pos,sum);
	return 0;
}
