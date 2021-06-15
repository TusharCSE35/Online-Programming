#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,len;
    char s[100];
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%s",s);
        len = strlen(s);
        for(j = 0; j < len; j++)
        {
            if(s[j] >= 'A' && 'Z' >= s[j])
            {
                printf("%d",s[j] - 64);
            }
        }
        printf("\n");
    }
    return 0;
}
