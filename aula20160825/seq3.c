#include <stdio.h>

int main()
{
    float a,b,c,media;
    printf("Digite as notas do aluno de 0 a 10:\n");
    scanf("\n%f \n%f \n%f",&a, &b, &c);
    media = (((2*a)+(3*b)+(5*c))/(2+3+5));
    printf("A media do aluno e:%.2f\n",media);
    return 0;
}
