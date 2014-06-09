#include <stdio.h>

int main(){
char pala[60], c;
int i=0, vogais=0;

printf("Digite uma palavra: ");
gets(pala);
for(i=0; pala[i] != '\0'; i++){
if((pala[i]=='a') || (pala[i]=='e') || (pala[i]=='i') || (pala[i]=='o') || (pala[i]=='u') || (pala[i]=='A') || (pala[i]=='E') || (pala[i]=='I') || (pala[i]=='O') || (pala[i]=='U'))
vogais++;
}
printf("\nEssa palavra tem %d vogais", vogais);
printf("\nDigite um caractere(vogal ou consoante): ");
scanf("%c", &c);
for(i=0; pala[i] != '\0'; i++){
if((pala[i]=='a') || (pala[i]=='e') || (pala[i]=='i') || (pala[i]=='o') || (pala[i]=='u') || (pala[i]=='A') || (pala[i]=='E') || (pala[i]=='I') || (pala[i]=='O') || (pala[i]=='U'))
pala[i]=c;
}
printf("Mesma palavra com '%c' no lugar das vogais: %s", c, pala);

getchar();
return 0;
}
