#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    for(i=x;i<=x+11;i=i+1)
    {
        if(i%2==1)
        {
        printf("%d\n",i);
        }
    }
    return 0;
}
