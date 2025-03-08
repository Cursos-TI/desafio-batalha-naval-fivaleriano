#include <stdio.h>


int main(){

    char letras[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // matriz para definir um arrays de letras de A a J no tabuleiro.

    printf("###### TABULEIRO BATALHA NAVAL ######\n");

    printf(" "); // espaço para manter o tabuleiro de forma alinhada.
    for(int i = 0; i < 10; i++){ // loop para impressão das letras de forma horizontal no tabuleiro.
        printf(" %c", letras[i]);
    }
    int tabuleiro[10][10]; // Tabuleiro 10x10
    int i, j; 
    for (i = 0; i < 10; i++) { // for externo usando o tabuleiro 10x10 para impressão dos numeros de 0 a 9 de forma vertical

        printf("\n%d ", i); // usei o printf do for externo antes da execursão do for interno, para deixar os numeros de 0 a 9 de forma mais interativa com o tabuleiro.

        for (j = 0; j < 10; j++) { // for interno usado para criar o 'mar' usando a matriz tabuleiro 
            tabuleiro[i][j] = 0; // definir duas variaveis 'i' e 'j' antes do for, para atribuir ao tabuleiro e atribuindo o valor = 0. Para criar o mar de zero na matriz tabuleiro.

            // Navio na forma Diagonal direita.
            tabuleiro[1][8] = 3; // a linha 9 contando de 0 a 8 do numero 1 vai receber o numero 3
            tabuleiro[2][7] = 3; // a linha 8 contando de 0 a 7 do numero 2 vai receber o numero 3
            tabuleiro[3][6] = 3; // a linha 7 contando de 0 a 6 do numero 3 vai receber o numero 3
            // Navio na forma Diagonal esquerda.
            tabuleiro[6][0] = 3; // a linha 1 contando de 0 a 1 do numero 6 vai receber o numero 3
            tabuleiro[7][1] = 3; // a linha 2 contando de 0 a 2 do numero 7 vai receber o numero 3
            tabuleiro[8][2] = 3; // a linha 3 contando de 0 a 3 do numero 8 vai receber o numero 3
            // Navio na forma Horizontal.
            tabuleiro[5][8] = 3; // a linha 9 contando de 0 a 8 do numero 5 vai receber o numero 3
            tabuleiro[5][6] = 3; // a linha 7 contando de 0 a 6 do numero 5 vai receber o numero 3
            tabuleiro[5][7] = 3; // a linha 8 contando de 0 a 7 do numero 5 vai receber o numero 3
            // Navio na forma Vertical.
            tabuleiro[4][1] = 3; // a linha 1 contando de 0 a 1 do numero 4 vai receber o numero 3
            tabuleiro[3][1] = 3; // a linha 1 contando de 0 a 1 do numero 3 vai receber o numero 3
            tabuleiro[2][1] = 3; // a linha 1 contando de 0 a 1 do numero 2 vai receber o numero 3

            printf("%d ", tabuleiro[i][j]); // exibição do tabuleiro, com as alteraçães predefinidas no codigo.
        }
    }


    return 0;
}

