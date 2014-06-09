#include <stdio.h>

int main(){
char nome[60], sexo, nacio[60];
int idade;

printf("Nome: ");
gets(nome);
printf("Sexo(M ou F): ");
scanf("%c", &sexo);
while((sexo!='M') && (sexo!='m') && (sexo!='F') && (sexo!='f')){
printf("\nSexo(M ou F): ");
scanf("%c", &sexo);
}
printf("Idade: ");
scanf("%d", &idade);
while((idade<0) && (idade> 150)){
printf("\nIdade[0 a 150]: ");
scanf("%d", &idade);
}
printf("Nacionalidade: ");
gets(nacio);
while((nacio !='b') && (nacio != 'e')){
printf("\nNacionalidade: ");
gets(nacio);
}
if(idade>=18)
printf("\n%s %s do sexo %c e maior de idade, esta habilitado a dirigir!", nome, nacio, sexo);
else
printf("\n%s %s do sexo %c e menor de idade, NAO esta habilitado a dirigir!", nome, nacio, sexo);

getchar();
return 0;
}
