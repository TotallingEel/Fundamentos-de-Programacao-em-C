#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 3, página 79. 3.46 - Fatorial
	Objetivo: Resolução acadêmica voltada para a prova intermediária da disciplina
 	============================================================================ 
*/

int main(void)
{	
	// Resolução do Exercício 3.46 Letra A
	printf("=== Fatorial === \n \n");
	
	int numero, fatorial, produto = 1; 
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	fatorial = numero;
	
	while (fatorial > 0)
	{
		produto *= fatorial;
		fatorial--; 
	}
	printf("Produto: %d \n\n", produto); 
	
	printf("===============================================================================\n\n");
	
	// Resolução do Exercício 3.46 letra B	
	printf("=== Fatorial da Constante e === \n \n"); 
	
	float numerador = 1, denominador, e = 1, denominador_fatorial, termo = 1;
	int limite; 
	
	printf("Digite um limite para o fatorial da constante e: ");
	scanf("%d", &limite);

	while (termo <= limite)
	{
		denominador_fatorial = termo; 
		denominador = 1;
		while(denominador_fatorial > 0)
		{
			denominador *= denominador_fatorial;  
			denominador_fatorial--; 		
		} 
		e += numerador/denominador; 
		termo++; 
	}
	printf("%.2f \n\n", e);
	
	printf("===============================================================================\n\n");
	
	// Resolução do Exercício 3.46 letra C	
	printf("=== Fatorial da Constante e^x === \n \n"); 
	
	float termo_superior = 1, termo_inferior, exp_x = 1, denominador_produto, identificador = 1;
	int cota, x; 
	
	printf("Digite o valor de x: ");
	scanf("%d", &x); 
	
	printf("\n"); 
	
	printf("Digite um limite para o fatorial da constante e^x: ");
	scanf("%d", &cota);

	while (identificador <= cota)
	{
		denominador_produto = identificador; 
		
		int i = 1, potencia = 1; 
		
		while(i <= identificador)
		{
			potencia *= x ; 
			i++; 
		}
		
		termo_superior = potencia; 
		
		termo_inferior = 1;
		while(denominador_produto > 0)
		{
			termo_inferior *= denominador_produto;  
			denominador_produto--; 		
		} 
		
		exp_x += termo_superior/termo_inferior; 
		identificador++; 
	}
	
	printf("%.2f", exp_x);

	return 0; 
}
