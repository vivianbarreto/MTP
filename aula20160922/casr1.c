#include <stdio.h>
#include <string.h>
#include <time.h>


int numero_selecionado();

int main()

{

    srand(time(0));

    int num, num_sort, i;

    printf("\nDigite um numero inteiro de 1 a 10\n\n");

    scanf("%d", &num);

    num_sort =  rand()%10 + 1;

    printf("\nO numero sorteado foi\n\n%d\n\n", num_sort);

    if(num == num_sort)

            {

                numero_selecionado();

            }

    else

        printf("Fim do sorteio!\n\n");

    return 0;

}



int numero_selecionado() {

    printf("Parabens!!\n\n");

    return 0;

}

