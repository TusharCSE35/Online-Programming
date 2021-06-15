#include<stdio.h>
#include<math.h>
int main()
{
   long long int n,i,j,count,x,y;
   scanf("%lld",&n);
   for(i = 1; i <= n; i++)
   {
       count = 0;
       scanf("%lld",&x);
       y = sqrt(x);
       for(j = 2; j <= y; j++)
       {
           if(x % j == 0)
           {
               count++;
               break;
           }
       }
       if(count == 0)
       {
           printf("Prime\n");
       }
       else
       {
           printf("Not\n");
       }
   }
   return 0;
}
