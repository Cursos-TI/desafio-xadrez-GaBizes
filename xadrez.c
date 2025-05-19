#include <stdio.h>

int main(){

     printf ("Implementação de Movimentação do Bispo:\n");
     for (int i = 0; i <5; i++)
     {
       printf("Cima, Direita.\n");
     }

     printf("Implementação de Movimentação da Rainha:\n");
      int i = 0;
     while (i < 8)
     {
         printf("Esquerda.\n");
         i++;
     }

     printf("Implementação de Movimentação da Torre:\n");
      i = 0;
     do {
         printf("Direita.\n");
         i++;
     } while (i < 5);

     printf("Implementação de Movimentação do Cavalo.\n");
     // Movimento do Cavalo: duas casas para baixo
     int j = 0;
     int movimentoparaBaixo = 2;
     int movimentoparaCima = 1;

     
     for (i = 0; i < movimentoparaBaixo; i++){
          printf("Baixo.\n");

       j = 0;
       while (j < movimentoparaCima){
           printf("Esquerda. \n");
           j++;
        }
      }

     return 0;

}
