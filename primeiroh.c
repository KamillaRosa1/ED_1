#include <stdio.h>
#include "funcao.h"

int main(){
	float x,y;
	int op1, op2;
	
	do {
		printf ("\nDigite o primeiro numero:\n>>");
		scanf("%f", &x);
		printf ("\nDigite o segundo numero:\n>>");
		scanf("%f", &y);
	
		printf ("Escolha a operacao desejada:");
		printf ("\n1-Soma;\n2-Subtracao;\n3-Divisao;\n4-Multiplicacao.\n>>");
		scanf("%d",&op1);
	
		switch (op1){
			
			case 1:
				printf("A soma de %.2f e %.2f = %.2f", x, y, soma(x,y));
				break;
			case 2:
				printf("A subtração de %.2f e %.2f = %.2f", x, y, sub(x,y));
				break;
			case 3:
				printf("A divisão de %.2f e %.2f = %.2f", x, y, div(x,y));
				break;
			case 4:
				printf("A Multiplicação de %.2f e %.2f = %.2f", x, y, mult(x,y));
				break;
		}
		printf("\nDeseja continuar?\n1-Sim;\n2-Não.\n>>");
		scanf("%d", &op2);
	} while (op2 == 1);
	
	return 0;
}
