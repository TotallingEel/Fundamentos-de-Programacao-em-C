#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 2, página 44. 2.32 - Calculadora de Índice de Massa Corporal
	Objetivo: Resolução acadêmica voltada para a prova introdutória da disciplina
 	============================================================================ 
*/

int main (void)
{
	float pesoQuilos, alturaMetros, IMC;
	
	printf("Digite seu Peso em Quilos: ");
	scanf("%f", &pesoQuilos);
	
	printf("Digite sua Altura em Metros: ");
	scanf("%f", &alturaMetros);
	
	IMC = pesoQuilos/(alturaMetros * alturaMetros); 
	
	printf("IMC: %.2f \n", IMC);
	
	if (IMC < 18.5)
		printf("Resultado: Abaixo do Peso \n\n");
	
	else if (IMC <= 24.9)
		printf("Resultado: Normal \n\n");
	
	else if(IMC <= 29.9)
		printf("Resultado: Acima do Peso \n\n");
	
	else
		printf("Resultado: Obeso \n\n");

	printf("=== Ministério da Saúde === \n");
	
	printf("===================================== \n");
	printf("=== Valores de IMC === \n");
	printf("Abaixo do Peso: menor que 18,5 \n");
	printf("Normal: 	entre 18,5 e 24,9 \n");
	printf("Acima do peso: 	entre 25 e 29,9 \n");
	printf("Obeso: 		30 ou mais \n");
	printf("===================================== \n");

	return 0; 
}
