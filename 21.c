#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char pala[2][35], aux[30];
int i, j;


for(i=0; i<2; i++){
printf("Digite a primeira palavra: ", i + 1, 167);
gets(pala[i]);
}

for(j=0; j<2; j++)
for(i=0; i<2-1; i++){
if(strcmp(pala[i], pala[i + 1]) > 0){
strcpy(aux, pala[i]);
strcpy(pala[i], pala[i + 1]);
strcpy(pala[i + 1], aux);
}
}

printf("\n\nPalavras na Ordem Alfabetica: \n");
for(i=0; i<2; i++){
printf("%s\n",pala[i]);
}

return 0;
}
