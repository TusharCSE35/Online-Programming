#include<bits/stdc++.h>
using namespace std;

int main()
{
  int T,i,n;
  scanf("%d",&T);
  for(i = 1; i <= T; i++)
  {
      scanf("%d",&n);
      if(n <= 10)
      {
          printf("0 %d\n",n);
      }
      else
      {
          printf("10 %d\n",n-10);
      }
  }
return 0;
}
