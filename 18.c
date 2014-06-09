#include <stdio.h>
#include <string.h>

int main(){
char c;
char s[35];
int i;

printf("Digite uma string:\n");
gets(s);
printf("\nDigite um caractere: ");
scanf("%c", &c);
printf("\nDigite um numero inteiro para indice: ");
scanf("%d", &i);

for(; s!='\0'; i++){
if (s[i] == c)
break;
}

printf("\n\nIndice da primeira posicao da String onde foi encontrado o caractere %s: %d", c, i);
return 0;
}
