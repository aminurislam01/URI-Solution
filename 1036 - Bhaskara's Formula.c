#include<stdio.h>
#include<math.h>
int main()
{
 double a,b,c,x,d,m,n;
 scanf("%lf%lf%lf",&a,&b,&c);
 x = (b*b)-(4*a*c);
 d = sqrt(x);
 m = ((-b)+d)/(2*a);
 n = ((-b)-d)/(2*a);
 if(x<0 || a==0)
 {
  printf("Impossivel calcular\n");
 }
 else
 {
  printf("R1 = %0.5lf\nR2 = %0.5lf\n",m,n);
 }
 return 0;
}
