#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 42. 2.20 - Diâmetro, circunferência e área de um círculo
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main(void)
{
	float raio; 
	float pi = 3.14159;
	
	printf("Digite o raio: ");
	scanf("%f", &raio); 
	
	printf("Raio: %.2f \n", raio); 
	printf("Diametro = 2 * raio, cujo resultado eh: %.2f \n", 2 * raio);
	printf("Circunferencia = 2 * pi * raio, cujo resultado eh %.2f \n", 2 * pi * raio); 
	printf("Area do Circulo = pi * (raio * raio), cujo resultado eh: %.2f \n", pi * (raio * raio)); 
	
	return 0; 
}
