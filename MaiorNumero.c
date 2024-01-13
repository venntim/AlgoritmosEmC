#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Alunos: Lucas Dalla Bernadina Marsalha; Roberto Felipe Santos Souza; Victor Hugo Val�rio Barros

void main(){
	//Linha de codigo para reconhecer caracteres especial(fun��o a biblioteca locale.h)
	setlocale(LC_ALL, "Portuguese");

	//declarando as variaveis
	int n, maior;
	int i = 0;
	
	// Usando o while para verificar se o n�mero que o usu�rio digitou � -1
	while(n != -1){
		
		// Pedindo para o usu�rio informar os n�meros
		printf("Informe o %d� n�mero inteiro positivo ou -1 para finalizar o conjunto: ", i+1);
		scanf("%d", &n);
		
		//Caso o usuario digite um n�mero inteiro negativo != -1 ele mostra o aviso
		if(n < -1){
			printf("\nATEN��O: Insira apenas n�meros inteiros POSITIVOS ou -1 para finalizar o conjunto!\n\n");
			continue;
		}
	
	// 	Se o n for maior que o n�mero que est� na variavel maior o valor de n � atribuido para a vari�vel maior		
		if(n > maior){
			maior =n;
		}
		i++;			
	}
	
	// Mostrando o maior n�mero digitado para o usu�rio 	
	printf("\nConjunto finalizado!\n\n");
	printf("O maior n�mero digitado foi o %d", maior);
}
