#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1 a 60
// > 0 
// não se repete

void main(){
	int i, num;
	
	for(i = 0; i <= 5; i++){
		srand(time(NULL));
		
		printf("%d ", rand() % 6);
	}
	
}
