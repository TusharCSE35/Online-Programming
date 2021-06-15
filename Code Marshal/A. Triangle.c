#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x == y && y == z && z == x)
    {
        printf("Equilateral Triangle");
    }
    else if(x == y || y == z || z == x)
    {
        printf("Isosceles Triangle");
    }
   else
   {
       printf("Bad Triangle");
   }
    return 0;
}
