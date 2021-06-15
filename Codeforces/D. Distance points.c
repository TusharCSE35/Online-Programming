#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,s;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    s = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("%.9lf",s);
    return 0;
}
