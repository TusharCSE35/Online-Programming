#include <stdio.h>
int main()
{
    int A[100],i,x=0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }
    int max = A[0];
    for(i = 1; i < 10; i++)
    {

        if(max < A[i])
        {
            max = A[i];
            x=i+1;
        }
    }
    printf("%d\n%d\n",max,x);
    return 0;
}
