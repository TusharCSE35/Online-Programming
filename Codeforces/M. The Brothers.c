#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,x,y, flag=1, m,n;

    gets(a);
    gets(b);

    x = strlen(a);
    y = strlen(b);

    for(i = 0; i < x; i++)
    {
        if(a[i] == ' ')
        {
            m=i;
            break;
        }
    }
    for(i = 0; i < y; i++)
    {
        if(b[i] == ' ')
        {
            n=i;
            break;
        }
    }
    for(i=m; i<x; i++)
    {
        if(a[m]==b[n])
        {
            m++;
            n++;
        }
        else
        {
            flag=0;
        }
    }
    if(flag)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
