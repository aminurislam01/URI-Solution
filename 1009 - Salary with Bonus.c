#include<stdio.h>
int main()
{
   double a,b,y,z;
   char name[10];
   scanf("%s",&name);
   scanf("%lf%lf",&a,&b);
   z = 0.15*b;
   y = z+a;
   printf("TOTAL = R$ %0.2lf\n",y);
   return 0;
}
