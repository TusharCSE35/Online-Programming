#include<stdio.h>
int main()
{
    int i,T,Pa,Pb,y;
    double G1,G2;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        y = 0;
        scanf("%d %d %lf %lf",&Pa,&Pb,&G1,&G2);
        while(Pa <= Pb)
        {
            Pa = Pa + ((Pa * G1) / 100);
            Pb = Pb + ((Pb * G2) / 100);
            y++;
            if(y > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(y <= 100)
        {
            printf("%d anos.\n",y);
        }
    }
    return 0;
}
