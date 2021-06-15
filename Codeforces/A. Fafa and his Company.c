#include<stdio.h>
int main()
{
    int n,x,i,count = 0;
    scanf("%d",&n);
   for(i = 1; i <= n/2; i++)
   {
      x = n - i;
      if(x % i == 0)
      {
          count++;
      }
   }
   printf("%d",count);
    return 0;
}
