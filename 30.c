#include <stdio.h>

int main(){
char nome[60];
int i=0;

printf("Nome: ");
gets(nome);
if((nome[i]=='a') || (nome[i]=='A'))
printf("Ola %s.", nome);
else
printf("Desculpe, seu nome nao comeca com 'a'.");


return 0;
}
