#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int forma_pagamento;
	float valor, percentual, desconto, valor_final;
	printf("\nDigite o valor da compra: ");
	scanf(" %f", &valor);
	printf("\nFormas de pagamento\n");
	printf("\n--------------------------------\n");
	printf("\n 1 - PIX");
	printf("\n 2 - Debito");
	printf("\n 3 - Credito");
	printf("\n 4 - Boleto\n");
	printf("\n--------------------------------\n");
	printf("\nDigite qual a forma de pagamento: ");
	scanf("%d", &forma_pagamento);
	
switch (forma_pagamento){
	case 1:
		desconto = valor * 0.20;
		percentual = 20;
	break;
	case 2:
		desconto = valor * 0.15;
		percentual = 15;
	break;
	case 3:
		desconto = valor * 0.05;
		percentual = 5;
	break;
	case 4:
		desconto = valor * 0.10;
		percentual = 10;
	break;
	default:
		printf("\nOpcao invalida\n");
}

valor_final = valor - desconto;

	printf("\nForma de pagamento: ");
	switch (forma_pagamento) {
      case 1:
    	  printf("PIX\n");
      break;
      case 2:
 	     printf("Debito\n");
      break;
        case 3:
   	     printf("Credito\n");
        break;
        case 4:
   	     printf("Boleto\n");
        break;
    }
	printf("\nValor da compra: %.2f", valor);
	printf("\nPercentual de desconto: %.0f%%", percentual);
	printf("\nValor do desconto: %.2f", desconto);
	printf("\nValor total da compra: %.2f", valor_final);
	
	return 0;
}