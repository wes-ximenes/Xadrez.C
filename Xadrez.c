
/*XADREZ
  (Tema 4/desafio 1) Criar 3 variáveis que simulem 3 peças do xadrez (torre, bispo e rainha), determinando o movimento das peças diretamente no código, usando as estruturas de
  repetição e imprimir os movimentos.
  (Tema 4/desafio 2) Executar o movimento em L da peça Cavalo, utilizando estruturas de repetição aninhadas.
  (Tema 4/desafio 3) Criar funções recursivas para representar os movimentos das peças e chama-las no código principal. Adicionar loops complexos para o cavalo
  e loops aninhados para o bispo.
*/
#include <stdio.h>

//CRIANDO AS FUNÇÕES RECURSIVAS (Tema 4/desafio 3)

// Torre: movimento recursivo para a direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); //Similar ao exercício da aula, uma contagem regressiva.
    }
}

// Rainha: movimento recursivo para a esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Bispo: recursividade + loops aninhados (cima e direita)
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo: movimento vertical
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");

            // Loop interno: movimento horizontal
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }

        moverBispo(casas - 1);
    }
}

// Cavalo: movimento em "L" (duas casas para cima e uma para a direita)
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        for (int cima = 0; cima < 2; cima++) {
            if (cima == 1) {
                printf("Cima\n");
                continue; // Comando para forçar o segundo passo vertical (Não contido na aula, pesquisado por fora)
            }
            printf("Cima\n");
        }

        for (int direita = 0; direita < 2; direita++) {
            if (direita == 1) break; // só um passo à direita
            printf("Direita\n");
        }
    }
}

int main() { 
    /*Usei 1 estrutura de repetição para cada peça, para ficar mais explorador. (Tema 4/desafio 1)
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

    //CAVALO: 2 casas para baixo e 1 para esquerda (com laços aninhados) (Tema 4/desafio 2)
    printf("\nMovimento do Cavalo:\n");

    // Loop externo: FOR para simular o movimento completo em "L"
    for (int movimento = 1; movimento <= 1; movimento++) {

        int passoBaixo = 1;
        while (passoBaixo <= 2) { //Loop interno, vai dar 2 passos pra baixo.
            printf("Baixo\n");
            passoBaixo++;
        }
        // Após os dois passos para baixo, o loop externo executará um pra esquerda.
        printf("Esquerda\n");
    }
    */
    //(Tema 4/desafio 3) Chamando as funções recursivas:
    int casasTorre = 5; 
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavalo(movimentosCavalo);

    return 0;

}