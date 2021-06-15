#include<stdio.h>
int main()
{
    float X;
    scanf("%f",&X);
    if(0 < X && X <= 400.00)
    {
        printf("Novo salario: %.2f\n",X+(X*15)/100);
        printf("Reajuste ganho: %.2f\n",(X*15)/100);
        printf("Em percentual: 15 %%\n");
    }
    if(400.00 < X && X <= 800.00)
    {
        printf("Novo salario: %.2f\n",X+(X*12)/100);
        printf("Reajuste ganho: %.2f\n",(X*12)/100);
        printf("Em percentual: 12 %%\n");
    }
    if(800.00 < X && X <= 1200.00)
    {
        printf("Novo salario: %.2f\n",X+(X*10)/100);
        printf("Reajuste ganho: %.2f\n",(X*10)/100);
        printf("Em percentual: 10 %%\n");
    }
    if(1200.00 < X && X <= 2000.00)
    {
        printf("Novo salario: %.2f\n",X+(X*7)/100);
        printf("Reajuste ganho: %.2f\n",(X*7)/100);
        printf("Em percentual: 7 %%\n");
    }
    if(2000.00 < X)
    {
        printf("Novo salario: %.2f\n",X+(X*4)/100);
        printf("Reajuste ganho: %.2f\n",(X*4)/100);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}

