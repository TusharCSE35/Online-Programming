#include<stdio.h>
int main()
{
   int x,y,z;
   float m;
   scanf("%d %d",&x,&y);
   z = (x + y)/2;
  m = (float)(x+y)/2;
   if(z == m)
   {
       printf("%d",z);
   }
   else
   {
       printf("%d",z + 1);
   }
    return 0;
}
