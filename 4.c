#include <stdio.h>
#include <string.h>

int main()
  {
    char str1[255], str2[255];
    
    printf("Digite uma string: ");
    scanf("%s",&str1);
    printf("\nDigite outra string: ");
    scanf("%s",&str2);
    if (strcmp(str1,str2) != 0)
        printf ("\n\nAs duas strings sao diferentes.");
else
printf ("\n\nAs duas strings sao iguais.");
return(0);
    return(0);
  }
