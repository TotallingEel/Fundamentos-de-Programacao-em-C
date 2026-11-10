#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 42. 2.19 - Aritmética, maior e menor valor
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main (void)
{

	int numero1, numero2, numero3, soma, media, produto;
	int maior = 0, menor = 0;
	
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &numero3);
	
	
	soma = numero1 + numero2 + numero3; 
	
	media = soma/3;
	
	produto = numero1 * numero2 * numero3;
	
	if (numero1 < numero2 && numero1 < numero3)
		menor = numero1;
	if (numero2 < numero1 && numero2 < numero3)
		menor = numero2;
	if (numero3 < numero2 && numero3 < numero1)
		menor = numero3;
	
	if	(numero1 > numero2 && numero1 > numero3)
		maior = numero1;
	if (numero2 > numero1 && numero2 > numero3)
		maior = numero2;
	if (numero3 > numero2 && numero3 > numero1)
		maior = numero3; 
		
		
	printf("Soma: %d\n Media: %d\n Produto: %d\n Menor: %d\n Maior: %d\n", soma, media, produto, menor, maior);
	
	return 0; 
}
