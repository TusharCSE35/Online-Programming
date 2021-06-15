#include<stdio.h>
int main()
{
    int a,b,s,MaiorAB;
    scanf("%d %d %d",&a,&s,&b);
    MaiorAB=(a+b+abs(a-b))/2;
    printf("%d eh o maior\n",MaiorAB);
    return 0;
}
