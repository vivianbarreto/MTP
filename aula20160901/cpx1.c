#include<stdio.h>
#include<complex.h>

int main ()
{
    double complex Z1, Z2, soma, produto;
    double preal, pimag;
    printf("\nEntre com real de Z1: \n");
    scanf("%lf",&preal);
    printf("\nEntre com imaginario de Z1: \n");
    scanf("%lf",&pimag);
    Z1 = preal + pimag * I;
    printf("\nEntre com real de Z2: \n");
    scanf("%lf",&preal);
    printf("\nEntre com imaginario de Z2: \n");
    scanf("%lf",&pimag);
    Z2 = preal + pimag * I;
    soma = Z1 + Z2;
    produto = Z1 * Z2;
    printf("\nSoma:%lf + %lf i\n",creal(soma),cimag(soma));
    printf("\nSoma:%lf /_ %lf rad\n",cabs(soma),carg(soma));
    printf("\nProduto:%lf + %lf i\n",creal(soma),cimag(soma));
    printf("\nProduto:%lf /_ %lf rad\n",cabs(soma),carg(soma));
    return 0;
}
