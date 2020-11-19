#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)==1)
	{
		if(a==2002)
		printf("Acesso Permitido\n");
		else
		printf("Senha Invalida\n");
		if(a==2002)
		break;
	}
	return 0;
}
