#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int numero;
    int j, resultado;
    do {
        printf("Digite um numero inteiro nao negativo:\n \n");
        scanf("%d",&numero);
    } while(numero < 0);
    srand(time(0));
    j = rand()%2;
    printf("\n%d\n",j);
    resultado = j + numero;
    printf("\n%d\n",resultado);
    if(resultado%2 == 0)
        {
            printf("\nO numero %d e par.\n", resultado);
        }
    else
            printf("O numero %d e impar.\n",resultado);

    return 0;
}
