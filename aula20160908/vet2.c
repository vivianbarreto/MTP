#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int vetor[100], i, n;
    printf("\nDigite o comprimento da sequencia: ");
    scanf("%d", &n);
    printf("\nDigite uma sequencia com %d numeros inteiros: \n", n);
    for( i = 0; i < n; i ++)
    {
        scanf("\n%d", &vetor[i]);
    }
    for ( i = n-1; i >= 0; i --)
    {
        printf("\n%d\n\n",vetor[i]);
        printf("\n");
    }
    return 0;
}
