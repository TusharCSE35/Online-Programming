#include<stdio.h>
int main()
{
    int N,x=0,y=0;
    scanf("%d",&N);
    printf("%d\n",N);
    x=N;
    y=x/100;
    printf("%d nota(s) de R$ 100,00\n",y);
    x=x%100;
    y=x/50;
    printf("%d nota(s) de R$ 50,00\n",y);
    x=x%50;
    y=x/20;
    printf("%d nota(s) de R$ 20,00\n",y);
    x=x%20;
    y=x/10;
    printf("%d nota(s) de R$ 10,00\n",y);
    x=x%10;
    y=x/5;
    printf("%d nota(s) de R$ 5,00\n",y);
    x=x%5;
    y=x/2;
    printf("%d nota(s) de R$ 2,00\n",y);
    x=x%2;
    y=x/1;
    printf("%d nota(s) de R$ 1,00\n",y);
    return 0;
}
