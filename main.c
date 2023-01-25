#include <stdio.h>
#include <stdlib.h>

int main() {
	float desconto;
	float salario;
	float inss;
	
	desconto = 5;
	salario = 1417.44;
	inss = salario * 0.11;
	desconto += 2.5;
	salario -= inss;
	
	printf("deconto: %f\n", desconto);
	printf("salario: %f\n", salario);
	
	return 0;
}
