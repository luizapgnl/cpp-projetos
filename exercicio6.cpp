#include <stdio.h>       // Biblioteca padrão para entrada e saída
#include <windows.h>     // Biblioteca para funções do Windows, como SetConsoleOutputCP
#include <string.h>      // Biblioteca para manipulação de strings

#define MAX_PRODUTOS 5   // Define o número máximo de produtos que podem ser cadastrados
#define TAM_NOME 50      // Define o tamanho máximo para o nome de cada produto

// Protótipos das funções que serão implementadas depois
void cadastrarProduto(char nomes[][TAM_NOME], float precos[], int quantidade);
void listarProdutos(char nomes[][TAM_NOME], float precos[], int quantidade);

int main() {
    // Configura o console para usar codificação UTF-8, para exibir caracteres especiais corretamente
    SetConsoleOutputCP(CP_UTF8);

    // Declara um array bidimensional para armazenar nomes dos produtos (matriz de caracteres)
    char nomes[MAX_PRODUTOS][TAM_NOME];
    // Declara um vetor para armazenar os preços dos produtos
    float precos[MAX_PRODUTOS];
    // Define a quantidade de produtos a serem cadastrados (5 no caso)
    int quantidade = MAX_PRODUTOS;

    // Imprime mensagem inicial no console
    printf("Cadastro de Produtos\n\n");

    // Chama a função para cadastrar os produtos, passando os arrays e a quantidade
    cadastrarProduto(nomes, precos, quantidade);

    // Imprime uma mensagem antes de listar os produtos cadastrados
    printf("\nProdutos cadastrados: ");
    // Chama a função que lista os produtos e seus preços
    listarProdutos(nomes, precos, quantidade);

    return 0;  // Indica que o programa terminou com sucesso
}

// Função para cadastrar os produtos e seus preços
void cadastrarProduto(char nomes[][TAM_NOME], float precos[], int quantidade) {
    for(int i = 0; i < quantidade; i++) {  // Loop para ler os dados de cada produto
        printf("\nDigite o nome do produto %d\n: ", i + 1);
        // Lê uma linha de texto (nome do produto) com fgets, que aceita espaços
        fgets(nomes[i], TAM_NOME, stdin);

        // Remove o caractere de nova linha '\n' que fgets deixa no final da string, se existir
        int len = strlen(nomes[i]);  // Obtém o tamanho da string digitada
        if(len > 0 && nomes[i][len - 1] == '\n') {
            nomes[i][len - 1] = '\0';  // Substitui o '\n' por caractere nulo para terminar a string
        }

        printf("\nDigite o preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);  // Lê o preço do produto e armazena no vetor de preços
        getchar(); // Remove o '\n' que ficou no buffer do teclado após o scanf
    }
}

// Função que exibe todos os produtos e seus preços cadastrados
void listarProdutos(char nomes[][TAM_NOME], float precos[], int quantidade) {
    for(int i = 0; i < quantidade; i++) {  // Loop para imprimir cada produto
        // Exibe o número, nome do produto e preço formatado com duas casas decimais
        printf("%d. %s - R$ %.2f\n", i + 1, nomes[i], precos[i]);
    }
}
