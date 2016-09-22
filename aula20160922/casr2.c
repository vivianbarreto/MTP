#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

void recebe_dado(char tipo, void * endereco, int n = 0);
int main()
{
    int i;
    float f;
    char c;
    printf("Entre com um inteiro: ");
    recebe_dado('i', &i);
    printf("Entre com um float: ");
    recebe_dado('i', &f);
    printf("Entre com um caractere: ");
    recebe_dado('i', &c);
    printf("Entre com uma frase: ");
    recebe_dado('s', s, sizeof(s));
    printf("Para %d, o quadrado: %d\n", i, i*i);
    printf("Para %f, a raiz: %f\n", f, sqrt(f));
    printf("Para %c, o caractere: %c\n", c, (islower(c))? toupper(c) : tolower(c));
    return 0;
}

void recebe_dado(char tipo, void * endereco, int n = 0){
    int c;
    switch(tipo){
    case 'i': scanf("%d", (int*) endereco);
    break;
    case 'f': scanf("%f", (float*) endereco);
    break;
    case 'd': scanf("%lf", (double*) endereco);
    break;
    case 'c': scanf("%c", (char*) endereco);
    break;
    case 's': fgets((char*)endereco, n, stdin);
              endereco[strlen((char*)endereco)-2] = '\0';
    break;
    }
    while((c= getchar()) != EOF && c != '\n'); //apagar o buffer de entrada
}
