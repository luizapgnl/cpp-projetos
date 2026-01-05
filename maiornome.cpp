#include <stdio.h>
#include <string.h> 
int main(){
	char nm[100], mnrnm[100];
	int id, mi = -1;
	for(int i = 0; i<5; i++){
	printf("Digite o seu nome: ");
	fgets(nm, sizeof (nm), stdin);
	nm[strcspn(nm, "\n")] = 0;
	printf("Digite a sua idade: ");
	scanf("%d", &id);
	getchar ();
	if(id>mi){
	mi = id;
	snprintf(mnrnm, sizeof(mnrnm), "%s", nm);
	printf("A pessoa com a maior idade e a ou o %s com %d anos. \n", mnrnm, mi);
	}
}
}
