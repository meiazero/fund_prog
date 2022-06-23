#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int cod[5], quant[5], a, b, c;
    float p_venda[5], p_compra[5];

    /* Modelo de cabecalho dos programas */
    printf("\t================= Bem Vindo ao Programa =================\n\n");
    /* fim do cabecalho */
    for(a = 0; a < 5; a++){
        printf("Digite o codigo do produto: ");
        scanf("%i", &cod[a]);
        printf("Digite a quantidade do produto: ");
        scanf("%i", &quant[a]);
        printf("Digite o preco de compra: ");
        scanf("%f", &p_compra);
        printf("Digite o preco de venda: ");
        scanf("%f", &p_venda);
        printf("\n");
    }
    //limpa a tela com delay de 6000ms
    system("clear");
    printf("Registrado!\n\n");
    usleep(600 * 1000);
    system("clear");

    //falta a busca
    

    return 0;
}