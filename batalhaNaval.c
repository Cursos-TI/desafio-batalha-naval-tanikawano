#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabul                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         eiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.\

    int board[5][5] = {0};

    // Declarando as coordenadas dos navios manualmente.

    int firstShipX = 0, firstShipY = 0; 
    int secondShipX = 2, secondShipY = 3;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == firstShipX && j <= firstShipY + 2) {
                printf("1 ");
            } else if ((i >= secondShipX && i <= secondShipX + 2) && j == secondShipY) {
                printf("1 ");   
            } else {
                printf("0 ");
            };
        };
        printf("\n");
    };

    // Navio na horizontal.
    printf("The coordinates for the first ship are (%i, %i), (%i, %i) and (%i, %i)\n", firstShipX, firstShipY, firstShipX, firstShipY + 1, firstShipX, firstShipY + 2);
    
    // Navio na vertical.
    printf("The coordinates for the second ship are (%i, %i), (%i, %i) and (%i, %i)\n", secondShipX, secondShipY, secondShipX + 1, secondShipY, secondShipX + 2, secondShipY);


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    int width = 5;
    int center = (width - 1) / 2; // Isto funciona apenas porque o comportamento desejado das habilidades requer o primeiro "hit" como centro da habilidade em si
    // Cone
    int coneController = 0; // Variavel para controlar o formato 
    printf("Skill shape: Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < width; j++) {
            j >= (center - coneController) && j <= (center + coneController) ? printf("1 ") : printf("0 ");
        };
        coneController++;
        printf("\n");
    }

    
    // Octaedro
    printf("Skill shape: Octahedron\n");
    int octahedronController = 0; // Variavel para controlar o formato'
    int octahedronMaxSize = 1; // Numero de vezes que o formato aumenta
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < width; j++) {
            j >= (center - octahedronController) && j <= (center + octahedronController) ? printf("1 ") : printf("0 ");
        };
        octahedronController < octahedronMaxSize ? octahedronController++ : octahedronController--;
        printf("\n");
    };

    // Cruz
    int crossSize = 2;
    printf("Skill shape: Cross\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < width; j++) {
            i == 1 || j == center ? printf("1 ") : printf("0 ");
        };
        printf("\n");
    };


    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
