//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	
//    int idade;
//    
//    printf("Digite a sua idade: \n");
//    scanf("%d", &idade);
//    
//    if(idade>34){
//        printf("Você pode entrar!!! ");
//    } else {
//        printf("Você não pode entrar!!!");
//    }
//        
//    
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    
    
    printf("Digite a primeira nota \n"); 
    scanf("%f", &nota1);
    printf("Digite a segunda nota \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota \n");
    scanf("%f", &nota3);
    printf("Digite a quarta nota \n");
    scanf("%f", &nota4);
    
    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    if(media >= 7){
        printf("Você passou!! Sua media foi: %.2f ", media);
    }else{
        printf("Você não passou!!! Sua media foi: %.2f ", media);
    
    }
    
    return 0;
}