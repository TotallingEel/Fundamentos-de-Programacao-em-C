# include <stdio.h>

int main (void)
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("\n");
	
	numero = numero % 2;
	
	printf("Resultado do modulo(resto): %d \n", numero);
	
	if (numero == 0)
		printf("Par \n");
	else
		printf("Impar \n");

	return 0; 
}
