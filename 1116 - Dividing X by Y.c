int main()
{
    int t,i;
    float x,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%f",&a,&b);
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            x = a/b;
            printf("%0.1f\n",x);
        }
    }
    return 0;
}
