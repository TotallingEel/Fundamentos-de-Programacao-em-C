#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 42. 2.18 - Comparando Inteiros
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main (void)
{
	
	int numero1, numero2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	if (numero1 > numero2)
		printf("%d eh maior \n", numero1);
		
	if (numero2 > numero1)
		printf("%d eh maior \n", numero2);	
		
	if (numero1 == numero2)
		printf("Esses numeros sao iguais");

	return 0; 
}
