// Jogo Xadrez - Nível Mestre. COMPLETO
#include <stdio.h>

// Declaração das variáveis globais
int opcao, i, j, moviCavalo;

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita!\n");
        moverTorre(casas - 1); // Chamada recursiva reduzindo o número de casas
    }
}

// Função recursiva para mover o Bispo na diagonal direita e para cima
void moverBispoD(int casas) {
    if (casas > 0) {
        printf("Direita, cima!\n");
        moverBispoD(casas - 1); // Movimento diagonal
    }
}

// Função recursiva para mover o Bispo apenas para cima (opcional, não usada no código)
void moverBispoC(int casas) {
    if (casas > 0) {
        printf("Cima!\n");
        moverBispoC(casas - 1);
    }
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda!\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para mover o Cavalo para cima
void moverCavalo(int casas) {
    if (casas > 0) {
        printf("Cima!\n");
        moverCavalo(casas - 1);
    }
}

int main() {
    // Menu de interação
    printf("** Jogo de Xadrez **\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    // Estrutura de decisão para movimentar a peça escolhida
    switch(opcao) {
        case 1:
            printf("Você escolheu a Torre para movimentar.\n");
            moverTorre(5); // Torre move 5 casas para a direita
            printf("A Torre moveu 5 vezes para a direita!\n");
            break;

        case 2:
            printf("Você escolheu o Bispo para movimentar.\n");
            // Simula o movimento em diagonal (5 vezes)
            for (i = 1; i < 6; i++) {
                moverBispoD(1);
                // Loop desnecessário, deixado aqui para possíveis incrementos futuros
                for (j = 1; j < 5; j++) {
                    printf("");	
                }
            }
            printf("O Bispo moveu 5 casas na diagonal!\n");
            break;

        case 3:
            printf("Você escolheu a Rainha para movimentar!\n");
            moverRainha(8); // Rainha move 8 casas para a esquerda
            printf("A Rainha moveu 8 casas para a esquerda!\n");
            break;

        case 4:
            printf("Você escolheu o Cavalo para movimentar!\n");
            // Corrigido o erro lógico do for
            for (i = 1; i <= 1; i++) {
                moverCavalo(1); // Cavalo move 1 casas para cima
                for (j = 1; j < 2; j++) {
                    printf("Direita!\n"); // Depois 1 casa para a direita (movimento em "L")
                }
            }
            printf("O Cavalo moveu 2 casas para cima e 1 para a direita, fazendo um L.\n");
            break;

        default: // Caso o usuário digite uma opção inválida
            printf("ERRO, opção inválida!\n");
            break;
    }

    return 0;
}
