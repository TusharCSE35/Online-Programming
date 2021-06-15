#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if((a > b && c == '>') || (a < b && c == '<') || (a == b) && c == '=')
    {
       printf("Right");
    }
    else
    {
        printf("Wrong");
    }
    return 0;
}
