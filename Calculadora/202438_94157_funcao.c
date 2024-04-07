#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void menosMeio(){
	
	printf("-0,5\n");
	
}

float calculaAreaRetangulo(float base, float altura){
	
	float area;
	
	area = base * altura;
	
	//printf("%f\n", area);
	
	return area;		
}

void teste(int c){
	
	c = c * 2;
}

int main() {
	
	menosMeio();
	menosMeio();
	menosMeio();
	menosMeio();
	
	float area;
	float a, b;
	int c;
	float base, altura;
	
	base = 3;
	altura = 5;
	a = 4;
	b = 5;
	c = 3;
	
	area = calculaAreaRetangulo(a,b);
	printf("%f\n", area);
	
	printf("%f\n", calculaAreaRetangulo(3, 5));
	
	teste(c);
	printf("%d\n", c);
	
	return 0;
}
