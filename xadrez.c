#include <stdio.h>

//Função  recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

//Função recursiva para movimentação do Bispo
void moverBispo(int casasVertical, int casasHorizontal){
    if (casasVertical <= 0|| casasHorizontal <=0) return; // Condição de parada
    printf("Cima, Direita\n");
    moverBispo(casasVertical - 1, casasHorizontal - 1);// chamada recursiva
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha (casas - 1); // chamada recursiva
}

// Função para movimentação do Cavalo com loops complexos 
void moverCavalo(){
    int i, j;
    for (i = 0; i < 2; i++) { // Loop para o movimento vertical
        for (j = 0; j < 1; j++) { // Loop para o movimento horizontal
            if (i == 1 && j == 0) { 
                printf("Direita\n"); // Movimento horizontal
            
            }
            printf("Cima\n"); //Movimento vertical
        }
    }
}
int main() {
    //Definido o número de casas a serem movidas
    const int casasTorre = 5;
    const int casasBispo = 5; //para o Bispo, o movimento é diagonal 
    const int casasRainha = 8;

    // Movimentação da torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo); // O Bispo se move diagonalmente
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");
         
    return 0;
}