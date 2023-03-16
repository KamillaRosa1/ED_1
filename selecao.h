//Bubble sort
void bubblesort(int *v,int n){
	int i, j, aux;
	
	for(i=0; i<=(n-1); i++){
		for (j=(i+1); j < n;j++){
			if(v[i] > v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	printf("O vetor ordenado é:\n>>");
	for(i=0; i<=n ; i++){
		printf ("%d", v[i]);
	}
}

//Selection sort
void selectionsort (int *vetor, int n) {
  int i, j, min, aux;
  
  for (i = 0; i < (n - 1); i++) {/* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < n; j++) {/* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
  		 min = j;
      }
    } /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }/* Imprime o vetor ordenado */
	printf("O vetor ordenado é:\n>>");
	for(i=0; i < n ; i++){
		printf ("%d", vetor[i]);
	}
	printf ("\n");
}

//Insertion sort
void insertionsort(int *v, int n) {
      int i, j, aux;
      for (i = 1; i < n; i++) {
            j = i;
            while (j > 0 && v[j - 1] > v[j]) {
                  aux = v[j];
                  v[j] = v[j - 1];
                  v[j - 1] = aux;
                  j--;
            }
      }
	printf ("O vetor ordenado é:\n>>");
	for(i=0; i<=n ; i++){
		printf ("%d", v[i]);
	}
}
