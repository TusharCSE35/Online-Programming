#include<stdio.h>
int main()
{
  long long int n,i,j,k=0,x;
  scanf("%lld",&n);
  long long int a[n];
  for(i = 0; i < n; i++)
  {
    scanf("%lld",&a[i]);
  }
  scanf("%lld",&x);
  for(i = 0; i < n; i++)
  {
    if(a[i] == x)
    {
      k++;
      j = i;
      break;
    }
  }
  if(k > 0)
  {
    printf("%d\n",j);
  }
  else
  {
    printf("-1\n");
  }
  return 0;
}