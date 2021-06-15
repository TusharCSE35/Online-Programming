#include<stdio.h>
int main()
{
    int s,e,x;
    scanf("%d %d",&s,&e);
    if(s != 24)
    {
        if(s > e)
        {
            x = (e + 24) - s;
            printf("O JOGO DUROU %d HORA(S)\n",x);
        }
        if(e > s)
        {
            x = e - s;
            printf("O JOGO DUROU %d HORA(S)\n",x);
        }
        if(e == s)
        {
            printf("O JOGO DUROU 24 HORA(S)\n");
        }

    }
    return 0;
}
