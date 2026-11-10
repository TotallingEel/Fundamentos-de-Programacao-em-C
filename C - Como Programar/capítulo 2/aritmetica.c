#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 42. 2.16 - Aritmética
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main (void)
{
	int numero1, numero2; 
	int soma, diferenca, produto, quociente, modulo; 
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1); 

	printf("Digite o segundo numero: ");
	scanf("%d", &numero2); 
	
	soma = numero1 + numero2;
	produto = numero1 * numero2;
	diferenca = numero1 - numero2; 
	quociente = numero1 / numero2;
	modulo = numero1 % numero2;
	
	printf("\n"); 
	
	printf("Soma: %d \nProduto: %d \nDiferenca: %d \nQuociente: %d \nModulo: %d", soma, produto, diferenca, quociente, modulo); 
	
	return 0; 
}
