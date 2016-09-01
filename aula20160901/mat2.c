#include<stdio.h>
#include<math.h>

int main()
{
    double b , c, a, angulo;
    double cos(double angulo);
    printf("\nDigite o lado b do triangulo:\n");
    scanf("%lf", &b);
    printf("\nDigite o lado c do triangulo:\n");
    scanf("%lf",&c);
    printf("\nDigite o valor do angulo do triangulo:\n");
    scanf("%lf", &angulo);
    a = sqrt( (pow(b,2.))+ (pow(c,2.))-(2*b*c*cos(angulo)));
    printf("\n O valor do lado a do triangulo e: %lf", a);
 return 0;
}

