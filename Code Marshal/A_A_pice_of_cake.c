#include<stdio.h>
int main()
{
   int T,n,i,j;
   scanf("%d",&T);
   for(i = 1; i <= T; i++)
   {
       scanf("%d",&n);
       for(j = 0; j <= n; j++)
       {
           printf("%d",j);
           if(j < n)
           {
               printf(" ");
           }
       }
       if(i < T)
       {
       printf("\n");
       }
   }
   return 0;
}
