#include <stdio.h>

// Use um compilador Online ou configure o VS Code
// OBS: VS Code não compila códigos
// OBS: Caso o VS Code falhe configure depois, use o dev C/C++

int main()
{
// Sistema de desempenho por letra
// fgets(nome da variavel, quantidade de caracteres, stdin);
// stdin é a entrada do tecaldo

char operador;

printf("--- Sistema à moda Americana --- \n \n");

printf("Bem Vindo ao Sistema \n \n"); 

    printf("Digite a Letra: \n");
        scanf(" %c", &operador);
    
if(operador == 'A'){
    printf(" \"Excelente! Desempenho impecável.\" ");
}else if(operador == 'B'){
    printf(" \"Muito bom! Continue assim.\" ");
}else if(operador == 'C'){
    printf(" \"Satisfatório, mas dá para melhorar.\" ");
}else if(operador == 'D'){
    printf(" \"Atenção! É preciso se dedicar mais.\" ");
}else if(operador == 'F'){
    printf(" \"Reprovado. Vamos revisar a matéria!\" ");
}else{
    printf("Letra inválida \n");
        return 1;
}

return  0; 

}