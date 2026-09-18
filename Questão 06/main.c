#include <stdio.h>
#include <stdlib.h>
	
	
int main(int argc, char *argv[]) {
	int veiculo;
	
	printf("\nSistema de Transporte\n");
	printf("\n--------------------------------\n");
	printf("\n 1 - Motocicleta");
	printf("\n 2 - Automovel");
	printf("\n 3 - Van");
	printf("\n 4 - Onibus");
	printf("\n 5 - Caminhao");
	printf("\n--------------------------------\n");
	printf("\nDigite qual veiculo vai ser utilizado na viagem: ");
	scanf("%d", &veiculo);
	
switch (veiculo){
	case 1:
		printf("\nO veiculo selecionado foi: Motocicleta\n");
	break;
	case 2:
		printf("\nO veiculo selecionado foi: Automovel\n");
	break;
	case 3:
		printf("\nO veiculo selecionado foi: Van\n");
	break;
	case 4:
		printf("\nO veiculo selecionado foi: Onibus\n");
	break;
	case 5:
		printf("\nO veiculo selecionado foi: Caminhao\n");
	break;
	default: 
		printf("\nVeiculo invalido\n");
}

(veiculo == 4 || veiculo == 5) ? printf("Classificacao: Veiculo Pesado\n") : printf("Classificacao: Veiculo Leve\n");

	return 0;
}