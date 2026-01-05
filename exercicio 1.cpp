#include <stdio.h>

int main() {
int vetor [5];

printf("Digite cinco números inteiros: \n");
for(int i = 0; i<5; i++){
printf("Valor%d: ", i+1);
scanf("%d", &vetor[i]);
}
printf("\nValores inseridos: \n");
for(int i = 0; i<5; i++){
printf("vetor[%d] = %d\n", i, vetor[i]);
}
return 0;
}