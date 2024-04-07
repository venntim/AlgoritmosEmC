#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float som(float a, float b){
	
	return  a + b;
}

float sub(float a, float b){
	
	return  a - b;
}

float mul(float a, float b){
	
	return  a * b;
}

float divi(float a, float b){
	return  a / b;
}

int menu(){
	int escolha;
	
	printf("---------------\n");
	printf("| Calculadora |\n");
	printf("---------------\n");
	
	printf("\nOperacoes disponiveis:\n");
	printf("\n( 1 ) - Soma\n( 2 ) - Subtracao\n( 3 ) - Multiplicacao\n( 4 ) - divisao\n");
}



void main() {
	float a, b;
	int opcao;
	
	menu();
	
	printf("\nInforme a operacao desejada: ");
	scanf("%d", &opcao);
	
	printf("\nInforme o primeiro valor: ");
	scanf("%f", &a);
	
	printf("\nInforme o segundo valor: ");
	scanf("%f", &b);
	
	float soma, subtracao, multiplicacao, divisao;
	
	switch(opcao)
	{
		case 1:
			soma = som(a, b);
			printf("\nResultado: %.2f", soma);
		break;
		
		case 2:
			subtracao = sub(a, b);
			printf("\nResultado: %2.f", subtracao);
		break;
		
		case 3:
			multiplicacao = mul(a, b);
			printf("\nResultado: %2.f", multiplicacao );
		break;
		
		case 4:
			divisao = divi(a, b);
			printf("\nResultado: %.2f", divisao);
		break;
		
		default:
			printf("Opcao Invalida");	
				
	}
	
}
