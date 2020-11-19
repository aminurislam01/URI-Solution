#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,x,y;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    x = (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    y = sqrt(x);
    printf("%0.4lf\n",y);
    return 0;
}
