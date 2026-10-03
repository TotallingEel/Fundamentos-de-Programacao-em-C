#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main()
{
// Sistema de verificação de Idade

    printf("--- Sistema de verificação de Idade --- \n"); 

    int idade;
    int operador = 0; 
    float altura;

    while(operador != 2){
        printf("Bem Vindo ao Sistema \n \n");

        printf("1. Entrar \n");
        printf("2. Sair \n");

        printf("Escolha a sua opção: ");
        scanf("%d", &operador);

        printf("\n"); 
        
        if(operador == 2)
            printf("Até Mais \n");
        
        else if(operador == 1){
            printf("Informe a sua Idade: ");
            scanf("%d", &idade);
    
            printf("\n"); 
    
            printf("Informe a sua Altura "); 
            scanf("%f", &altura); 
    
            printf("\n"); 
    
            if(idade >= 12 && altura >= 1.40) {
                printf("Tenha um ótimo passeio e boa diversão \n");
            } else {
                printf("Infelizmente você não pode utilizar o brinquedo \n"); 
            }
        }
        else
            printf("Meu Patrão, as opção estão no Menu, Leias \n");
        printf("-------------------------- \n");
    }
    return 0;
}