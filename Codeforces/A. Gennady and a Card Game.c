/*#include<stdio.h>
int main()
{
    char s1[2],s2[2];
    int i,x=0,j;
    scanf("%s",s1);
    for(i = 0; i < 5; i++)
    {
        scanf("%s",s2);
        for(j = 0; j < 2; j++)
        {
            if((s2[j] == s1[0])|| (s2[j] == s1[1]))
            {
                x++;
            }
        }
    }
    if(x > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char s[2],a[2];
    int i,j,k,x = 0;
    scanf("%s",&s);
    for(k = 0; k < 5; k++)
    {
        scanf("%s",&a);
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                if(s[i] == a[j])
                {
                    x++;
                }
            }
        }
    }

    if(x > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
