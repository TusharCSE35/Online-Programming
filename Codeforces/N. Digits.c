#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,len;
    char a[1000000];
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%s",a);
        len = strlen(a);
        for(j = 0; j < len ; j++)
        {
            printf("%d",a[j] - '0');
            if(j != len - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

