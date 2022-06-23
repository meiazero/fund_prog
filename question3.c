#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 /*
         nota 1
          |   nota 2
          |   |     media
          |   |    |    situacao
          \/  \/  \/  \/
    notas[00][00][00][00] 0
    notas[01][01][01][01] 1
    notas[02][02][02][02] 2
    notas[03][03][03][03] 3
    notas[04][04][04][04] 4
    notas[05][05][05][05] 5
    notas[06][06][06][06] 6
    notas[07][07][07][07] 7
    notas[08][08][08][08] 8
    notas[09][09][09][09] 9
    notas[10][10][10][10] 10
    notas[11][11][11][11] 11
    notas[12][12][12][12] 12
    notas[13][13][13][13] 13
    notas[14][14][14][14] 14
           0   1   2   3 =|====> indices das colunas
                          |
                          v
                    indices das linhas

    */

int main(){
    //linhas ==> quantidade alunos, colunas ==> nota1, nota2, media, situacao(numero)
    float notas[15][4]={0};
    //situacao aluno
    char sit1[] = "aprovado", sit0[] = "reprovado"; 
    //contadores
    int linha, coluna, a, b, c, d, e, f;

/* inicio cabecalho */
    printf("\t================= Bem Vindo ao Programa =================\n\n");
/* fim do cabecalho */
    for(linha = 0; linha < 15; linha++){
        printf("Digite as notas do aluno %i\n", linha+1);
        for (coluna = 0; coluna < 2; coluna++){
            printf("Insira a nota %i: ", coluna+1);
            scanf("%f", &notas[linha][coluna]);
        }
    }
    for(a = 0; a < 15; a++){
        for(b = 2; b < 3; b++){
            //calculo das medias
            notas[a][b] = (notas[a][0] + notas[a][1]) / 2;
            //definicao da situacao
            if (notas[a][b] > 5){
                notas[a][3] = 1;//aprovado
            }else{
                notas[a][3] = 0;//reprovado
            }
             
        }
    }
    //limpa a tela com delay de 6000ms
    system("clear");
    printf("Registrado!\n\n");
    usleep(600 * 1000);
    system("clear");
    
    printf("\t====================== Resultado ======================\n");
    printf("|\tAluno\t\t|\tnotas 1 e 2\t|\tsituacao\t| \n");
    for(c = 0; c < 15; c++){
        if(notas[c][3] == 1.0){
            printf("|\t%2.0i\t\t|\t%2.2f, %2.2f\t|\t%s\t|\n", c+1, notas[c][0], sit1);
        }else{
            printf("|\t%2.0i\t\t|\t%2.2f, %2.2f\t|\t%s\t|\n", c+1, notas[c][0], sit0);
        }
    }
    

    return 0;
}