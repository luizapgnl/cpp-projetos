#include <stdio.h>
#include <string.h> 
int main(){
	int i;
printf("Digite a sua senha: ");
scanf("%d", &i);
if(i==1234){
	printf("Acesso liberado");
}
else{
	printf("Senha incorreta");
}
}
