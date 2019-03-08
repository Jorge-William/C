#include <stdio.h>

int main(){


    // cria um array de 20 posicoes do tipo inteiro
    int num[20];


    // Alimenta o array num[20] com valores digitados pelo usuario
    for(int i = 0; i < 20; i++){
        scanf("%d", &num[i]);
    }

    // Mostra os valores digitados na ordem reversa
    for(int i = 19; i >= 0; i--){
        printf("%d \n", num[i]);
    }

    return 0;
}