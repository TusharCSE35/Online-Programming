#include<stdio.h>
int main()
{
    int S,X,cnt = 0;
    scanf("%d %d",&S,&X);

    while(S != 0)
    {
        S = S/X;
        cnt++;
    }

    printf("%d\n",cnt);

    return 0;
}
