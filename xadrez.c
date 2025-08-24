  #include <stdio.h>

int main() {
    /* Jogo de Xadrez */
    int bispo = 1;
    int cavalo = 1;
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

    // Lógica de movimentação do cavalo
    printf("Movimento do cavalo\n");
    while (cavalo != 0) {
        cavalo--;
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

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

Desafio: Nível aventureiro

1 - Movimentando o Cavalo
Neste desafio, você dará continuidade ao programa do nível básico, adicionando a lógica para movimentar o Cavalo no tabuleiro de xadrez. 
A principal diferença é que o Cavalo se move em "L", o que exigirá o uso de loops aninhados (um loop dentro do outro) para simular esse movimento.
O que você vai fazer: Você deverá implementar, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo. 
O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L". 
Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. 
Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while, à sua escolha. 
Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

2 - Requisitos funcionais
Entrada de Dados: Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) devem ser definidos no código como variáveis ou constantes.
Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados (um loop for e um loop while ou do-while).
Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. 
Para as outras peças as saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. 
Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.

3 - Requisitos não funcionais
Performance: O código deve ser eficiente e executar sem atrasos perceptíveis.
Documentação: O código deve ser bem documentado com comentários claros, explicando a lógica do movimento do Cavalo e a utilização dos loops aninhados.
Legibilidade: O código deve ser claro, organizado, fácil de entender, com nomes de variáveis descritivos, indentação adequada e seguindo as boas práticas de programação em C. Utilize apenas variáveis do tipo inteiro e string.

4 - Simplificações para o nível intermediário
Não é necessário validar a entrada do usuário.
Não é necessário implementar outras regras do xadrez além do movimento específico do Cavalo solicitado.
Você pode assumir que o Cavalo sempre começa na posição inicial (definida por você).
*/
