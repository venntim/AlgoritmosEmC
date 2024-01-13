#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Alunos: Lucas Dalla Bernadina Marsalha; Roberto Felipe Santos Souza; Victor Hugo Valério Barros

void main() {
	//Linha de codigo para reconhecer caracteres especial(função a biblioteca locale.h)
	setlocale(LC_ALL,"Portuguese");
	
	//Pedindo para o usúario informar a quantidade de alunos
	int qtdAlunos;

	printf("Informe a quantidade de alunos: ");
	scanf("%d", &qtdAlunos);
	
	// Criando a matriz com duas linhas refernte as duas turmas, mas com colunas variaveis dependendo qua quantidade de alunos 
	float notas[2][qtdAlunos];
	
	// criando as variaveis referente aos resultados que serão mostrados ao final do código 
	float mediaX, mediaY, desvPadraoX, desvPadraoY;
	
	// criando as varioaveis de controle
	int i, n;
	
	printf("\n");
	
	// Pedindo para o usuario informar as notas das duas turmas
	// a variavei i é referente a linha da turma e a variavel n é referente a coluna das notas
	// loop principal acontece duas vezes fazendo todas as etapa para a turma 1 e logo em seguida para a turma 2
	for(i=0; i<2; i++){
		
		// pedindo para o usuario informar as notas, a turma vai depender do loop principal
		// o loop principal começa com variavel i em 0 e nesse caso está se referindo a turma 1 de acordo com a estrutura de decisão
		int turma;
		for(n=0; n<qtdAlunos; n++){
			if(i == 0){ 
				turma = 1;
			}
			else{
				turma = 2;
			}
			//como estou utilizando o Locale, caso insira uma nota com float você deve informa-la com virgula(2,5) ao invés de ponto(2.5)
			printf("Turma %d: Informe a nota do %dº aluno: ", turma, n+1);
			scanf("%f", &notas[i][n]); 
		}
		
		printf("\n\n");
		
		// somando as notas da turma 
		float sumNotas = 0.0;
		for(n=0; n < qtdAlunos; n++){
			sumNotas += notas[i][n];	
		}
		
		// Criando as variáveis para caucular o desvio padrão e a média 
		float media= sumNotas / qtdAlunos;;
		float pot = 0.0;
		float variancia = 0.0;
		float desvPadrao = 0.0;
		float som = 0.0;
		
		// Calculando a primeira parte da variancia --> E(xi-mediaX)² 
		for(n=0; n<qtdAlunos; n++){
			som += pow(notas[i][n] - media, 2.0);
		}
		
		// calculando a segunda parte da variancia -->  somatório/ totolalunos - 1(amostra)
		variancia = som / (qtdAlunos - 1.0);
		
		// Tirando a raiz quadrada para obter o desvio padrão
		desvPadrao = pow(variancia, 1.0/2.0); // usando a função de potência pow() da biblioteca math.h
		
		// atribuindo os resultados obtidos dentro das variaveis de resultados criadas no inicio do codigo
		// o IF atribui os resultados de acordo com a variavel de controle i do loop principal, 
		// se estiver na primeira repetiçao (0) é atribuido para a primeira turma
		if(i==0){
			mediaX = media;
			desvPadraoX = desvPadrao; 
		}
		else{
			mediaY = media;
			desvPadraoY = desvPadrao; 
		}
	}
	// mostrando o resultado para o usuário
	printf("Turma 1:\nMédia: %.2f\nDesvio Padrão(amostral): %.2f\n\n", mediaX, desvPadraoX);
	printf("Turma 2:\nMédia: %.2f\nDesvio Padrão(amostral): %.2f", mediaY, desvPadraoY);		
}
