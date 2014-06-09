#include <stdio.h>
#include <string.h>

int main(){
char frase[255], fraseAux[255];
int i, j=0;

printf("Digite uma frase qualquer:\n");
gets(frase);

for(i=0, j=0; i<=strlen(frase); i++){
if (frase[i] != ' '){
fraseAux[j]=frase[i];
j++;
}
}
printf("A frase resultante (sem espacos) eh:\n%s", fraseAux);

return 0;
}
