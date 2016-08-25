#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int i,v,soma,soma_dos_dados;
    printf("Sorteio de tres numeros: \n");
    for(i=0;i<3;i++){
        v = rand()%6+1;
        printf("\n O numero e: %d \n",v);
        soma_dos_dados = soma_dos_dados+v;
    }
    printf("A soma e: %d ",soma_dos_dados);
    if(soma_dos_dados == 7 || soma_dos_dados == 11)
        printf("\nJogador ganhou!");
        else
            printf("\nJogador perdeu!");

    return 0;
}
