#include <stdio.h>
#include <string.h> 
int main(){
char mn[100], sbnm[100], email[250];
printf("Digite o seu nome: ");
scanf("%99s", sbnm);
strcpy(email, mn);
strcat(email, ".");
strcat(email, "sbnm");
strcat(email, "@dominio.com");
printf("O email gerado e: %s\n", email, mn);
return 0;
}