#include <stdio.h>

int main(void)
{
    int N, i;
    scanf("%d", &N);
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];

    // Get the numArrayA
    for (i=0; i<N; i++)
    {
        scanf("%d", &numArrayA[i]);
    }

    // Get the numArrayB
    for (i=0; i<N; i++)
    {
        scanf("%d", &numArrayB[i]);
    }

    for (i=0; i<N; i++)
    {
        sumArray[i] = numArrayA[i] + numArrayB[i];
        printf("%d ", sumArray[i]);
    }
    printf("\n");
    return 0;
}
