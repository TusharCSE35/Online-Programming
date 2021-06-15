#include<stdio.h>
int main()
{
    int N,i,a,sum=0,sum1=0,sum2=0,sum3=0;
    char ch;
    double x,y,z;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        scanf("%d %c",&a,&ch);
        if(ch == 'C')
        {
            sum1 = sum1 +  a;
        }
        if(ch == 'R')
        {
            sum2 = sum2 + a;
        }
        if(ch == 'S')
        {
            sum3 = sum3 + a;
        }
        sum = sum + a;
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    x = (sum1 * 100.00) / sum ;
    y = (sum2 * 100.00) / sum ;
    z = (sum3 * 100.00) / sum ;
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}
