#include<stdio.h>
int main()
{
    double R,VOLUME;
    scanf("%lf",&R);
    VOLUME = (4.0/3) * 3.14159 * R * R * R;
    printf("VOLUME = %.3lf",VOLUME);
    return 0;
}
