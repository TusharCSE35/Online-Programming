#include<stdio.h>
int main()

{
    float A,B,C,S,Y,Z;
    scanf("%f %f %f",&A,&B,&C);
    if((A + B) > C && (A + C) > B && (B + C) > A)
    {
        S = A + B + C;
        printf("Perimetro = %.1f\n",S);
    }
    else
    {
        Z = 0.5 * C * (A + B);
        printf("Area = %.1f\n",Z);
    }
    return 0;
}
