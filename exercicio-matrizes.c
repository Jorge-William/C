#include <stdio.h>

int main(){

/**
*   Crie um programa que armazene numeros em dois vetores inteiros de cinco elementos cada, depois gere e imprima o vetor dos dois
*/


    int vetor01[5], vetor02[5], soma[5], somar;

    printf("Digite os valores para preencher o primeiro vetor: \n");

    // Laço For para inserir dados no vetor vetor01[]
    for(int cont = 0; cont < 5; cont++){
        scanf("%d", &vetor01[cont]);
        somar += vetor01[cont];
    }

    printf("\n Ok. Agora digite os valores para preencher o segundo vetor: \n");


    // Laço For para inserir dados no vetor vetor02[]
    for(int cont = 0; cont < 5; cont++){
        scanf("%d", &vetor02[cont]);
        somar += vetor02[cont];
    }
    
    printf("+-------------------------------------------+\n");
    printf("|       0|      1|       2|       3|        3.9\n");
    printf("+-------------------------------------------+\n");
    // vetor soma[] criado com a soma dos indices dos primeiros vetores
    for(int i = 0; i < 5; i++){
        soma[i] = vetor01[i] + vetor02[i];
        printf("      %d|", soma[i]);
    }

    





}