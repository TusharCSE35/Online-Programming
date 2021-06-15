#include<stdio.h>
int main()
{
    int a[100],i,n;

    printf("Enter the value of n : ");
    scanf("%d",n);

    printf("They are number : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",a[i]);
        printf("%d",a[i]);
    }


    return 0;
}
