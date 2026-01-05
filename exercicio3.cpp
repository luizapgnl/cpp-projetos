#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0, media;

    // Leitura das notas
    for(int i = 0; i < 4 ; i++){
        printf("Digite a sua nota %d: ", i + 1); 
        scanf("%f", &notas[i]);
    }

    // Soma das notas
    for(int i = 0; i < 4 ; i++){
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 4;

    printf("\nA media e %.2f\n", media); 

    return 0;
}
