#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    float salario[20], nsal[20];
    int a, b, c, d;
    
    /* Modelo de cabecalho dos programas */
    printf("\t================= Bem Vindo ao Programa =================\n\n");
    /* fim do cabecalho */
    for(a = 0; a < 20; a++){
        printf("Digite o salario do %i empregado: ", a+1);
        scanf("%f", &salario[a]);
    }
    system("clear");
    printf("Registrado!\n\n");
    usleep(600 * 1000);
    system("clear");
    for(b = 0; b < 20; b++){
        nsal[b] = salario[b] + (salario[b] * 0.8);
    }
    printf("\t\t========== Tabela ==========\n");
    printf("\tN° empregado\t|\tSalario\t|\tNovo salario\t|\n");
    for (c = 0; c < 20; c++){
        printf("\t\t%i\t\t%2.2f\t\t%2.2f\n", c, salario[c], nsal[c]);
    }
    
    return 0;
}