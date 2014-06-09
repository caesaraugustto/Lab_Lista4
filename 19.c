#include <stdio.h>
#include <string.h>

int main(){
char s[255];
int i, j;

printf("Digite uma string: ");
gets(s);
printf("\nDigite a posicao i da string: ");
scanf("%d", &i);
printf("\nDigite a posicao j da string: ");
scanf("%d", &j);

printf("\n\nSegmento da String de %d a %d: ", i, j);
for(i; i<=j; i++)
printf("%c", s[i]);

return 0;
}
