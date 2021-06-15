#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j,x;
    char s[100];

    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        gets(s);
        x = strlen(s);

        for(j = 0 ; j < x; j++)
        {
            if(s[j] >= 97 && s[j] <= 123)
            {
                s[j] = s[j] - 32;
            }
            else
            {
                s[j] = s[j];
            }
        }

        printf("Case %d: %s\n",i,s);
    }

    return 0;
}

