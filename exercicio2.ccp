#include <stdio.h>

int main() {
    float vetor[10];
    float maior, menor;
    int i;

    // Leitura dos 10 valores reais
    printf("Digite 10 valores reais:\n");
    for(i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1); // printf() o usa para imprimir um inteiro, substituindo o %d pelo valor da variável inteira fornecida. 
        scanf("%f", &vetor[i]); /*%f representa o local onde será escrita uma variável float. total é a variável float que será 
        mostrada na posição marcada por %f.*/
    }

    // Inicializando maior e o menor número com o primeiro valor do vetor
    maior = vetor[0]; // vetor é é uma estrutura de dados que armazena uma coleção de valores do mesmo tipo, organizados em posições de memória contínuas e acessíveis por um índice numérico.
    menor = vetor[0] ; 
    // Verificando o maior e menor valor
    for(i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Exibindo os resultados
    printf("\nMaior valor digitado: %.2f\n", maior); // % 2f” % Esta linha de código imprime o valor da variável total formatado para 2 casas decimais.
    printf("Menor valor digitado: %.2f\n", menor);

    return 0;
}
