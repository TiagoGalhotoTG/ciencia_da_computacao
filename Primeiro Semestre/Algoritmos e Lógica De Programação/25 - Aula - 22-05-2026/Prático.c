#include<stdio.h>

//Protótipo
int soma(int a, int b);

int soma(int a,int b)
{
	
	return a+b;
}

void boas_vindas()
{
	printf("\nBoas Vindas!\n");
}

//Declaração
int main(void){
	
	int n1, n2, resultado;
	
	
	    boas_vindas();
		printf("Informe um numero ineteiro: ");
		scanf("%d", &n1);
		
		printf("Informe um número inteiro: ");
		scanf("%d", &n2);
	
	
	resultado = soma(n1,n2);
	printf("A soma eh: %d", resultado);
	
	return 0;
}


