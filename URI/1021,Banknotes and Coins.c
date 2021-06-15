#include<stdio.h>
int main()
{
    double N;
    int x,y;
    scanf("%lf",&N);
    printf("NOTAS:\n");
    x=N*100;
    y=x/10000;
    printf("%d nota(s) de R$ 100.00\n",y);
    x=x%10000;
    y=x/5000;
    printf("%d nota(s) de R$ 50.00\n",y);
    x=x%5000;
    y=x/2000;
    printf("%d nota(s) de R$ 20.00\n",y);
    x=x%2000;
    y=x/1000;
    printf("%d nota(s) de R$ 10.00\n",y);
    x=x%1000;
    y=x/500;
    printf("%d nota(s) de R$ 5.00\n",y);
    x=x%500;
    y=x/200;
    printf("%d nota(s) de R$ 2.00\n",y);
    printf("MOEDAS:\n");
    x=x%200;
    y=x/100;
    printf("%d moeda(s) de R$ 1.00\n",y);
    x=x%100;
    y=x/50;
    printf("%d moeda(s) de R$ 0.50\n",y);
    x=x%50;
    y=x/25;
    printf("%d moeda(s) de R$ 0.25\n",y);
    x=x%25;
    y=x/10;
    printf("%d moeda(s) de R$ 0.10\n",y);
    x=x%10;
    y=x/5;
    printf("%d moeda(s) de R$ 0.05\n",y);
    x=x%5;
    y=x/1;
    printf("%d moeda(s) de R$ 0.01\n",y);
    return 0;
}
