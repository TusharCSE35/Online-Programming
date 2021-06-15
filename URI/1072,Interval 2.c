#include<stdio.h>
int main()
{
    int i,X,N,A = 0,B = 0;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        scanf("%d",&X);
        if(X >= 10 && X <= 20)
        {
            A++;
        }
        else
        {
            B++;
        }
    }
    printf("%d in\n",A);
    printf("%d out\n",B);
    return 0;
}
