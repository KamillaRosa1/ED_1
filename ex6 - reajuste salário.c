#include <iostream>
#include <stdio.h>
#include <stdlib.h>

float mensalidade (int idade){
	float m;
	
	if(idade<7){
		m=60.00;
	}else 
		if(idade<=10){
			m=77.15;
			}else
				if(idade<=15){
					m=89.18;
				}else
				m=103.45;
	return m;
}


int main() {
	int idade;
	printf("Qual a idade? ");
	scanf("%d", &idade);
	printf("A mensalidade é %.2f", mensalidade(idade));
	return 0;
}
