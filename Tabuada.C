#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main()
{
    int numero;
    int operador = 0;

    printf("--- Tabuada ---");

    printf("\n \n"); 
    
    while(operador != 2)
    {
        printf("1. Tabuada \n");
        printf("2. Saída \n");

        printf("\n");
        
        printf("Digite a opção: ");
            scanf("%d", &operador);

        printf("\n"); 
        
        if (operador == 2)
        {
            printf("Até Mais");
        }
        else if (operador == 1)
        {
            printf("Digite um número: ");
            scanf("%d", &numero);
            printf("\n");
            
            for(int i = 0; i <= 10; i++)
            {
                printf("%d x %d = %d \n", numero, i, numero * i);
            }
            printf("-------------------- \n");
        }
        else
        {
            printf("Opção Innválida \n");
        }
        printf("\n"); 
    }
    return 0; 
}