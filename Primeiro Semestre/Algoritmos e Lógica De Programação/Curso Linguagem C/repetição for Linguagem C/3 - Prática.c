#include<stdio.h>

int main (void){
	
	//Declarando e inicializando o vetor de notas.
	float notas [5] = {7, 8, 9.5, 9.9, 5.2};
	int i;
	
	printf("Exibindo os valores do vetor \n\n");
	
	for(i = 0; i <5; i++){
		
		printf("Notas[%d] = %0.1f\n", i, notas[i]);
	}
	
	return(0);
}
