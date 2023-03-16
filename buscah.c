#include <stdio.h>
#include <stdlib.h>


void Bsequencial (int *v, int pesq){
	int i;
	char resp;
	bool acha = false;
		
		resp='s';
		while (resp=='s'){
			i=1;
			while (i<=10 && acha==false){
				if (pesq==v[i]){
					acha = true;
				}
				else{
					i++;
					}
			}
		if(acha == true){
			printf("O valor %d foi encontrado na posição %d", pesq, i);
		}
			else {
				printf("O valor %d não foi encontrado!");
				}
		}
		printf (" Deseja continuar?\ns- para sim ou n para não\n>> ");	
		scanf ("%c", &resp);
}

void Bbinario (int *v, int a, int pesq){
	int comeco, final, meio;
	char resp;
	bool acha;
			
		resp='s';
		while (resp=='s'){
			comeco = 1;
			final = a;
			acha = false;
			while (comeco <= final && acha == false){
				meio = (comeco + final)/2;
				if (pesq = v[meio]){
					acha = true;
				}
					else if (pesq < v[meio]){
						final = meio - 1;
					}
						else{
							comeco = meio + 1;
						}
			}
			if(acha == true){
			printf("O valor %d foi encontrado na posição %d", pesq, meio);
			}
				else {
				printf("O valor %d não foi encontrado!");
				}
		}
		printf (" Deseja continuar?\ns- para sim ou n para não\n>> ");	
		scanf ("%c", &resp);
	}
