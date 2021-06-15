#include<stdio.h>
int main()
{
    int n,i,j,k,a,count,x[100],temp;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        j = 0;
        count = 0;
        scanf("%d",&a);
        while(a != 0)
        {
            temp = a % 2;
            a = a / 2;
            x[j] = temp;
            count++;
            j++;
        }
        for(k = 0; k < count; k++)
        {
            printf("%d",x[k]);
        }
        printf("\n");
    }
    return 0;
}
