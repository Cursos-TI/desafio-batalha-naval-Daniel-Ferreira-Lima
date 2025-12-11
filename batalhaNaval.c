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
mapa[5][5] = 3;
mapa[6][5] = 3;
mapa[7][5] = 3;

for (int i = 0; i < 3; i++)
{
 for(int j = 0; j < 3; j++){
    if (i == j){
        mapa[i][i] = 3;   //INSERINDO NO MAPA OS NAVIOS EM FORMATO DIAGONAL//
    }
  }   
    
}
//MAIS 2 NAVIOS NA DIAGONAL//
for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 3; j++){
    if (i + j == 9){     //CRIANDO O SEGUNDO NAVIO//
        mapa[i][i] = 3;  //UTILIZANDO A LÓGICA PARA DELIMITAR QUANTOS 0S SERÃO PREENCHIDOS//
    }
    }   
    
}

//CRIANDO MATRIZES E INSERINDO AS HABILIDADES//

int matriz1[10][10];
int matriz2[10][10];
int matriz3[10][10];

for (int i = 0; i < 10; i++) //DEFININDO CADA POSIÇÃO DA MATRIZ1 COM 0S PARA REPRESENTAR A ÁGUA//
{
 for(int j = 0; j < 10; j++){
     matriz1[i][j] = 0;         
    }   
}

for (int i = 0; i < 10; i++) //DEFININDO CADA POSIÇÃO DA MATRIZ2 COM 0S PARA REPRESENTAR A ÁGUA//
{
 for(int j = 0; j < 10; j++){
     matriz2[i][j] = 0;         
    }   
}

for (int i = 0; i < 10; i++) //DEFININDO CADA POSIÇÃO DA MATRIZ3 COM 0S PARA REPRESENTAR A ÁGUA//
{
 for(int j = 0; j < 10; j++){
     matriz3[i][j] = 0;         
    }   
}

//INSERINDO A HABILIDADE EM CRUZ NA MATRIZ 1//

for (int i = 0; i < 9; i++)
{
 for(int j = 0; j < 9; j++){    //MATRIZ COM HABILIDADE DA CRUZ INSERIDA NO MAPA//
      if (i == 4 || j == 4) {
    matriz1[i][j] = 1;
     }
 }
}

//INSERINDO A HABILIDADE EM CONE NA MATRIZ2//

int topo = 0;    //DEFININDO O PONTO INICIAL E POSIÇÕES//
int centro = 5;
int altura = 3;
for (int i = 0; i < 9; i++)
{
 for(int j = 0; j < 9; j++){ 
  if (i >= topo && i < topo + altura) {
    int desloc = i - topo;
        if (j >= centro - desloc && j <= centro + desloc) {
                matriz2[i][j] = 1;
            }
        }

    }
}

//INSERINDO A HABILIDADE EM OCTAEDRO NA MATRIZ3//

int cx = 7;  //POSIÇÃO INICIAL LINHA//
int cy = 7;  //POSIÇÃO INICIAL COLUNA//
int raio = 2;
int dl, dc;
 
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        if (i >= cx) dl = i - cx;
        else dl = cx - i;

        if (j >= cy) dc = j - cy;
        else dc = cy - j;

        if (dl + dc <= raio) {
            matriz3[i][j] = 1;
        }

    }
}
printf("\n"); 
printf("MAPA DA MATRIZ 1 COM HABILIDADE EM CRUZ\n");   
for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 10; j++){
     printf("%d ", matriz1[i][j]);         //EXIBINDO A MATRIZ COM HABILIDADE EM CRUZ//
    }   
    printf("\n");
}
printf("\n");
printf("MAPA DA MATRIZ 2 COM HABILIDADE EM CONE\n");
for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 10; j++){
     printf("%d ", matriz2[i][j]);         //EXIBINDO A MATRIZ COM HABILIDADE EM CONE//
    }   
    printf("\n");
}

printf("\n");
printf("MAPA DA MATRIZ 3 COM HABILIDADE EM OCTAEDRO\n");
for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 10; j++){
     printf("%d ", matriz3[i][j]);         //EXIBINDO A MATRIZ COM HABILIDADE EM OCTAEDRO//
    }   
    printf("\n");
}
//INSERINDO UMA HABILIDADE NO MAPA COM OS NAVIOS//
for (int i = 0; i < 9; i++)
{
 for(int j = 0; j < 9; j++){    //MATRIZ COM HABILIDADE DA CRUZ INSERIDA NO MAPA//
      if (i == 4 || j == 4) {
    mapa[i][j] = 1;
     }
    }
} 
printf("\n");
printf("MAPA DA BATALHA NAVAL\n");
for (int i = 0; i < 10; i++)
{
 for(int j = 0; j < 10; j++){
     printf("%d ", mapa[i][j]);         //EXIBINDO O MAPA COM OS NAVÍOS//
    }   
    printf("\n");
}

return 0;
}