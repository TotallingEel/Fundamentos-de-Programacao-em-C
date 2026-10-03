#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main()
{
// Calculadora

int operador = 0; 
float num, num2, result; 

while(operador != 2){   
    printf("--- Calculadora --- \n \n");
    printf("1. Abrir \n");
    printf("2. Fechar \n");

    printf("Escolha sua Opção: ");
    scanf("%d", &operador);

    if(operador == 2){
        printf("Operações Finalizadas \n");
    }
    
    else if (operador == 1)
    {
        int escolherCalc = 0;
        
        printf("1. Adição \n");
        printf("2. Subtração \n"); 
        printf("3. Multiplicação \n");
        printf("4. Divisão \n");
        
        printf("Escolha sua Operação: ");
        scanf("%d", &escolherCalc);
  
        if(escolherCalc == 1){
            printf("Digite o número 1: ");
              scanf("%f", &num);
      
            printf("Digite o número 2: ");
              scanf("%f", &num2);
      
            result = num + num2;
      
        }
        else if(escolherCalc == 2){
            printf("Digite o número 1: ");
              scanf("%f", &num);
      
            printf("Digite o número 2: ");
              scanf("%f", &num2);
      
            result = num - num2;
      
        }
        else if(escolherCalc == 3){
            printf("Digite o número 1: ");
              scanf("%f", &num);
      
            printf("Digite o número 2: ");
              scanf("%f", &num2);
      
              result = num * num2;
        
        }
        else if(escolherCalc == 4){
            printf("Digite o número 1: ");
              scanf("%f", &num);

            printf("Digite o número 2: ");
              scanf("%f", &num2);
            if(num2 != 0) {
                result = num/num2;
        } else {
            printf("Divisão por Zerro?, Está de Brindeira né? \n"); 
            return 1; 
        }
    
        } else {
            printf("Antes de mexer, aprenda a ler \n");
            return 1; 
        }
        printf("Resultado: %.2f \n", result);
    } else{
        printf("Novas opções depois, depois, depois....... \n obs: sem vontade, blz \n");
    }
    printf("------------------------------------------ \n");        
}
return 0;
}