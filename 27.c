#include <stdio.h>
#include <string.h>

int main(){
char str[255];
int i;

printf("Digite uma string: ");
gets(str);
printf("As 4 primeiras letras da String sao: ");
for(i=0; i<4; i++){
printf("%c", str[i]);
}

return 0;
}
