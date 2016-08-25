#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int numero, i,v,resultado;
    printf("Digite um numero inteiro nao negativo:\n \n");
    scanf("%d",&numero);
    v = rand()%2;
    for(i=0;i<1;i++){
        printf("%d",rand()%2);
    }
    resultado = numero + v;
    if(numero%2 == 0) printf("\nO numero e par.\n");
    else printf("O numero e impar.\n");

    return 0;
}
