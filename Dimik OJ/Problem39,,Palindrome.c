#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,l;
    char s[1000],p[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",&s);
        l = strlen(s);
        for(i = 0,j = l-1; j >= 0; i++,j--)
        {
            p[i] = s[j];
        }
        p[i] = '\0';
        j = strcmp(p,s);
        if(j == 0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}
