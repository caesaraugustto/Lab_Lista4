#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void CodCesar(char* string){
int i=0, tam=0;

tam=strlen(string);

    for(i=0; i<tam; i++){
        string[i]=string[i]+3;	
}

    printf("\n\nString Codificada:\n%s", string);
}
 
int main(){
char str[255];

printf("Digite uma String[Max. 255]: \n");
    gets(str);
    CodCesar(str);

return 0;
}
