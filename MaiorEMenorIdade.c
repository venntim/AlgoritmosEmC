#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Alunos: Lucas Dalla Bernadina Marsalha; Roberto Felipe Santos Souza; Victor Hugo Valério Barros

void main(){
	//Linha de codigo para reconhecer caracteres especial(função a biblioteca locale.h) 
	setlocale(LC_ALL, "Portuguese");

	//criando o vetor para as idades e declarando a variavel de controle
	int idades[5], i;
	
	//Loop para pegar as idades e inserir dentro de um vetor
	printf("Informe apenas idades distintas.\n\n");
	
    for(i=0; i<5; i++){
        printf("%d° idade: ", i+1);
        scanf("%d", &idades[i]);		  		
	}
	
	// Declarando as variaveis de maior e menor idadade
	int maiorIdade;
	int menorIdade = idades[0]; 

	// Loop para verificar a maior idade
    for(i=0; i<5; i++)
	 	if(idades[i] > maiorIdade){
     		maiorIdade = idades[i];
	 	}
	 	
	 // Loop para verificar a menor idade	
	for(i=0; i<5; i++){
	
		if(idades[i] < menorIdade){
     		menorIdade = idades[i];
	 	}
	}
	
	//mostrando a maior e a menor idade para o usuário
	printf("\nA idade do mais velho é %d anos.\n", maiorIdade);
	printf("A idade do mais novo é %d anos.", menorIdade);
}

