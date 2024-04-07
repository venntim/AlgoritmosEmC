#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int posA, posB, aux,i;
	int vet[4] = {3,1,8,5};
	
	
	for(posA = 0; posA <= 3; posA++){
		
		for(posB = posA + 1; posB <= 3; posB++){
			
			if(vet[posA] > vet[posB]){
				aux = vet[posB];
				vet[posB] = vet[posA];
				vet[posA] = aux;		
				
			}
		}
	}
	
	for(i = 0; i <= 3; i++){
		printf("%d ", vet[i]);		
	}
}
