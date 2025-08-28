
/*(Tema 4/desafio 1) Criar 3 variáveis que simulem 3 peças do xadrez (torre, bispo e rainha), determinando o movimento das peças diretamente no código, usando as estruturas de
 repetição e imprimir os movimentos.

*/
#include <stdio.h>

int main() { //Usei 1 estrutura de repetição para cada peça, para ficar mais explorador.
    //TORRE: 5 casas para a direita (com FOR)
    int t;
    printf("Movimento da Torre:\n");
    for (t = 1; t <= 5; t++) {
        printf("Direita\n");
    }

    //BISPO: 5 casas na diagonal para cima e à direita (WHILE)
    int b = 1;
    printf("\nMovimento do Bispo:\n");
    while (b <= 5) {
        printf("Cima, Direita\n");
        b++;
    }

    //RAINHA: 8 casas para a esquerda (com DO-WHILE)
    int r = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    return 0;

}