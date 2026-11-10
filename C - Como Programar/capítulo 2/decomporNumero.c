#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 43. 2.30 - Separando dígitos em um inteiro
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main(void)
{
	int numero, dezenaMilhar, unidadeMilhar, centena, dezena, unidade;
	
	printf("Digite um número de 5 digitos: ");
	scanf("%d", &numero);
	
	dezenaMilhar = (numero / 10000) % 10;
	unidadeMilhar = (numero / 1000) % 10;
	centena = (numero / 100) % 10;
	dezena = (numero / 10) % 10; 
	unidade = numero % 10;
	
	printf("Resultado: %d %d %d %d %d", dezenaMilhar, unidadeMilhar, centena, dezena, unidade); 
	
	return 0; 	
}
