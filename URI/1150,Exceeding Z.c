#include<stdio.h>
int main()
{
    int X,Z,m,sum;
    scanf("%d",&X);
    sum = X;
    while(1)
    {
        scanf("%d",&Z);
        if(X < Z)
        {
            m = Z;
            break;
        }
        sum = sum + Z;
    }
    printf("%d\n",m/sum);
    return 0;
}
