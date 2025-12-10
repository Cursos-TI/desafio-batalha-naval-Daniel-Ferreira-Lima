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
mapa[4][7] = 3;
mapa[5][7] = 3;
mapa[6][7] = 3;

for (int i = 0; i < 3; i++)
{
 for(int j = 0; j < 3; j++){
    if (i == j){
        mapa[i][i] = 3;   //INSERINDO NO MAPA OS NAVIOS EM FORMATO DIAGONAL//
    }
  }   
    
}

for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 3; j++){
    if (i + j == 9){     //CRIANDO O SEGUNDO NAVIO//
        mapa[i][i] = 3;  //UTILIZANDO A LÓGICA PARA DELIMITAR QUANTOS 0S SERÃO PREENCHIDOS//
    }
    }   
    
}

for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 10; j++){
     printf("%d ", mapa[i][j]);         //EXIBINDO O MAPA COM OS NAVÍOS
    }   
    printf("\n");
}

return 0;

}