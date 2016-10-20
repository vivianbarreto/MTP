#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int numero;
    int i, resultado;
    do {
        printf("Digite um numero inteiro nao negativo:\n \n");
        scanf("%d",&numero);
    } while(numero < 0);
    srand(time(0));
    i = rand()%2;
    printf("\n%d\n",i);
    resultado = i + numero;
    printf("\n%d\n",resultado);
    if(resultado%2 == 0)
        {
            printf("\nO numero %d e par.\n", resultado);
        }
    else
            printf("O numero %d e impar.\n",resultado);

    return 0;
}
