#include<stdio.h>
int main()
{
    float A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%f %f %f",&A,&B,&C);
    TRIANGULO=0.5*A*C;
    CIRCULO=3.14159*C*C;
    TRAPEZIO= 0.5*C*(A+B);
    QUADRADO= B*B;
    RETANGULO= A*B;
    printf("TRIANGULO: %.3f\n",TRIANGULO);
    printf("CIRCULO: %.3f\n",CIRCULO);
    printf("TRAPEZIO: %.3f\n",TRAPEZIO);
    printf("QUADRADO: %.3f\n",QUADRADO);
    printf("RETANGULO: %.3f\n",RETANGULO);
    return 0;
}
