#include<stdio.h>
int main()
{
    double n=3.14159,R,VOLUME;
    scanf("%lf",&R);
    VOLUME = (((4.0)/3)*n*R*R*R);
    printf("VOLUME = %0.3lf\n",VOLUME);
    return 0;

}
