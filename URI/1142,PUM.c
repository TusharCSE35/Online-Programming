#include<stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    for(i = 1,k = 1; i <= N; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("PUM\n");
        k = k +1;
    }
return 0;
}
