#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i,j,x =0,y=0,c,d;
   char a[10];
   scanf("%d",&n);
   for(i = 1; i <= n; i++)
   {
       c = 0;
       d = 0;
       scanf("%s",&a);
       for(j = 0; j < 3; j++)
       {
           if(a[j] == '-')
           {
               c++;
           }
           if(a[j] == '+')
           {
               d++;
           }
       }
       if(c == 2)
       {
           x = x + 1;
       }
       if(d == 2)
       {
           y = y + 1;
       }
   }
   printf("%d\n",y-x);
   return 0;
}
