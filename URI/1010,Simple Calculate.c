#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    float z1,z2,Z;
    scanf("%d %d %f",&x1,&y1,&z1);
    scanf("%d %d %f",&x2,&y2,&z2);
    Z=(y1*z1)+(y2*z2);
    printf("VALOR A PAGAR: R$ %.2f",Z);
}
