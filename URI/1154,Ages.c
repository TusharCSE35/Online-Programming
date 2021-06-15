#include<stdio.h>
int main()
{
    int a;
    double sum = 0, count = 0,result;
    while(1)
    {
        scanf("%d",&a);
        sum = sum + a;
        count++;
        if(a < 0)
        {
            sum = sum - a;
            break;
        }
    }
    count = count - 1;
    result = sum / count;
    printf("%.2lf\n",result);
    return 0;
}
