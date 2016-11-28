#include <stdio.h>
#include <complex.h>

int main ()

{

    double complex Z1, conjug, prod;

    double preal, pimag;

    printf("\nEntre com a parte real de Z1:\n\n ");

    scanf("%lf", &preal);

    printf("\nEntre com a parte imaginaria de Z1:\n\n ");

    scanf("%lf", &pimag);

    Z1 = preal + pimag * I;

    conjug = preal - pimag * I;

    prod = Z1 * conjug;

    printf("Numero complexo: %lf + %lf i\n\n", creal(Z1), cimag(Z1) );

    printf("Conjugado do numero complexo: %lf + (%lf i)\n\n", creal(conjug), cimag(conjug));

    printf("O produto do numero complexo pelo seu conjugado e: %lf\n\n", creal(prod), cimag(prod));

    return 0;

}
