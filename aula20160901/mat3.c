#include<stdio.h>
#include<math.h>

int main()
{
    double base,numero,logaritmo;
    double log10(double numero);
    printf("\nDigite um numero:\n");
    scanf("%lf", &numero);
    printf("\nO valor da base e:\n");
    scanf("%lf",&base);
    logaritmo = log(numero)/log(base);
    printf("\nO valor do logaritmo  e: %lf", logaritmo);
 return 0;
}


