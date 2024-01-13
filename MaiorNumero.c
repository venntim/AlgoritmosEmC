#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Alunos: Lucas Dalla Bernadina Marsalha; Roberto Felipe Santos Souza; Victor Hugo Valério Barros

void main(){
	//Linha de codigo para reconhecer caracteres especial(função a biblioteca locale.h)
	setlocale(LC_ALL, "Portuguese");

	//declarando as variaveis
	int n, maior;
	int i = 0;
	
	// Usando o while para verificar se o número que o usuário digitou é -1
	while(n != -1){
		
		// Pedindo para o usuário informar os números
		printf("Informe o %dº número inteiro positivo ou -1 para finalizar o conjunto: ", i+1);
		scanf("%d", &n);
		
		//Caso o usuario digite um número inteiro negativo != -1 ele mostra o aviso
		if(n < -1){
			printf("\nATENÇÃO: Insira apenas números inteiros POSITIVOS ou -1 para finalizar o conjunto!\n\n");
			continue;
		}
	
	// 	Se o n for maior que o número que está na variavel maior o valor de n é atribuido para a variável maior		
		if(n > maior){
			maior =n;
		}
		i++;			
	}
	
	// Mostrando o maior número digitado para o usuário 	
	printf("\nConjunto finalizado!\n\n");
	printf("O maior número digitado foi o %d", maior);
}
