#include<stdio.h>
int main()
{
	int a,b,d,e;
	float x,y,z,c,f;
	scanf("%d%d%f",&a,&b,&c);
    scanf("%d%d%f",&d,&e,&f);
    x = b*c;
    y = e*f;
    z = x+y;
    printf("VALOR A PAGAR: R$ %0.2f\n",z);
	return 0;
}
