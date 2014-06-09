#include <stdio.h>
#include <string.h>

int main(){
char pala[60], InvPala[60];
int i=0, j=0;

printf("Palavra: ");
gets(pala);
for(i=0, j=(strlen(pala))-1; pala[i] != '\0'; i++, j--){
InvPala[i]=pala[j];
}
InvPala[i]='\0';
printf("\nPalavra: %s", pala);
printf("\nInvertida: %s", InvPala);

return 0;
}
