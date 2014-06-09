#include <stdio.h>
#include <string.h>

char *SomarUm(char *palavra){
int i;
char aux[strlen(palavra)];

for(i=0; palavra[i] !='\0'; i++){
aux[i]=palavra[i]+1;
}

return aux;
}

int main(){
char palavra[50];
int i=0;

printf("Digite uma palavra[Max. 50]: ");
gets(palavra);

printf("\n\nPalavra Digitada: %s", palavra);
printf("\nPalavra com valor ASCII somado 1: %s", SomarUm(palavra));

return 0;
}


