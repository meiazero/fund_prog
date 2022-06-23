#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main(){
    int num[5], quadrado[5], a, b, c; //mudar para 50 depois

    /* Modelo de cabecalho dos programas */
    printf("\t================= Bem Vindo ao Programa =================\n\n");
    /* fim do cabecalho */
    for(a = 0; a < 5; a++){ // mudar para 50 depois
        printf("Digite o valor para o indice %i: ", a);
        scanf("%i", &num[a]);
        quadrado[a] = num[a] * num[a];
    }
    //limpa a tela com delay de 6000ms
    system("clear");
    printf("Registrado!\n\n");
    usleep(600 * 1000);
    system("clear");
for(b = 0; b < 5; b++){ // mudar para 50 depois
    printf("o valor de %i ao quadrado e: %i\n", num[b], quadrado[b]);
}

    return 0;
}