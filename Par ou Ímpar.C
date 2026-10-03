#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main() 
{
    printf("--- Par ou Ímpar, Eis a questão? --- \n");

    int numero, modulo;
    int operador = 0;

    printf("\n");
    
    while(operador !=2)
    {
        printf("1. Par ou Ímpar \n");
        printf("2. Sair \n");
        
        printf("Digite sua opção: ");
            scanf("%d", &operador);

        printf("\n");
        
        if(operador == 2)
            printf("Finalizado a Operação \n");

        else if(operador == 1)
        {     
            printf("Digite seu número: ");
                scanf("%d", &numero);

            printf("\n");
    
            modulo = numero % 2;
    
            printf("O Resultado da operação é: %d \n", modulo);
    
            printf("\n");
    
            if (modulo == 0)
                printf("O número %d é Par \n", numero);
            else
                printf("O número %d é Ímpar \n", numero);
        }
        else
            printf("Opção Inválida \n");
        
        printf("------------------- \n");
    }
    return 0; 
}
/*
Calouro, não se assuste porque o if(modulo == 0) está sem chaves {}.
Em C, quando não usamos chaves, o 'if' executa apenas a PRIMEIRA instrução logo abaixo dele.

ATENÇÃO: a indentação aqui é só para organização visual! O C ignora o alinhamento.
Se você tentar colocar duas linhas dentro do 'if' sem usar chaves, o 'else' vai dar erro de sintaxe 
(ou a segunda linha vai rodar sempre, independente da condição).

Dica de ouro pra vida: na dúvida, coloque SEMPRE as chaves {}!
Podem ficar tranquilos, seu PC não vai infartar e ainda vai servir pro seu Roblox.
Se tiverem dúvidas sobre desempenho, testem o Mineirinho como benchmark!
*/