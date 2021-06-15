#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float x,y;
	int a,b;
	scanf("%f %f",&x,&y);
	a = (int)x;
	b = (int)y;
	if(x == a && y == b)
    {
       printf("%d %d",a+b,a-b);
    }
	else
	{
      printf("%f %f",x+y,x-y);
	}
    return 0;
}

