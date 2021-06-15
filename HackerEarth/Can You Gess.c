#include<stdio.h>
int main()
{
    int n,a,i,j,sum;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);
        sum = 0;
        for(j = 1; j < a; j++)
        {
            if(a % j == 0)
            {
                sum = sum + j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
