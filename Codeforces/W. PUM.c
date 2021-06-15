#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= 3; j++,k++)
        {
            printf("%d ",k);
        }
        printf("PUM\n");
        k++;
    }
return 0;
}
