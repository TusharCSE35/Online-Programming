#include <stdio.h>

int main(void)
{

    int N, i;
    scanf("%d", &N);

    int numArray[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &numArray[i]);
    }

    int sum = 0;
    for(i = 0; i < N; i++)
    {
        sum += numArray[i] * numArray[i];
    }

    printf("%d\n",sum);

    return 0;
}
