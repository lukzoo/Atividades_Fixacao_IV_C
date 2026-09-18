#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float valor, percentual, desconto, valor_final;
    
    printf("\nDigite o valor total da compra: ");
    scanf(" %f", &valor);
    
if (valor > 2000) {
    desconto = valor * 0.15;
    percentual = 15;
} else if (valor <= 2000 && valor >= 1000.01) {
    desconto = valor * 0.10;
    percentual = 10;
} else if (valor > 500 && valor <= 1000) {
    desconto = valor * 0.05;
    percentual = 5;
} else {
    desconto = 0;
    percentual = 0;
}
    
    valor_final = valor - desconto;
  
    
    printf("\nValor original: %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor final: %.2f\n", valor_final);
    
    return 0;
}