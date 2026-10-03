#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main()
{

    printf("--- Operação com Switch Case --- \n \n");
    
    int numero1, numero2, soma;
    int operador = 0;


    
    while(operador != 3)
    {
        printf("1. Soma \n");
        printf("2. Subtração \n");
        printf("3. Sair \n");
    
        printf("Digite a Operação: ");
        scanf("%d", &operador);

        printf("\n"); 
        
        switch(operador)
        {
            case 1:
                printf("Digite o número 1: ");
                scanf("%d", &numero1);
            
                printf("\n");

                printf("Digite o número 2: ");
                scanf("%d", &numero2);
            
                printf("\n");
            
                soma = numero1 + numero2;
                printf("O Resultado da soma é: %d \n", soma);
            break;

            case 2:
                printf("Digite o número 1: ");
                scanf("%d", &numero1);
            
                printf("\n");

                printf("Digite o número 2: ");
                scanf("%d", &numero2);

                printf("\n");
            
                soma = numero1 - numero2;
                printf("O Resultado da <-soma-> (T-T) é: %d \n", soma);
            break;

            case 3:
                printf("Até Mais \n");
            break;
            
            default:
                printf("Operação Incorreta \n");
            break;
        }
        printf("------------------ \n"); 
    }  
    return 0; 
}