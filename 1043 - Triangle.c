#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,X,s;
    scanf("%f%f%f",&A,&B,&C);
    if(A+B>C && B+C>A && C+A>B)
    {
        s = (A+B+C);
        printf("Perimetro = %0.1f\n",s);
    }
    else
    {
        X = 0.5*(A+B)*C;
        printf("Area = %0.1f\n",X);
    }
    return 0;
}
