#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

#include <stdio.h>
int main()
{

int operador = 0;  
float C, F;     
    
//Converter a temperatura em Celsius para Fahrenheit

printf("--- Converter a temperatura em Celsius para Fahrenheit ---\n \n");    

    while(operador != 3){
        
        printf("1. Celsius para Fahrenheit \n");
        printf("2. Fahrenheit para Celsius \n");
        printf("3. Sair \n"); 

        printf("Digite a opção: ");
        scanf("%d", &operador); 
        if (operador == 3){
            printf("Até Mais \n");
        }
        else if(operador == 1){
            printf("Temperatura em Celsius: ");
            scanf("%f", &C); 
    
            F = ((C * 9/5) + 32);
    
            printf("Resultado da converção é: %.2f \n", F); 
        } 
        else if (operador == 2) {
    
            printf("Temperatura em Fahrenheit: ");
            scanf("%f", &F); 
    
            C = (5*F - 160)/9; 
    
            printf("Resultado da converção é: %.2f \n", C);   
        }
        else{
            printf("Escolha Inválida \n");
        }
        printf("------------------- \n"); 
    }
    return 0;
}