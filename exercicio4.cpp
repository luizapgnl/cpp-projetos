#include <stdio.h>
#include<windows.h>

int main() {
SetConsoLeOutputCP(65001);
int matriz[3][3];
int soma = 0, j ;

printf("Digite um número: ");
for(int i = 0; i < 3; i++){
    for (int j = 0; j<3; j++){
        printf("elemento [%d][%d]: ", i,j);
        scanf("%d", &matriz [i][j]);
        soma += matriz[i][j];
    }
}
printf("Soma de todos os elementos: , %d\n", soma);
return 0;
}
