#include<stdio.h>
int main()
{
    int n,i,P=0,N=0,O=0;
    scanf("%d",&n);
    int a[10000];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > 0)
        {
            P++;
        }
        else if(a[i] < 0)
        {
            N++;
        }
        else
        {
            O++;
        }
    }
    printf("%.6lf\n%.6lf\n%.6lf\n",(double)P/n,(double)N/n,(double)O/n);
    return 0;
}
