#include<stdio.h>
#include<math.h>
int main()
{
	int t,j,i,l;
	long long int x,k,d,n[100000];
	scanf("%d",&t);
	for(j = 1;j <= t; j++)
	{
		scanf("%lld",&k);
		for(i = 0; i < k; i++)
		{
			scanf("%lld",&n[i]);
		}
		x=k;
		if(k % 2 == 0)
        {
            k = k/2;
        }
        else
        {
            k = k/2 + 1;
        }
		for(l = 0; l < k; l++)
		{
			d = n[l] * n[x-(l+1)];
		}
		printf("Case %d: %lld\n",j,d);
	}
	return 0;
}

