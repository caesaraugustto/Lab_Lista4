#include <stdio.h>
#include <string.h>

int main(){

char nome[60];
int i=0, tam=0;

printf("Nome: ");
gets(nome);
for(i=0; nome[i] !='\0'; i++)
tam++;
printf("\nDados:\n");
printf("Nome: %s.\nTamanho: %d.", nome, tam);

return 0;
}
