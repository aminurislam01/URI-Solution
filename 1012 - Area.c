#include<stdio.h>
int main()
{
    double A,B,C,n=3.14159,v,w,x,y,z;
    scanf("%lf%lf%lf",&A,&B,&C);
    v = 0.5*A*C;
    w = n*C*C;
    x = 0.5*(A+B)*C;
    y = B*B;
    z = A*B;
    printf("TRIANGULO: %0.3lf\n",v);
    printf("CIRCULO: %0.3lf\n",w);
    printf("TRAPEZIO: %0.3lf\n",x);
    printf("QUADRADO: %0.3lf\n",y);
    printf("RETANGULO: %0.3lf\n",z);
    return 0;
}
