#include<stdio.h>
#include<math.h>

int main()
{
    double P1_x,P1_y,P2_x,P2_y,distancia;
    printf("Entre com x de P1: \n");
    scanf("%lf",&P1_x);
    printf("Entre com y de P1: \n");
    scanf("%lf",&P1_y);
    printf("Entre com x de P2: \n");
    scanf("%lf",&P2_x);
    printf("Entre com y de P2: \n");
    scanf("%lf",&P2_y);
    distancia = sqrt(pow(P2_x - P1_x,2.) + pow(P2_y - P1_y,2.));
    printf("A distancia entre eles e: %lf.\n",distancia);
    return 0;
}
