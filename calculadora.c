#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    return ((float) a)/b;
}

void ler_valores(int *a, int *b) {
    printf("Insira os valores (a e b): ");
    scanf("%d %d", a, b);
}

int menu() {
    int op;

    printf("----MENU----\n");
    printf("1. Adicao;\n");
    printf("2. Subtracao;\n");
    printf("3. Multiplicacao;\n");
    printf("4. Divisao;\n");
    printf("0. Sair.\n");
    printf("Selecione: ");
    scanf("%d", &op);
    printf("\n");

    return op;
}

int main(void) {
  int a, b, op;

  do {
	op = menu();
	
	switch (op) {
	case 0:
	    printf("Fim do programa.\n");
	    break;
	case 1:
	    ler_valores(&a, &b);
	    printf("Soma: %d\n", add(a, b));
	    break;
	case 2:
	    ler_valores(&a, &b);
	    printf("Subtracao: %d\n", sub(a, b));
	    break;
  	case 3:
  	    ler_valores(&a, &b);
  	    printf("Produto: %d\n", mul(a, b));
  	    break;
  	case 4:
  	    ler_valores(&a, &b);
  	    printf("Resultado: %.2f\n", div(a, b));
  	    break;
  	default:
  	    printf("Informe uma opcao valida!\n");
  	}
  } while(op != 0);
}
