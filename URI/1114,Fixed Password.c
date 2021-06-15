#include<stdio.h>
int main()
{
    int x,i;
    for(i = 1; i <= 100; i++)
    {
        scanf("%d",&x);
        if(x == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
