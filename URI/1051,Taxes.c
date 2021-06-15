#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(0.00 <= x && x <= 2000.00)
    {
        printf("Isento\n");
    }
    else if(2000.00 < x && x <= 3000.00)
    {
        x = x - 2000.00;
        x = (x * 8) / 100;
        printf("R$ %.2f\n",x);
    }
    else if(3000.00 < x && x <= 4500.00)
    {
        x = x - 3000.00;
        x = (x * 18) / 100;
        printf("R$ %.2f\n",x + 80);
    }
    else
    {
        x = x - 4500.00;
        x = (x * 28) / 100;
        printf("R$ %.2f\n",x + 80 + 270);
    }
    return 0;
}
