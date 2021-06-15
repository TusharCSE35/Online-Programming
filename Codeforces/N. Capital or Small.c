#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c >= 65 && c <= 90)
    {
        printf("IS CAPITAL");
    }
    else
    {
        printf("IS SMALL");
    }
    return 0;
}
