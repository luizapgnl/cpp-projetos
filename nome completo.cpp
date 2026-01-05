#include <stdio.h>
#include <string.h> 
int main() {
char pn[50], sbnm[50], nc[100];

printf("Digite o seu primeiro nome: ");
scanf("%s", pn);
printf("Digite o seu sobrenome: ");
scanf("%s", sbnm);
strcpy(nc, pn);
strcat(nc, " ");
strcat(nc, sbnm);
printf("O seu nome completo: %s\n", nc);
printf("Tamanho do nome: %zu caracteres.\n", strlen(nc));
return 0;
}