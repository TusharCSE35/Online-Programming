#include <stdio.h>
int main()
{
    int i,a,m = 0,n = 0,o = 0,p = 0;
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a);
        if(a % 2 == 0)m++;
        else n++;
        if(a > 0)o++;
        else if(a < 0)p++;
    }
    printf("%d valor(es) par(es)\n",m);
    printf("%d valor(es) impar(es)\n",n);
    printf("%d valor(es) positivo(s)\n",o);
    printf("%d valor(es) negativo(s)\n",p);
    return 0;
}
