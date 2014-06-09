#include <stdio.h>
#include <string.h>
 
int main(){
    char str[255];
    int i=0;
     
    printf("Digite uma String (Cadeia de Caracteres) [Max. 255]:\n");
    gets(str);
         
    char strM[strlen(str)];
     
    for(i=0; i<=strlen(str); i++){
        if((str[i] != ' ') && (str[i] != '-') && (str[i] != '_') && (str[i] != '.') && (str[i] != ',') && (str[i] != '/') && (str[i] != '\0') && ((str[i])+32 <= 122)){
            strM[i]=str[i]+32;
        }else{
            strM[i]=str[i];
        }
    }
    printf("\n\nString Digitada:\n%s\n", str);
    printf("\nString em Minuscula: \n%s", strM);
     
    return 0;
}
