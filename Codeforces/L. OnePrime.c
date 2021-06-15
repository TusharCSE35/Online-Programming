#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,y,i,count = 0;
    scanf("%lld",&n);
    y = sqrt(n);
    for(i = 2; i <= y; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
