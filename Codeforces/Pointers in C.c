#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,a,b;
    scanf("%d %d",&x,&y);
    a = x +y;
    b = abs(x-y);
    printf("%d\n%d",a,b);
    return 0;
}
