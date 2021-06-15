#include<stdio.h>
int main()
{
    int x;
    double y,R;
    scanf("%d %lf",&x,&y);
    if(x == 1)
    {
        R = y * 4.00;
    }
    if(x == 2)
    {
        R = y * 4.50;
    }
    if(x == 3)
    {
        R = y * 5.00;
    }
    if(x == 4)
    {
        R = y * 2.00;
    }
    if(x == 5)
    {
        R = y * 1.50;
    }
    printf("Total: R %.2lf",R);
    return 0;
}
