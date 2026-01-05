#include <stdio.h>

int main() {
int nmr;
printf("Digite um numero para ver a sua tabuada: ");
scanf("%d", &nmr);
int i;
for (i = 1; i <= 10; i++) {
printf("%d x %d = %d\n", nmr, i, nmr * i);
}
return 0;
}