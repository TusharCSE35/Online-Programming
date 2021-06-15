#include <stdio.h>
int main()
{
    int row, i, n, s;
    scanf("%d", &n);
    s = n;
    for (row = 1; row <= n; row++)
    {
        for (i = 1; i < s; i++)
        {
            printf(" ");
        }
        for (i = 1; i <= 2*row - 1; i++)
        {
            printf("*");
        }
        printf("\n");
        s--;
    }
    return 0;
}
