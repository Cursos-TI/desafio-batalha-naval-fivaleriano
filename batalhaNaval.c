#include <stdio.h>

#define linhas 10 // para definir quantas linhas tera a matriz
#define colunas 10 // para definir quantas colunas tera a matriz

// Função para inicializar o tabuleiro usando a recursividade
void inicializarTabuleiro(int iniciar[linhas][colunas]) {

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            iniciar[i][j] = 0; 
    }
}
}

// Função para desenhar um triângulo no tabuleiro usando a recursividade
void criarDesenho(int iniciar[linhas][colunas], int x, int y, int tamanho){

    for (int i = 0; i < tamanho; i++) { // esse for externo determina a altura do triângulo
        for (int j = -i; j <= i; j++) { // esse for interno determina a largura do triângulo
            int pontX = x + i; // de acordo com o numero atribuido ao x ele ira somar com o i
            int pontY = y + j; // de acordo com o numero atribuido ao y ele ira somar com j
            if (pontX >= 0 && pontX < linhas && pontY >= 0 && pontY < colunas) { // if usado para criar a logica do programa.
                iniciar[pontX][pontY] = 5; // função para pintar o triângulo 
            }
      

        }
    }


}

// Função para imprimir o tabuleiro usando a recursividade
void iniciarTabuleiro(int iniciar[linhas][colunas]){
int number[10]={0,1,2,3,4,5,6,7,8,9};
printf(" ");
for(int i = 0; i < 10; i++){ // for usado para imprimir de 0 a 9 de forma horizontal na parte de cima do tabuleiro.
    printf(" %d", number[i]); 
}
    for (int i = 0; i < linhas; i++) { // for externo usado para imprimir de 0 a 9 de forma vertical do lado esquerdo do tabuleiro.
    printf("\n%d ", i); 

        for (int j = 0; j < colunas; j++) { // for interno usado para imprimir uma matriz bidimensiona 10x10.
        printf("%d ", iniciar[i][j]); 
        }
 
    }
}

 
int main() {
    int tabuleiro[linhas][colunas];
    
    // função recursiva para ativar o tabuleiro
    inicializarTabuleiro(tabuleiro);
    
    // função recursiva para ativar o desenho no tabuleiro
    criarDesenho(tabuleiro, 1, 2, 3);
    
    // função recursiva para imprimir o tabuleiro
    iniciarTabuleiro(tabuleiro);

    
    

        return 0;
    }

