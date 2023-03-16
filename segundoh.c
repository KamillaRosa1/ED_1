#include <stdio.h>
#include "selecao.h"
#define N 5

int main() {
	int v[N], i, op;
	
	for (int i = 0; i < N; i++) {
    	v[i] = 0;
	}
	
	for(i=0; i<N; i++){
		printf("insira o valor %d: ", i+1);
		scanf("%d", &v[i]);		
	}
	
	printf("\nEscolha o modo de ordenação:\n");
	printf("1-Bubble sort;\n2-Selection sort;\n3-Insertion Sort.\n>>");
	scanf("%d", &op);
		
	switch (op){
		
		case 1:
			bubblesort(v,N);
			break;
		case 2:
			selectionsort(v,N);
			break;
		case 3:
			insertionsort(v,N);
			break;
		default:
			printf("Opção inválida");
			break;
	}
	return 0;
}
