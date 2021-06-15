#include<stdio.h>
int main()
{
    int T,X,N,i,j,k,l,a[10];
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%d %d",&X,&N);
        if(X > N)
        {
            printf("Invalid\n");
        }
        else
        {
            k = 0;
            for(j = X; j <= N; j = j + X)
            {
                a[k] = j;
                k++;
            }
            for(l = 0; l < k; l++)
            {
                printf("%d\n",a[l]);
            }
        }
        if(T >= i + 1)
        {
            printf("\n");
        }
    }
  return 0;
}



















