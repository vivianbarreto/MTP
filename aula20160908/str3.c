#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main()

{

    int i, j, palind = 1;

    char palavra[80];

    printf("Informe uma palavra:\n");

    gets(palavra);

    int n = strlen(palavra);

    i = 0;
    j = (n - 1);

    while ((i <= j) && (palind == 1))

        {

            if (toupper(palavra[i]) != toupper(palavra[j]))

                palind = 0;

    else {

            i = i + 1;

            j = j - 1;

            }

            }

            if (palind == 1)

                printf("\n%s E um palindromo.", palavra);

            else

                printf("\n%s Nao e um palindromo.", palavra);

}
