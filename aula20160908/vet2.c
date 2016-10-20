#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int vetor[100], j, n;
    printf("\nDigite o comprimento da sequencia: ");
    scanf("%d", &n);
    printf("\nDigite uma sequencia com %d numeros inteiros: \n", n);
    for( j = 0; j < n; j ++)
    {
        scanf("\n%d", &vetor[j]);
    }
    for ( j = n-1; j >= 0; j --)
    {
        printf("\n%d\n\n",vetor[j]);
        printf("\n");
    }
    return 0;
}
