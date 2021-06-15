#include <stdio.h>

int main(void)
{

    int i,numArray[4];
    for (i=0; i<4; i++)
    {
        scanf("%d", &numArray[i]);
    }

    int sum = 0;
    for (i=0; i<4; i++)
    {
        sum = sum + numArray[i];
    }

    printf("%d\n",sum);

    return 0;
}
