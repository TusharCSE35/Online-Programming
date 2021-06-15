#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len,s = 0,f= 0,x,y;
    char a[100];
    scanf("%d %s",&n,&a);
    len = strlen(a);
    for( i = 0; i < len; i++)
    {
        if(a[i] == 'S')
        {
            s++;
        }
        else
        {
            f++;
        }
    }
    x = len - s;
    y = len - f;
    if (x <= y)
    {
        printf("NO");
    }
    else
        {
            printf("YES");
        }
return 0;
}
