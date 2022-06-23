#include <stdio.h>

int main(){
    char letras[1000];
    int i, j;

/* inicio cabecalho */
    printf("\t================= Bem Vindo ao Programa =================\n\n");
/* fim do cabecalho */

    printf("Digite 10 letras: ");
    scanf("%s", letras);
    printf("\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(letras[i] == letras[j]){
                printf("na posicao %i esta o caracter: %c\n",j, letras[j]);
            }
        }
    }
    

    return 0;
}