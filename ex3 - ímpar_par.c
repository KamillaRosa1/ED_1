#include <stdio.h>

int main() {
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	printf("O numero é %s", (num%2==0?"par":"impar"));
	return 0;
}
