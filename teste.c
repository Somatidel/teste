#include <stdio.h>

void main(){
    float x, y;
    char soma, sub, mult, div, sair;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("f", &y);

    switch case 'a':
        printf("Operação soma");
        soma = x + y;
        break;
    case 'b':
        printf("Operação subtração");
        sub = x - y;
        break;
    case 'c':
        printf("Operação multiplicação");
        mult = x * y;
        break;
    case 'd':
        printf("Operação divisão");
        div = x / y;
        break;
    default:
        printf("Sair do menu")
        break;
}
