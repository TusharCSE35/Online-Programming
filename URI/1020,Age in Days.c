#include<stdio.h>
int main()
{
    int n,y,m,d;
    scanf("%d",&n);
    y=n/365;
    printf("%d ano(s)\n",y);
    m=(n%365)/30;
    printf("%d mes(es)\n",m);
    d=(n%365)%30;
    printf("%d dia(s)\n",d);
    return 0;
}
