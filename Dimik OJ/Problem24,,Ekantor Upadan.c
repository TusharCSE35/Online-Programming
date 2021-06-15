#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,a[100],i,j,k;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        for(j = 0; j < x; j++)
        {
            scanf("%d",&a[j]);
        }
        for(k = 0; k < x; k= k +2)
        {
            printf("%d",a[k]);
            if(x > k+1)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
}
