#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,R1,R2,X,Y;
    scanf("%f %f %f",&A,&B,&C);
    X = B * B - 4 * A * C;
    if(A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else if(X < 0)
    {
       printf("Impossivel calcular\n");
    }
    else
    {
        Y = sqrt(X);
        R1 = (-B + Y) / (2 * A);
        R2 = (-B - Y) / (2 * A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    return 0;
}
