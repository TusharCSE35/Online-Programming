#include<stdio.h>
int main()
{
    int i,count = 0;
    float a,sum = 0,x;
    for(i = 1; i <= 6; i++)
    {
        scanf("%f",&a);
        if(a >= 0)
        {
            sum = sum + a;
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    x = sum / count;
    printf("%.1f\n",x);
    return 0;
}

