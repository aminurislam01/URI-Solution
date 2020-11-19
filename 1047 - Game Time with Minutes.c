#include<stdio.h>
int main()
{
    int a,b,x,y,m,n;
    scanf("%d%d%d%d",&a,&b,&x,&y);
     m=x-a;
     if(m<0)
     {
         m=m+24;
     }
     n=y-b;
     if(n<0)
     {
         n=n+60;
         m--;
     }
     if(a==x && b==y)
     {
         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
     }
     else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",m,n);
    return 0;
}
