#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main() {
	setlocale(LC_ALL,"Portuguese");

	int posA, posB, aux,i;
	int vet[4];
	
	// Inserindo os valores do vetor
	for(i = 0; i<=3; i++){
		printf("\nInforme %dº número: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	// Mostra o vetor original na tela
	printf("\nVetor original: ");
	for(i = 0; i <= 3; i++){
		printf("%d ", vet[i]);		
	}
	
	// ALGORITMO SELECTION SORT
	
	// Selecionando a posição do vetor que será "fixa"
	for(posA = 0; posA <= 3; posA++){
		
		// percorrendo o restante do vetor
		for(posB = posA + 1; posB <= 3; posB++){
			
			// comparando se o valor fixo é maior que o restante dos valores do vetor
			if(vet[posA] > vet[posB]){
				// Caso verdadeiro ocorre a troca passando o menor valor para as primeiras posições 
				aux = vet[posB];
				vet[posB] = vet[posA];
				vet[posA] = aux;		
				
			}
		}
	}
	
	// Mostra o vetor ordenado na tela
	printf("\nVetor ordenado: ");
	for(i = 0; i <= 3; i++){
		printf("%d ", vet[i]);		
	}
}
