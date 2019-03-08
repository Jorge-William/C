#include <stdio.h>

int main(){


    // declaracao de Array  --> tipo_de_dados nome_array[quantidade];

    // int camisas[11];
    // char nomes[200];
    // float precos[100];

    int array[5]; 

    // solicita valores para associar aos indices do array
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        printf("\n -------------------- \n");
    }
   
   // mostra os valores dos indices digitados 
    for(int i = 0; i < 5; i++){
        printf("%d \n", array[i]);
        printf("\n -------------------- \n");

    }    
}