#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*Exemplo 1*/
	
	int valor1;
	float valor2;
	
	valor1 = 20;
	valor2 = 10.20;
	
	printf("OS VALORES DAS VARIAVEIS SAO: %d , %f  \n", valor1,valor2);
	
	/*Exemplo 2*/
	
	int Valor1, Valor2, total;

	
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &Valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &Valor2);
	
	printf("Os valores digitados sao: %d , %d \n" , Valor1 , Valor2);
	
	printf("O primeiro valor digitado e: %d \n", Valor1);
	printf("O segundo valor digitado e: %d \n", Valor2);
	
	total = Valor1 + Valor2;
	
	printf("A soma dos valores e: %d \n", total );
	
	total = Valor1 - Valor2;
	
	printf("A subtracao dos valores e: %d \n", total );
	
	total = Valor1 * Valor2;
	
	printf("A multiplicacao dos valores e: %d \n", total );
	
	total = Valor1 / Valor2;
	
	printf("A divisao dos valores e: %d \n", total );
	
	/*imprime hello word para evitar a maldicao*/
	printf("HELLO WORD!!!");
	
	return 0;

}
