#include<stdio.h>
int main()
{
    int N,i;
    float a,b,c,x;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        x = ((a*2) + (b*3) + (c*5)) /(2 + 3 + 5);
        printf("%.1f\n",x);
    }
    return 0;
}
