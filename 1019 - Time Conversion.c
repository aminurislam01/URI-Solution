#include<stdio.h>
int main()
{
   int a,k=0,x=0,y=0,z=0;
   scanf("%d",&a);
   x = a/3600;
   y = a%3600;
   z = y/60;
   k = y%60;
   printf("%d:%d:%d\n",x,z,k);
   return 0;
}
