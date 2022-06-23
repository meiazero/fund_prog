#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int vet[100], h, i, j, aux = 0;
    
/* inicio cabecalho */
    printf("\t================= Bem Vindo ao Programa =================\n\n");
/* fim do cabecalho */
    
    printf("================\n");
    for(h = 0; h < 8; h++){
        printf("Digite um numero na posicao %i: ", h);
        scanf("%i", &vet[h]);
    }
    
    //limpa a tela com delay de 6000ms
    system("clear");
    printf("Registrado!\n\n");
    usleep(600 * 1000);
    system("clear");
    
    printf("================\n");
    for (i = 0; i < 8; i++){
        printf("numero %i na posicao %i\n", vet[i], i);
    }
    for (j = 0; j < 8; j++){
        if (vet[j] % 6 == 0){
            aux ++;
        }
    }
    printf("================\n");
    printf("valores multiplos de 6 sao %i\n", aux);

    return 0;
}