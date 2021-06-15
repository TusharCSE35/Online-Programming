#include<stdio.h>
int main()
{
    int x,y,z,m;
    char c,s;
    scanf("%d %c %d %c %d",&x,&c,&y,&s,&z);
    switch(c)
    {
    case '+':
        m = x + y;
        break;
    case '-':
        m = x - y;
        break;
    case '*':
        m = x * y;
        break;
    }
    if(m == z)
    {
        printf("Yes");
    }
    else
    {
        printf("%d",m);
    }
    return 0;
}
