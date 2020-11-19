#include<stdio.h>
int main()
{
   int a,x,y,z,b,c,d,e,f,g,h,i,j,k;
   scanf("%d",&a);
   x = a/100;
   printf("%d\n",a);
   printf("%d nota(s) de R$ 100,00\n",x);
   y = a%100;
   z = y/50;
   printf("%d nota(s) de R$ 50,00\n",z);
   b = y%50;
   c = b/20;
   printf("%d nota(s) de R$ 20,00\n",c);
   d = b%20;
   e = d/10;
   printf("%d nota(s) de R$ 10,00\n",e);
   f = d%10;
   g = f/5;
   printf("%d nota(s) de R$ 5,00\n",g);
   h = f%5;
   i = h/2;
   printf("%d nota(s) de R$ 2,00\n",i);
   j = h%2;
   k = j/1;
   printf("%d nota(s) de R$ 1,00\n",k);
   return 0;
}
