#include<stdio.h>
int main()
{
    int n,i,A = 0,D = 0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i = 0; i < n; i++)
    {
        if(a[i] == 'A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }
    if(A > D)
    {
        printf("Anton");
    }
    else if(D > A)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
