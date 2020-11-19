#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	if(a>=0 && a<=400.00)
	{
		b= (0.15*a);
		c=a+b;
		printf("Novo salario: %0.2f\n",c);
		printf("Reajuste ganho: %0.2f\n",b);
		printf("Em percentual: 15 %%\n");
	}
	else if(a>=400.01 && a<=800.00)
	{
		b= (0.12*a);
		c=a+b;
		printf("Novo salario: %0.2f\n",c);
		printf("Reajuste ganho: %0.2f\n",b);
		printf("Em percentual: 12 %%\n");
	}
		else if(a>=800.01 && a<=1200.00)
	{
		b= (0.1*a);
		c=a+b;
		printf("Novo salario: %0.2f\n",c);
		printf("Reajuste ganho: %0.2f\n",b);
		printf("Em percentual: 10 %%\n");
	}
		else if(a>=1200.01 && a<=2000.00)
	{
		b= (0.07*a);
		c=a+b;
		printf("Novo salario: %0.2f\n",c);
		printf("Reajuste ganho: %0.2f\n",b);
		printf("Em percentual: 7 %%\n");
	}
		else if(a>2000.00)
	{
		b= (0.04*a);
		c=a+b;
		printf("Novo salario: %0.2f\n",c);
		printf("Reajuste ganho: %0.2f\n",b);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
