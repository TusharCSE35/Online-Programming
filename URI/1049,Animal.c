#include<stdio.h>
int main()
{
    char a[16],b[16],c[16];
    scanf("%s %s %s",&a,&b,&c);
    if(a[0] == 'v')
    {
        if(b[0] == 'a')
        {
            if(c[0] == 'c')
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if(c[0] == 'o')
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if(b[0] == 'i')
        {
            if(c[2] == 'm')
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(c[0] == 'h')
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minboca\n");
            }
        }
    }
return 0;
}
