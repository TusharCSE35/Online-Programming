#include<stdio.h>
int main()
{
    char ch[100];
    float x,y,z;
    scanf("%s",&ch);
    scanf("%f",&x);
    scanf("%f",&y);
    z=x+(y*15/100);
    printf("TOTAL = R$ %.2f\n",z);
    return 0;
}
