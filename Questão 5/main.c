#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int idade;
	float renda_mensal, valor_solicitado;
	
	printf("\nDigite a sua idade: ");
	scanf(" %d", &idade);
	printf("\nDigite o valor que deseja solicitar: ");
	scanf(" %f", &valor_solicitado);
	printf("\nDigite sua renda mensal: ");
	scanf(" %f", &renda_mensal);
	
	if (idade < 18){
		printf("\nCredito nao permitido\n");
}	else if (idade >= 18 && renda_mensal < 2000){
		printf("\nCredito nao recomendado\n");
}	else if (renda_mensal >= 2000 && renda_mensal < 5000){
		printf("\nAnalise adicional\n");
}	else{
		printf("\nCredito pre-aprovado\n");
}

	(idade >= 18 && renda_mensal >=5000) ? printf("\nApto para prosseguir?\nSim") : printf("\nApto para prosseguir?\nNao");
	
	
	
	
	return 0;
}