#include <stdio.h>
#include <string.h> 
int main() {
int i;
char u [100];
printf("Digite a sua senha: ");
scanf("%d", &i);
printf("Digite o seu usuário: ");
scanf("%99 [^\n]", u);
if (i==1234 && strcmp (u, "Ana Luiza") ==0){
printf("Acesso Liberado!");
}
else{
	printf("Acesso negado!!!");
}	
}