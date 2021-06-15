#include<stdio.h>
int main()
{
	long long int n,i,j;
	scanf("%lld",&n);
	long long int a[n],b[n];
	for(i = 0; i < n; i++)
	{
		scanf("%lld",&a[i]);
	}
    for(i = 0,j = n - 1; i < n; i++,j--)
    {
    	b[i] = a[j];
    	printf("%lld ",b[i]);
    }
    return 0;
}