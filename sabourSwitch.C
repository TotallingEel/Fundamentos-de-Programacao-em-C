#include <stdio.h>

int main()
{

    printf("--- Operação com Switch Case --- \n \n");
    
    int numero1 = 0, numero2 = 0;
    int opcao = 0;
    int operador = 0;


    
    while(opcao != 2)
    {
        printf("1. Iniciar \n");
        printf("2. Sair \n");
    
        printf("Digite a Opção: ");
        scanf("%d", &opcao);

        printf("\n"); 
            
            switch(opcao)
            {
                case 1:

                    printf("1. Adição \n");
                    printf("2. Subtração \n");

                    printf("Escolha a operação: ");
                    scanf("%d", &operador);
                    
                    printf("Digite o número 1: ");
                    scanf("%d", &numero1);
            
                    printf("\n");

                    printf("Digite o número 2: ");
                    scanf("%d", &numero2);
                    
            
                switch(operador){
                    case 1:
                        printf("%d + %d = %d \n", numero1, numero2, numero1 + numero2);
                    break;
                    
                    case 2:
                        printf("%d + %d = %d \n", numero1, numero2, numero1 - numero2);
                        printf("Você não viu nada !!!! (¬_º) \n");
                    break;
                    
                    default:
                        printf("Operador Inválido \n");
                    break;
                }
                break;
                case 2:
                    printf("Programa Finalizado \n");
                break;

                default:
                    printf("Opção Incorreta \n");
            break;
        }
        printf("------------------ \n"); 

    }
    return 0; 
}