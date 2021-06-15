#include<stdio.h>
int main()
{
    int N,i;
    double X,Y,Z;
    scanf("%d",&N);
    {
        for(i = 1; i <= N; i++)
        {
            scanf("%lf %lf",&X,&Y);
            if(Y == 0)
            {
                printf("divisao impossivel\n");
            }
            else
            {
                Z = X/Y;
                printf("%.1lf\n",Z);
            }
        }
    }
    return 0;
}
