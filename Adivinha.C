#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main() 
{
    int operador = 0;
    int secreto = 7;
    int quantidade = 0;
    
    printf("--- Jogo da Adivinhação --- \n \n"); 
    
    while (operador != 2) {
        printf("1. Jogar \n");
        printf("2. Sair \n");

        printf("Escolha a opção: ");
        scanf("%d", &operador);

            printf("\n");
        
        if(operador == 1){
            operador = 0;
            quantidade = 0;
            int numero = 0;
            while (numero != secreto){
                printf("Digite um número: ");
                scanf("%d", &numero);
                if(numero != secreto)
                {
                    quantidade++;
                }else
                {
                    printf("\n");
                    printf("Parabéns Você Ganhou !!!! \n");
                }
            }
            printf("Resumo da Partida: %d tentativa(s). \n", quantidade);
            }
        else if (operador == 2){
            printf("(T-T). Triste \n");
        }
        else{
            printf("Opção Inexistente \n");
        }
        printf("---------------------- \n");
        }
    return 0; 
}