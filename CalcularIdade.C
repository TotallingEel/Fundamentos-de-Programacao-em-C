#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main() 
{
    
    int idade, anoAtual, anoNascimento;

    printf("--- Calculando a Idade --- \n");
    
    printf("Qual é a sua Idade? ");
    scanf("%d", &idade);
    
    printf("\n");
    
    printf("Em que anos estamos? ");
    scanf("%d", &anoAtual);
    
    printf("\n"); 

    anoNascimento = anoAtual - idade;
    
    printf("A partir dessas informações irei mostrar seu ano de nascimento \n");
    printf("O resulto foi: %d - %d = %d \n", anoAtual, idade, anoAtual - idade);

    printf("Resultado: %d", anoNascimento);

// Comentário Técnico
    
/* 
A variável anoNascimento serve para armazenar o valor da operação matemática, mas independentemente disso, as operações matemáticas podem ser resolvidas diretamente no printf. Com uma ressalva importante: a ordem das variáveis e a utilização correta dos %d para garantir o devido funcionamento do programa.
*/
    return 0;    
}