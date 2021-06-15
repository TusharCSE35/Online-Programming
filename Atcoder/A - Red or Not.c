#include<stdio.h>
int main()
{
    int a;
    char s[10];
    scanf("%d %s",&a,&s);
    if(a >= 3200)
    {
        printf("%s",s);
    }
    if(a < 3200)
    {
        printf("red");
    }
    return 0;
}
