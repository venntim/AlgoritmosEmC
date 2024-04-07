#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 a 60
// > 0 
// não se repete
bool verifica_repetido(int num, int num_sorteado){
	if(num == num_sorteado){
		return true;
	}
	return false;	
}

void main(){
	
	int i, j, num, sorteados[6];
	bool repetido;
	
	srand(time(NULL));

	for(i = 0; i <= 5; i++){
		num = rand() % 60 + 1;
		
		for(j = 0; j < i; j++){
			repetido = verifica_repetido(num, sorteados[j]);

			if(repetido){
				break;
			}
		}
		
		if(repetido){
			i = i - 1;
			
		}else{
			sorteados[i] = num;
		}
	}
	
	for(i= 0; i <= 5; i++){
		printf("%d ", sorteados[i]);
	}
}
