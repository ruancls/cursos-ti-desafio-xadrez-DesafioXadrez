#include <stdio.h>

/* Função recursiva para movimentar a Torre */
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

/* Função recursiva para movimentar a Rainha */
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* Função recursiva para movimentar o Bispo */
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    printf("Cima\n");
    for (int i = 0; i < horizontal; i++) {
        printf("Direita\n");
    }
    moverBispoRecursivo(vertical - 1, horizontal);
}

int main(void) {
    // Movimentação da Torre
    printf("Movimento da torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimentação do Bispo com recursividade + loop aninhado
    printf("Movimento do bispo:\n");
    moverBispoRecursivo(5, 1); // 5 movimentos verticais, cada um com 1 movimento horizontal
    printf("\n");

    // Movimentação do Cavalo com loops complexos
    printf("Movimento do cavalo:\n");
    for (int cima = 2; cima > 0; cima--) {
        printf("Cima\n");
        for (int direita = 1; direita > 0; direita--) {
            if (cima == 1 && direita == 1) {
                printf("Direita\n");
                break; // finaliza após o movimento em "L"
            } else {
                continue; // ignora qualquer outra combinação
            }
        }
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

Desafio: Nível intermediário

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

Desafio: Nível mestre

1 - Criando Movimentos Complexos
Neste desafio final, você aprimorará o programa de xadrez que vem desenvolvendo, explorando técnicas avançadas de programação para simular os movimentos das peças.
Prepare-se para usar recursividade e loops complexos!
O que você vai fazer?
Você deverá modificar o programa em C, que já contém a movimentação da Torre, Bispo, Rainha e Cavalo, realizando as seguintes alterações:
Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. 
Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. 
Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. 
O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
 Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.

02 - Requisitos funcionais
Entrada de Dados: Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) devem ser definidos diretamente no código, como variáveis ou constantes.
Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
Saída de Dados: O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Utilize linhas em branco para separar a saída de cada peça.

03 - Requisitos não funcionais
Performance: O código deve ser eficiente e executar sem atrasos perceptíveis. Evite chamadas recursivas excessivas que possam levar a um estouro de pilha (stack overflow).
Documentação: O código deve ser bem documentado, com comentários detalhados explicando a lógica da recursividade, o funcionamento dos loops complexos e o propósito de cada variável e condição.
Legibilidade: O código deve ser claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada. Utilize apenas variáveis do tipo inteiro e string.
Simplificações para o nível avançado
Não é necessário validar a entrada do usuário.
Não é necessário implementar outras regras do xadrez além dos movimentos específicos solicitados.
*/
