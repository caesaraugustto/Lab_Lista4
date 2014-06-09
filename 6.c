#include <stdio.h>
#include <string.h>
 
int main(){
    char str1[255], str2[255];
    int n, tamDis=0, i=0;
     
    printf("Digite uma string[Maximo de 255 caracteres]:\n");
    gets(str1);
    printf("Digite outra string[Maximo de 255 caracteres]:\n");
    gets(str2);
    printf("Digite o numero de caracteres que deseja concatenar na primeira String:\n");
    scanf("%d", &n);
    
while(str1[i] != '\0'){
tamDis++;
i++;
}
if(n<=tamDis){
strncat(str1, str2, n);
for(i=0; i<=255; i++){
if (str1[i]=='\0'){
str1[i]=NULL;
break;
}
}
printf("\nString Concatenada: %s", str1);
     }else{
printf("\nDesculpe, a primeira string nao tem espaço para concatenar %d caracteres da segunda String.", n);
}
 
    return 0;
}
