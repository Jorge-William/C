#include <stdio.h>

int main (){
    
    int matriz[20][30];
    int linha, coluna;

    for(linha = 0; linha < 20; linha++){
        for(coluna = 0; coluna < 30; coluna++){
            scanf("%d", &matriz[linha][coluna]);
        }
    }

}