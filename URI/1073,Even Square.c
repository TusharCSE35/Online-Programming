#include <stdio.h>
int main()
{
    int i,x,N;
    scanf("%d",&N);
    for(i = 2; i <= N; i= i + 2)
    {
        x = i * i;
        printf("%d^2 = %d\n",i,x);
    }
    return 0;
}
