
#include<stdio.h>
int main()
{
    int n,i,m=1;
    scanf("%d",&n);
    for(i = 2; i <= n; i++)
    {
        m = m * i;
    }
    printf("%d\n",m) ;
    return 0;
}
