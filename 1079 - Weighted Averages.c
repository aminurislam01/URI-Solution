#include<stdio.h>
int main()
{
    int a,i;
	float A,B,C,X;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
    {
	scanf("%f%f%f",&A,&B,&C);
	X=(((A*2)+(B*3)+(C*5))/(2+3+5));
	printf("%0.1f\n",X);
    }
	return 0;
}
