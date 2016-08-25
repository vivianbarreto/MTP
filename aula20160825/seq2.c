#include <stdio.h>

int main()
{
    float base_triangulo, altura_triangulo, area_triangulo;
    printf("Entre com a base e altura do triangulo: \n");
    scanf("%f %f", & base_triangulo,&altura_triangulo);
    area_triangulo = (base_triangulo*altura_triangulo)/2;
    printf("A area do triangulo e: %.2f\n", area_triangulo);
    return 0;
}
