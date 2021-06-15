#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n],x,t = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%f",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        x = 1/(t+ (1/a[i]));
        t = 1/x;
    }
    printf("%f\n",x);
    return 0;
}
