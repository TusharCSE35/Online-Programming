#include<stdio.h>
int main()
{
    int i,N,A;
    scanf("%d",&N);
    for(i = 1; i <= 10; i++)
    {
        A = i * N;
        printf("%d x %d = %d\n",i,N,A);
    }
    return 0;
}
