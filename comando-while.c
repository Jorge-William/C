#include <stdio.h>

int main()
{
    // Variavel de ponto flutuante (float) para armazenar a nota digitada
    float nota;
    


    // Solicita ao usuario um acao
    printf("\n Digite a nota: \n");


    // Comando para associar a nota digitada com a variavel acima
    scanf("%f", &nota);
    
    
    /*
     * Looping que continuara pedindo uma nota ate que o 
     * valor associado a variavel nota, seja = a -1 quando
     * o looping sera interrompido
     * 
     */

    while(nota != -1){
        
        if(nota >= 7){
            printf("\n Aprovado!!! \n");
        }else{ 
            printf("\n Reprovado!!! \n");
        }       
            printf("\n Digite a nota: \n");
            scanf("%f", &nota);
    }

    return 0;
}
