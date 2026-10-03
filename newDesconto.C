#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main()
{

// Sistema de Desconto

float number, valorBruto;
int quantidade; 
int operador = 0;

    while (operador != 2){
        printf("--- Sistema de Desconto --- \n \n");
        printf("Bem Vindo ao Sistema \n \n"); 

        printf("1. Iniciar \n");
        printf("2. Finalizar \n");

        printf("Escolha a opção: ");
        scanf("%d", &operador);
    
        printf("\n");
            
        if(operador == 2){
            printf("Sistema Finalizado \n");
        }
        
        else if(operador == 1){
            printf("Digite o preço do produto: ");
            scanf("%f", &number); 
    
            printf("\n");
    
            printf("Quantidade Comprada: ");
            scanf("%d", &quantidade); 
    
            valorBruto = number * quantidade; 
    
            printf("Resultado: %.2f \n \n", valorBruto); 
    
            if(valorBruto >= 100.00){
                valorBruto = valorBruto - (valorBruto * 0.10); 
                printf("Resultado com desconto: %.2f \n", valorBruto);
            } else {
                printf("Resultado sem desconto: %.2f \n", valorBruto);
            }
        }
        else{
            printf("Em manutenção para próximas opções, quando? Quando eu quiser kkkkkkkkkkkkkk \n");
        }
        printf("----------------------------------- \n");
    }    
return 0;
}