#include<stdio.h>
int main()
{
	long long int T,n,i,j,k;
	scanf("%lld",&T);
	for(i = 1; i <= T; i++)
	{
		scanf("%lld",&n);
		long long int a[n],min[n],max;
        for(j = 0; j < n; j++)
        {
        	scanf("%lld",&a[j]);
        }
        for(j = 0; j < n-1; j++)
        {
        	min[j] = a[j] + a[j+1];
        }
        max = min[0];
        for(j = 1; j < n-1; j++)
        {
    		if(max > min[j])
    		{
              max = min[j];  
    		}
        }
        printf("%lld\n",max);
	}
    return 0;
}