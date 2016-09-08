#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL; //inicializar ponteiros, nao esta apontando para nada
    printf("%p : %u\n", &numero, numero); //endereço:dado
    p = (unsigned char *) &numero;
    printf("%p: %X\n", p, *p);
    printf("%p: %X\n", p+1, *(p+1));
    printf("%p: %X\n", p+1, *(p+2));
    printf("%p: %X\n", p+1, *(p+3));
    return 0;
}
