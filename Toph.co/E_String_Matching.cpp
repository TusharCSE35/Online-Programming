#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,x,y,count = 0;
	char a[100001],b[100001];
	scanf("%s %s",&a,&b);
	x = strlen(a);
    y = strlen(b);
    for(i = 0; i < x; i++)
    {
       if(a[i] == b[i] || a[i] + 32 == b[i] || a[i] - 32 == b[i])
       	    {
       	    	count++;
       	    }
    }
    if(count == x)
    {
    	printf("YES\n");
    }
    else
    {
    	printf("NO\n");
    }
	return 0;
}