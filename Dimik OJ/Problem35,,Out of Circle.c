#include<stdio.h>
#include<math.h>
int main()
{
   int T,Xc,Yc,r,s,x,y,i,j;
   scanf("%d",&T);
   for(i = 1; i <= T; i++)
   {
       scanf("%d %d %d %d %d",&Xc,&Yc,&r,&x,&y);
       s = sqrt((Xc-x)*(Xc-x) + (Yc-y)*(Yc-y));
       if(s < r)
       {
           printf("The point is inside the circles\n");
       }
       else
       {
          printf("The point is not inside the circles\n");
       }
   }
    return 0;
}
