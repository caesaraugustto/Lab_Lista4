#include <stdio.h>
#include <string.h>

int main(){
char nome[35];
float valor_total, valor_desconto, valor_vista;

printf("Digite o nome da mercadoria: ");
gets(nome);
printf("\nDigite o valor da mercadoria: ");
scanf("%f", &valor_total);

valor_vista=valor_total-(0.1*valor_total);	//10% de desconto.
valor_desconto=(0.1*valor_total);

printf("\n\nNome da mercadoria: %s", nome);
printf("\nValor total da mercadoria: R$%.2f", valor_total);
printf("\nValor do desconto: R$%.2f", valor_desconto);
printf("\nValor a ser pago a vista: R$%.2f", valor_vista);

return 0;
}
