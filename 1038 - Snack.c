#include<stdio.h>
int main()
{
    int x,y;
    float a;
    scanf("%d%d",&x,&y);
    if(x==1)
    {
        a = y*4.00;
        printf("Total: R$ %0.2f\n",a);
    }
    else if(x==2)
    {
        a = y*4.50;
        printf("Total: R$ %0.2f\n",a);
    }
    else if(x==3)
    {
        a = y*5.00;
        printf("Total: R$ %0.2f\n",a);
    }
    else if(x==4)
    {
        a = y*2.00;
        printf("Total: R$ %0.2f\n",a);
    }
    else if(x==5)
    {
        a = y*1.50;
        printf("Total: R$ %0.2f\n",a);
    }
    return 0;
}
