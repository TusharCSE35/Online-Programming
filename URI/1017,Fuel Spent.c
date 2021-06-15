/*
#include<stdio.h>
int main()
{
    float V,T,S;
    scanf("%f %f",&V,&T);
    S= (V*T)/12;
    printf("%.3f\n",S);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int V,T,S;
    scanf("%d %d",&V,&T);
    S=V*T;
    float L=S/12.0;
    printf("%.3f\n",L);
    return 0;
}
