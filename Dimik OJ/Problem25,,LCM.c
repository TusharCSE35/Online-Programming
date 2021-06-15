#include<stdio.h>
int main()
{
    int T,a,b,i,lcm,g,m,n,rem;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%d %d",&a,&b);
        m = a;
        n = b;
        while(b != 0)
        {
            rem = a % b;
            a = b;
            b = rem;
        }
        g = a;
        lcm = (m * n) / g;
        printf("LCM = %d",lcm);
        if(T >= i + 1)
        {
            printf("\n");
        }
    }
    return 0;
}
