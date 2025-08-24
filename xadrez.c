  #include <stdio.h>

int main() {
    /* Jogo de Xadrez */
    int bispo = 1;
    int torre  = 1;
    int rainha = 1;

    // Lógica de movimentação da torre
    printf("Movimento da torre:\n");
    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }
    printf("\n");

    // Lógica de movimentação da rainha
    printf("Movimento da rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    printf("\n");

    // Lógica de movimentação do bispo
    printf("Movimento do bispo\n");
    for (bispo = 1; bispo <= 5; bispo++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    return 0;
}
/*
Desafio: Nível novato

1 - Movimentando as peças do xadrez
Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. 
Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. 
O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, 
você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

2 - Requisitos funcionais
Entrada de Dados: Os valores para o número de casas a serem movidas serão definidos diretamente no código através de variáveis ou constantes.
Lógica de Movimentação: Cada programa deverá implementar a lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
Saída de Dados: O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. 
Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. 
As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");

3 - Requisitos não funcionais
Performance: O código deve ser eficiente e executar sem atrasos perceptíveis.
Documentação: O código deve ser bem documentado com comentários explicando a lógica de cada parte.
Legibilidade: O código deve ser claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada. 
Utilize apenas variáveis do tipo inteiro e string.

4 - Simplificações para o nível básico
Não é necessário validar a entrada do usuário.
Não é necessário implementar a lógica completa do jogo de xadrez, apenas a simulação do movimento de cada peça individualmente.
Utilize apenas as estruturas de repetição for, while e do-while, uma para cada peça do jogo.
*/
