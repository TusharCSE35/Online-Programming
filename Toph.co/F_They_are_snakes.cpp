#include<stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	int k[a][b];
	for(i = 0; i < a; i++)
	{
		for(j = 0; j < b; j++)
		{
			scanf("%d",&k[i][j]);
		}
	}
    for(i = 0; i < a; i++)
	{
		if(i % 2 == 0)
		{
			for(j = 0; j < b; j++)
		    {
			    if(i == a-1 && j == b-1)
			    	{
			    		printf("%d",k[i][j]);
			    	}
			    else
			    {
			    	printf("%d ",k[i][j]);
			    }	
		    }
		}
		else
		{
			for(j = b - 1; j >= 0; j--)
			{
				if(i == a-1 && j == 0)
			    	{
			    		printf("%d",k[i][j]);
			    	}
			    else
			    {
			    	printf("%d ",k[i][j]);
			    }	
			}
		}     
	}
    return 0;
}