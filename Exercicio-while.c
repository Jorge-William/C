#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4;
    

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: \n");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7) {
        printf("Voce foi aprovado!!! \n");
        printf("%.2f \n", media );
    } else {
        printf("Infelismente voce nao passou sua nota foi: \n");
        printf("%.2f \n", media );
    }
    
    
//************************************Segunda forma mais curta******************************************


    // Vaiaveis que armazenam a nota digitada e o acumulado das mesmas(soma) 
    float nota = 0 , soma = 0;

    // Variavel que servira de contador e divdendo na hora de tirar a media das notas
    int cont = 0;

    // Laco que recebera as notas enquanto nao for digitado o comando para que looping seja parado
    while(nota != -1){
        printf("Entre com a nota: ");
        scanf("%f", &nota);
        if (nota != -1) {
            soma += nota;
            cont++;
        }
        
    }
    printf("Media das notas: %.2f \n ", soma / cont);

    return 0;
}

