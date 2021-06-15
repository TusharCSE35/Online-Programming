#include<stdio.h>
int main()
{
    int l,n,count = 0;
    scanf("%d %d",&l,&n);
    while(l <= n)
    {
        l = l*3;
        n = n*2;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
