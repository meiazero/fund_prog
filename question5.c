#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(){
    float p_venda[10], p_compra[10], lucro[10], aux[10];
    int a, b, c = 0, d = 0, e = 0;

    //  Modelo de cabecalho dos programas 
    printf("\t================= Bem Vindo ao Programa =================\n\n");
    // fim do cabecalho 
    for (a = 0; a < 10; a++){
        printf("Digite o valor de compra do produto %i: ", a+1);
        scanf("%f", &p_compra[a]);
        printf("Digite o valor de venda do produto %i: ", a+1);
        scanf("%f", &p_venda[a]);
    }

    //limpa a tela com delay de 6000ms
    system("clear");
    printf("Registrado!\n\n");
    usleep(600 * 1000);
    system("clear");
    
    
    printf("\t\t=================== Resultados ===================\n");
    printf("\tlucro < 10%%\t|\t10%% <= lucro <= 20%%\t|\tlucro > 20%%\n");
    for(b = 0; b < 10; b++){
        lucro[b] = p_venda[b] - p_compra[b];
        // printf("valor do lucro no indice %i e %2.3f\n", b+1, lucro[b]);
        aux[b] = ((p_venda[b] * 100) / p_compra[b]) - (((p_venda[b] * 100) / p_compra[b]) / 2); 
        printf("valor em porcento do lucro: %2.3f\n\n", aux[b]);
        if(aux[b] < 10){
            c += 1;
        }else if(10 >= aux[b] < 20){ //aux[b] >= 10 || aux[b] < 20
            d += 1;
        }else if(aux[b] > 20){
            e += 1;
        }else{
            printf("erro!");
        }
    }
    printf("\t\t%i\t\t\t%i\t\t\t%i\n", c, d, e);

    
    

    return 0;
}