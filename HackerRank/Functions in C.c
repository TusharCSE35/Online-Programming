#include<stdio.h>
int main()
{
    int n[4],i,j,max;
    for(i = 0; i < 4; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i = 0; i < 3; i++)
    {
        for(j = i + 1; j < 4; j++)
        {
            if(n[i] > n[j])
            {
                max = n[i];
                n[i] = n[j];
                n[j] = max;
            }
        }
    }
    printf("%d",n[3]);
    return 0;
}
