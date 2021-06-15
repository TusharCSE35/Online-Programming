#include <stdio.h>
int main()
{
    int n,fibo ;
    int first = 0,second = 1,count = 0;
    scanf("%d",&n);
    while(count < n)
    {
        if(count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        if(count>0)
            printf(" %d",fibo);
        else
            printf("%d",fibo);
        count++;
    }
    return 0;
}
