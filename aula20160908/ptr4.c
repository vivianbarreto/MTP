#include <stdio.h>

#include <stdlib.h> //ponteiro



int main()

{

    unsigned int *numero1, *numero2, *p;

    int x, y, soma;

    printf("Digite dois numeros reais\n\n");

    scanf("%d %d", &numero1, &numero2);

    printf("\nEndereco de memoria do primeiro numero: %p \n\n", &numero1);

    printf("\nConteudo do primeiro numero: %d \n\n", numero1);

    printf("\nEndereco de memoria do segundo numero: %p \n\n", &numero2);

    printf("\nConteudo do segundo numero: %d \n\n", numero2);

    x   = numero1;

    y = numero2;

    soma = x + y;

    p = &soma;

    printf("\nEndereco de memoria do segundo numero: %p \n\n", p);

    printf("\nConteudo do segundo numero: %d \n\n", *p);

    return 0;

}
