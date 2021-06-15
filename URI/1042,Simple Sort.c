#include <stdio.h>
int main()
{
    int a,b,c,m,n,o,temp;
    scanf("%d %d %d",&a,&b,&c);
    m = a;
    n = b;
    o = c;
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",m,n,o);
    return 0;
}
