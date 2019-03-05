#include <stdio.h>

int main()
{
	
    int idade;
    float altura;
//    
//    printf("Digite sua idade: ");
//    scanf("%d", &idade);
//    
//    printf("Digite sua Altura: ");
//    scanf("%f", &altura );
//    

    printf("Digite sua idade e sua altura: \n");
    scanf("%d %.2f", &idade);

    printf("\n Minha idade é %d e minha altura é: %.2f ", idade, altura);
    
    
	return 0;
}
