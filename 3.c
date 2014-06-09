
#include <stdio.h>
#include <string.h>

int main()
  {
    char string[255];
    
    printf("Digite a string: ");
    scanf("%s",&string);
    printf("\n");
    printf("A string digitada tem tamanho %d.\n",strlen(string));
    return(0);
  }
