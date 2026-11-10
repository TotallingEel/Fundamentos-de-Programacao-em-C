#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 43. 2.26 - Múltiplos
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main(void)
{
	int numero1, numero2;
	
	printf("Digite dois numeros (ex: 12 4): ");
	scanf("%d %d", &numero1, &numero2);
	
	printf("\nResultado: %d \n\n", numero1 % numero2);
	
	if (numero1 % numero2 == 0)
		printf("%d eh multiplo de %d", numero1, numero2);
	else
		printf("%d nao eh multiplo de %d", numero1, numero2);
	
	return 0; 
}
