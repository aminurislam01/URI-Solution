#include<stdio.h>
int main()
{
	float a,b,c,d,e,x,y,z;
	scanf("%f",&a);
	if(a<=2000)
	{
		printf("Isento\n");
	}
	else
	{
		x=a-2000;
		if(x<1000)
		{
			b=0.08*x;
			printf("R$ %0.2f\n",b);
		}
		else
		{
			y=x-1000;
			if(y<1500)
			{
				c=80;
				d=0.18*y;
				b=c+d;
				printf("R$ %0.2f\n",b);
			}
			else
			{
				z=y-1500;
				c=80;
				d=270;
				e=0.28*z;
				b=c+d+e;
				printf("R$ %0.2f\n",b);
			}
		}
	}
	return 0;
}
