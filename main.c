#include <stdio.h>
#include <stdlib.h>
int main() {
	float nota1 = 10;
	float nota2 = 9;
	float nota3 = 9.5;
	float nota4 = 8.5;
	double valortotal;	
	valortotal = nota1 + nota2 + nota3 + nota4;
	
	printf("Primeira nota: 10 \n");
	printf("Segunda nota: 9 \n");
	printf("Terceira nota: 9.5 \n");
	printf("Quarta nota: 8.5 \n");
	printf("------------------------------ \n");
	printf("valor total: %lf \n", valortotal);
	
	system ("pause");
	system ("cls");
	
	double media = valortotal / 4;	
	printf("Media da sua nota %lf \n", media);
	
	
	system ("pause");
	system ("cls");

	printf("|------------------------------------------|\n");
	printf("|               9 METROS                   |\n");
	printf("|                                          |\n");
	printf("|3 METROS                          3 METROS|\n");
	printf("|                                          |\n");
	printf("|               9 METROS                   |\n");
	printf("|------------------------------------------|\n");
	printf ("");
	int area;
	int altura = 3;
	int comprimento = 9;

	area = altura * comprimento;
	printf("A area desse retangulo: %d \n", area);
	
	system ("pause");
	system ("cls");

	int valor1 = 10;
	int valor2 = 1;
	
	//printf("Primeiro valor: 10\n");
	//printf("Segundo valor: 1\n");
	printf("");
	printf("1- 10 e maior que 1? (1 para verdadeiro 0 para falso)\n");
	printf("%d \n", valor1 > valor2);
	printf("2- 10 e menor que 1? (1 para verdadeiro 0 para falso)\n");		
	printf("%d \n", valor1 < valor2);
	
	system ("pause");
	system ("cls");
	
	float number = 327;
	float number2 = 425;
	double valorDivisao;
	valorDivisao = number / number2;
	
	printf("Primeiro numero: 327\n");
	printf("Segundo numero: 425\n");
	printf("-------------------------\n");
	printf("Valor da divisao: %lf \n", valorDivisao);
	
	system ("pause");
	system ("cls");
	
	printf("Vamos calcular quilos em gramas!\n");
	printf("\n");
	
	float peso = 75;
	float gramas;
	gramas = peso * 1000;
	
	printf("Voce tem 75kg\n");
	printf("Suas gramas sao: %f\n", gramas);
	
	system ("pause");
	system ("cls");
	
	float quiloRefeicao = 1.3;
	float taxaRefeicao = 12;	
	float valorRefeicao = quiloRefeicao * taxaRefeicao;
	
	printf("valor da taxa: %f reais\n", taxaRefeicao);
	printf("Peso do seu prato (em quilos): %f\n", quiloRefeicao);
	printf("Sua refeicao ficou: %f reais\n", valorRefeicao);
	
	system ("pause");
	system ("cls");

	float celsius;
	float Fahrenheit = 15;
	
	celsius = (Fahrenheit - 32) / 1.8;
	
	printf("Fahrenheit: %f\n", Fahrenheit);
	printf("celsius: %f\n", celsius);
	
	system ("pause");
	system ("cls");
	
	int valorRaio = 4;
	float valorDiametro;
	float valorComprimento;
	
	valorDiametro = 2 * valorRaio;
	valorComprimento = 2* 3.14 * valorRaio;
	
	printf("%f\n", valorDiametro);
	printf("%f\n", valorComprimento);
	
	system ("pause");
	system ("cls");
	

	return 0;
}
