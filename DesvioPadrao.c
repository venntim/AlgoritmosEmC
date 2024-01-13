#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Alunos: Lucas Dalla Bernadina Marsalha; Roberto Felipe Santos Souza; Victor Hugo Val�rio Barros

void main() {
	//Linha de codigo para reconhecer caracteres especial(fun��o a biblioteca locale.h)
	setlocale(LC_ALL,"Portuguese");
	
	//Pedindo para o us�ario informar a quantidade de alunos
	int qtdAlunos;

	printf("Informe a quantidade de alunos: ");
	scanf("%d", &qtdAlunos);
	
	// Criando a matriz com duas linhas refernte as duas turmas, mas com colunas variaveis dependendo qua quantidade de alunos 
	float notas[2][qtdAlunos];
	
	// criando as variaveis referente aos resultados que ser�o mostrados ao final do c�digo 
	float mediaX, mediaY, desvPadraoX, desvPadraoY;
	
	// criando as varioaveis de controle
	int i, n;
	
	printf("\n");
	
	// Pedindo para o usuario informar as notas das duas turmas
	// a variavei i � referente a linha da turma e a variavel n � referente a coluna das notas
	// loop principal acontece duas vezes fazendo todas as etapa para a turma 1 e logo em seguida para a turma 2
	for(i=0; i<2; i++){
		
		// pedindo para o usuario informar as notas, a turma vai depender do loop principal
		// o loop principal come�a com variavel i em 0 e nesse caso est� se referindo a turma 1 de acordo com a estrutura de decis�o
		int turma;
		for(n=0; n<qtdAlunos; n++){
			if(i == 0){ 
				turma = 1;
			}
			else{
				turma = 2;
			}
			//como estou utilizando o Locale, caso insira uma nota com float voc� deve informa-la com virgula(2,5) ao inv�s de ponto(2.5)
			printf("Turma %d: Informe a nota do %d� aluno: ", turma, n+1);
			scanf("%f", &notas[i][n]); 
		}
		
		printf("\n\n");
		
		// somando as notas da turma 
		float sumNotas = 0.0;
		for(n=0; n < qtdAlunos; n++){
			sumNotas += notas[i][n];	
		}
		
		// Criando as vari�veis para caucular o desvio padr�o e a m�dia 
		float media= sumNotas / qtdAlunos;;
		float pot = 0.0;
		float variancia = 0.0;
		float desvPadrao = 0.0;
		float som = 0.0;
		
		// Calculando a primeira parte da variancia --> E(xi-mediaX)� 
		for(n=0; n<qtdAlunos; n++){
			som += pow(notas[i][n] - media, 2.0);
		}
		
		// calculando a segunda parte da variancia -->  somat�rio/ totolalunos - 1(amostra)
		variancia = som / (qtdAlunos - 1.0);
		
		// Tirando a raiz quadrada para obter o desvio padr�o
		desvPadrao = pow(variancia, 1.0/2.0); // usando a fun��o de pot�ncia pow() da biblioteca math.h
		
		// atribuindo os resultados obtidos dentro das variaveis de resultados criadas no inicio do codigo
		// o IF atribui os resultados de acordo com a variavel de controle i do loop principal, 
		// se estiver na primeira repeti�ao (0) � atribuido para a primeira turma
		if(i==0){
			mediaX = media;
			desvPadraoX = desvPadrao; 
		}
		else{
			mediaY = media;
			desvPadraoY = desvPadrao; 
		}
	}
	// mostrando o resultado para o usu�rio
	printf("Turma 1:\nM�dia: %.2f\nDesvio Padr�o(amostral): %.2f\n\n", mediaX, desvPadraoX);
	printf("Turma 2:\nM�dia: %.2f\nDesvio Padr�o(amostral): %.2f", mediaY, desvPadraoY);		
}
