#include <stdio.h>
#include <string.h> 
int main(){
	char palavra[100];
	printf("Digite uma palavra: ");
	scanf("%99s", palavra);
	int tamanho = strlen (palavra);
	printf("Palavra Invertida: ");
	for(int i = tamanho - 1; i >=0; i--){
		printf("%c", palavra[i]);
	}
	printf("\n");
	return 0;
}