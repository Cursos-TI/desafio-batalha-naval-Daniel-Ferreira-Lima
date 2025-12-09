#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
int mapa[10][10]; //CRIANDO A MATRIZ BIDIMENSIONAL//
for (int i = 0; i < 10; i++) //DEFININDO CADA POSIÇÃO DA MATRIZ COM 0S PARA REPRESENTAR A ÁGUA//
{
 for(int j = 0; j < 10; j++){
     mapa[i][j] = 0;         
    }   
}

int navio1[3] = {0, 0, 0}; //CRIANDO DOIS VETORES UNIDIMENSIONAIS PARA SEREM OS NAVÍOS
int navio2[3] = {0, 0, 0}; //CRIANDO O TAMANHO DOS NAVIOS
mapa[1][4] = 3;
mapa[1][5] = 3;    //INSERINDO NO MAPA ONDE ELES ESTÃO, 1 NA VERTICAL E 1 NA HORIZONTAL//
mapa[1][6] = 3;    
mapa[4][2] = 3;
mapa[5][2] = 3;
mapa[6][2] = 3;

for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 10; j++){
     printf("%d ", mapa[i][j]);         //EXIBINDO O MAPA COM OS NAVÍOS
    }   
    printf("\n");
}

return 0;

}