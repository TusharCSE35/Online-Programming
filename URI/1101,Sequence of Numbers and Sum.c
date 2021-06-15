#include<stdio.h>
int main()
{
    int M,N,i,j,temp,sum = 0;
    for(i = 0; i < 100; i++)
    {
        scanf("%d %d",&M,&N);
        if(M <= 0 || N <= 0)
        {
            break;
        }
        if(M > N)
        {
            temp = M;
            M = N;
            N = temp;
        }
        for(j = M; j <= N; j++)
        {
            printf("%d ",j);
            sum = sum + j;
        }
        printf("Sum=%d\n",sum);
        sum = 0;
    }
    return 0;
}
