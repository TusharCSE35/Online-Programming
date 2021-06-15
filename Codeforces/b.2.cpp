#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,n,c,a,temp;
	scanf("%d",&x);
	while(1)
	{
		if(x==0)break;
		n=x,c=0;
		while(n>0)
		{
			temp=n%10;
			if(temp%2==0)c=1;
			if(c)continue;
			n/=10;
		}
		if(!c)
		{
			a=1;
			for(i=2; i<=sqrt(x); i++)
			{
				if(x%2==0)
				{
					a=0;
					break;
				}
			}
			if(a)printf("%d. Prime\n",x);
		    else printf("%d. Not Prime\n",x);
		    break;
		}
		x--;
	}
	

	return 0;
}