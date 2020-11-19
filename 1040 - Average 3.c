#include<stdio.h>
int main()
{
	float a,b,c,d,e,av,av1;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	av=((a*2)+(b*3)+(c*4)+(d*1))/10;
	if(5<=av && av<=6.9)
	{
	scanf("%f",&e);
		printf("Media: %0.1f\n",av);
	if(av>=7)
	printf("Aluno aprovado.\n");
	if(av<5)
	printf("Aluno reprovado.\n");
	if(5<=av<=6.9)
	printf("Aluno em exame.\n");
	printf("Nota do exame: %0.1f\n",e);
	av1=(av+e)/2;
	if(av1>=5)
	printf("Aluno aprovado.\n");
	if(av1<=4.9)
	printf("Aluno reprovado.\n");
	printf("Media final: %0.1f\n",av1);
	}
	else
	{
	printf("Media: %0.1f\n",av);
	if(av>=7)
	printf("Aluno aprovado.\n");
	if(av<5)
	printf("Aluno reprovado.\n");
	if(5<=av && av<=6.9)
	printf("Aluno em exame.\n");
	}
	return 0;
}
