#include <stdio.h>

/*	============================================================================
  	Autor: TotallingEel711
  	Instituição: Universidade Federal do Maranhão (UFMA)
	Curso: Bacharelado Interdisciplinar em Ciência e Tecnologia (BICT)
	Disciplina: Laboratório de Programação
 	Linguagem: C
  	Livro: C - Como Programar (Deitel & Deitel)
  	Exercício: Capítulo 3, página 79. 3.45 - Lados de um triângulo retângulo
	Objetivo: Resolução acadêmica voltada para a prova intermediária da disciplina
 	============================================================================ 
*/																				
																				
/* 	=============================================================================
	
	NOTA DE ESTUDO: 
 		Embora este exercício pertença ao capítulo 3 do livro (onde o uso de 
  		vetores ainda não é abordado), a implementação foi propositalmente adaptada 
  		com vetores (arrays) como prática avançada de antecipação de conteúdo 
  		visando a preparação para a prova intermediária (P2).
  		
  	OBS: Vetores são abordados no capítulo 6
	
	Conteúdo da P2: Vetores, String, Funções e Ponteiros. 
	Utilizados nesse exercício: Vetores 
																		
	=============================================================================
*/ 

int main(void)
{	
	// OBS: Uso de vetores aplicado aqui como treino extra para os conteúdos da P2.
	int valores[3] = {}, quadrado[3] = {}; // Variáveis como vetores
	
	int i = 0, j, operador = 1; // Variáveis do tipo contador e sentinela
	int soma = 0, hipotenusa; // Variáveis de operações 
	
	printf("Digite tres numeros distintos: \n");
		
	for (i = 0; i < 3; i++)
	{	
		do
		{
			scanf("%d", &valores[i]);	
			if (valores[i] < 0)
		{
			printf("Invalido \n");
			operador = 1;
		}
		else
		{
			operador = 0; 
		}	
		} while(operador != 0);		
	}
	
	printf("\n"); 
	
	for (j = 0; j < 3; j++)
	{
		quadrado[j] = valores[j] * valores[j];	
		printf("Quadrado[%d]: %d \n", j, quadrado[j]);
	}
	
	if (quadrado[0] >= quadrado[1] && quadrado[0] >= quadrado[2])
	{
		hipotenusa = quadrado[0];
		soma = quadrado[1] + quadrado[2]; 
	}
	else if (quadrado[1] >= quadrado[0] && quadrado[1] >= quadrado[2])
	{
		hipotenusa = quadrado[1]; 
		soma = quadrado[0] + quadrado[2];
	}
	else
	{
		hipotenusa = quadrado[2];
		soma = quadrado[0] + quadrado[1];
	} 
	
	printf("Soma: %d, Hipotenusa: %d \n", soma, hipotenusa);
	
	if (soma == hipotenusa)
		printf("Eh triangulo retangulo");
	else
		printf("Nao eh triangulo retangulo");
		
	return 0;
}
