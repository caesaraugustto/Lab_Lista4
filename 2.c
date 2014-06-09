#include <stdio.h>
#include <string.h>

int InvStr(char str[255]){
int i, j, k=0;
char strPalin[255];
i=strlen(str);

for(i=0;str[i];i++);
i = i-1;
for(j=0, i; i>=0; j++){
strPalin[j]=str[i];
if(strPalin[j]==str[j])	
k++;
i--;
}
strPalin[j]='\0';


if(k==strlen(str)){
printf("\n\nEh palindromo!\nString Digitada:\n%s\nString Invertida:\n%s", str, strPalin);
return 1;
}if(k != strlen(str)){
printf("\n\nNao eh palindromo!\nString Digitada:\n%s\nString Invertida:\n%s", str, strPalin);
return 0;
}

}

int main(){
char string[255];

printf("Digite uma Palavra[Max. 255]:\n");
gets(string);
InvStr(string);

}


