#include<stdio.h>
int main()
{
    float x,y,sum = 0.0;
    int i,count = 0;
    for(i = 1; i <= 100; i++)
    {
        scanf("%f",&x);
        if(x < 0.0 || x > 10.0)
        {
            printf("nota invalida\n");
        }
        else if(x >= 0.0 && x <= 10.0)
        {
            count++;
            sum = sum + x;
            if(count == 2)
            {
                break;
            }
        }
    }
    y = sum / 2.0;
    printf("media = %.2f\n",y);
    return 0;
}
