#include<stdio.h>
int main()
{
	int x,i,sum = 0;
    scanf("%d",&x);
    for(i = 4; i <= x; i=i+2)
    {
    	sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}