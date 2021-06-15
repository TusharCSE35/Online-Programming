#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,x;
    scanf("%s",a);
    x = strlen(a);
    for(i = 0; i < x; i++)
    {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'Y' || a[i] == 'y' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            continue;
        }
        else
        {
            if(a[i] >= 65 && a[i] <= 90)
            {
               a[i] = a[i] + 32;
               printf(".%c",a[i]);
            }
            else
            {
                printf(".%c",a[i]);
            }
        }
    }
    return 0;
}
