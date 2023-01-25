#include <stdio.h>
#include <stdlib.h>

int main() {
	float nota1;
	float nota2;
	float total; 
	float media;
	
	nota1 = 9;
	nota2 = 8;
	total = nota1 + nota2;
	media = total / 2;
	
	printf("total: %f\n", total);
	printf("media: %f\n", media);
	
	return 0;
}
