#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        fflush(stdout);
        if(n == 42)
        {
            break;
        }
        printf("%d\n",n);
    }
    return 0;
}

