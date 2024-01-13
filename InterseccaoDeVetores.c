#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Alunos: Lucas Dalla Bernadina Marsalha; Roberto Felipe Santos Souza; Victor Hugo Val�rio Barros6

void main() {
		//Linha de codigo para reconhecer caracteres especial(fun��o a biblioteca locale.h)
	setlocale(LC_ALL,"Portuguese");
	
	//Criando os vetores e variaveis de controle
	int vetor1[10], vetor2[10], interseccao[10];
	int i, n, j, k;
	
	// Obtendo o valores do vetor 1 e vetor 2
	printf("Informe 10 n�meros para cada vetor. \n\n");
	
	for(i=0; i<2; i++){
		for(n=0; n<10; n++){
			printf("Vetor %d: informe o %d� n�mero: ", i+1, n+1);
			if(i==0){
				scanf("%d", &vetor1[n]);
			}
			else{
				scanf("%d", &vetor2[n]);
			}
		}
		printf("\n\n");
	}
	
	// Colocando os valores iguais entre os dois vetores em um novo vetor(interseccao) 
	
	int repetido; //contagem para ver se o n�mero se repete  
	
	for(i=0; i<10; i++){
		
		// verificando se o n�mero que ser� adcionado no vetor interseccao n�o se repete
		// se tiver um valor igual ao que est� dentro do vetor inteseccao, ele n�o ser� adcionado novamente
		for(n=0; n<10; n++){
			// quando o valor do vetor1(i) encontra um valor == ao vetor 2(n) ele entra na condi��o
			if(vetor1[i] == vetor2[n]){
				
				repetido = 0;
				
				// um nova verifica��o acontece para saber se o valor igual entre os dois vetores ja est� adcionado no vetor interseccao
				// o for ira percorrer por todos o indices de interseccao comparando com o vetor1{i}
                for(k = 0; k < j; k++){
                	// se o valor ja estiver contido na interseccao ele ira adcionar 1 a var repetido e ira sair do for com o braek;
                    if (interseccao[k] == vetor1[i]) { 
                        repetido = 1;
                        break;
                    }
                }
                // So entra nesse if caso o n�mero em comum entre o vetor 1 e 2 n�o esteja em intersecc�o
                // variavel de controle j representa a quantidade de numeros em comum e n�o repetidos entre vetor 1 e 2 que est�o dentro de interseccao
                // sempre que um novo valor entra, a variavel j � atualizada no final para poder incluir outro n�mero n�o repetido no proximo loop
                if (repetido == 0){
                    interseccao[j] = vetor1[i];
                    j++; 
                }			
			}		
		}
	}
	
	// Mostrando ao usu�rio os valores que contem nos dois vetores
	printf("N�meros que cont�m nos dois vetores: \n");
	for(i=0; i<j; i++){
		printf("%d ", interseccao[i]);
	}
}			
		


