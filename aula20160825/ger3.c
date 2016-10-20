#include<stdio.h>

int main()
{
     int num, j;
     int perfeito = 0;
     printf("\nDigite um numero: \n\n");
     scanf("%d",&num);
     printf("\n");
     printf("\nDivisores: ");
     for(j = num-1; j != 0; j--)
        {
            if(num%j == 0)
            {
                printf("%d",j);
                perfeito = perfeito + j;
            }
        }
        if(perfeito == num)
            printf("\n\nPerfeito\n");
    return 0;
}


