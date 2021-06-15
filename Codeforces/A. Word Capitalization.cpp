#include<bits/stdc++.h>
int main()
{
    char a[1001];
    int i,x;
    scanf("%s",&a);
    x = strlen(a);
    if(a[0] >= 97 && a[0] <= 122)
    {
        printf("%c",a[0]-32);
    }
    else
    {
        printf("%c",a[0]);
    }
    for(i = 1; i < x; i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
