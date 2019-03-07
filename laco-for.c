#include <stdio.h>

int main(){

    // for(int i = 1; i <= 100 ;i++ )
    // {
    //     printf("Número: ");
    //     printf("%d \n", i);
    // }
    

    for(int i = 1; i <= 3; i++){
        int senha;
        printf("digite sua senha: ");
        scanf("%d", &senha);
        
        if (senha == 123){
            printf("Voce entrou.");
            break;
        } else {
            int static tentativas = 3;
            printf("Senha invalida!!! \n\n");
            --tentativas;
            printf("Restam %d tentivas \n\n", tentativas );
            if (tentativas == 0) {
                printf("Senha bloqueada - 3 tentativas erradas. \n");
                continue;
            }
            
        }
        
    }
    printf("Usando sistema. \n");
    

    
    return 0;
} 