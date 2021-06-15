#include<stdio.h>
int main()
{
    int T,N,i,j,a[60],fibo;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        a[0] = 0,a[1] = 1;
        fibo = 0;
        scanf("%d",&N);
        if(N <= 1)
        {
            printf("Fib(%d) = %d\n",N);
        }
        else
        {
            for(j = 2 ; j < N; j++)
            {
                a[j] = a[j - 1] + a[j - 2];
            }
            printf("Fib(%d) = %d\n",N,a[j]);
        }
    }
    return 0;
}
