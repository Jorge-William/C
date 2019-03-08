#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[20], media, soma = 0;
    int i;

    for(i = 0; i < 20; i++){

        scanf("%f ", &notas[i]);
        soma += notas[i];
    }

    media = soma / 20;

    for(i = 0; i < 20 ; i++){

        if(notas[i] > media){
            printf(" %f", notas[i]);
        }
    }


    return 0;
}