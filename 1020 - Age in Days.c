#include<stdio.h>
int main()
{
   int a,k=0,x=0,y=0,z=0;
   scanf("%d",&a);
   x = a/365;
   printf("%d ano(s)\n",x);
   y = a%365;
   z = y/30;
   printf("%d mes(es)\n",z);
   k = y%30;
   printf("%d dia(s)\n",k);
   return 0;
}
