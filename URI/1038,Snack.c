#include<stdio.h>
int main()
{
    int x,y;
    float a,b,c,d,e;
    scanf("%d %d",&x,&y);
    if(x == 1)
    {
        a = 4.00 * y;
        printf("Total: R$ %.2f\n",a);
    }
    if(x == 2)
    {
        b = 4.50 * y;
        printf("Total: R$ %.2f\n",b);
    }
     if(x == 3)
    {
        c = 5.00 * y;
        printf("Total: R$ %.2f\n",c);
    }
    if(x == 4)
    {
        d = 2.00 * y;
        printf("Total: R$ %.2f\n",d);
    }
     if(x == 5)
    {
        e = 1.50 * y;
        printf("Total: R$ %.2f\n",e);
    }
    return 0;
}
