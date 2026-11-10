#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 43. 2.27 - Maiores e menores inteiros
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/


int main(void)
{
	int numero1, numero2, numero3, numero4, numero5;
	int maior, menor; 

	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &numero3);
	
	printf("Digite o quarto numero: ");
	scanf("%d", &numero4);
	
	printf("Digite o quinto numero: ");
	scanf("%d", &numero5);
	
	maior = numero1;
	menor = numero1;
	
	// Comparação com o número 2
	if (numero2 > maior)
		maior = numero2;	
	if (numero2 < menor)
		menor = numero2;
	
	// Comparação com o número 3
	if (numero3 > maior)
		maior = numero3;	
	if (numero3 < menor)
		menor = numero3;
	
	// Comparação com o número 4	
	if (numero4 > maior)
		maior = numero4;
	if (numero4 < menor)
		menor = numero4;
	
	// Comparação com o número 5
	if (numero5 > maior)
		maior = numero5;	
	if (numero5 < menor)
		menor = numero5;

	printf("Maior: %d \nMenor: %d", maior, menor); 

	return 0;
}
