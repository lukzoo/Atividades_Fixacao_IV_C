#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int opcao;
	
	printf("\nMenu de atendimento:\n");
	printf("\n--------------------------------\n");
	printf("\n 1 - Saldo");
	printf("\n 2 - Extrato");
	printf("\n 3 - Transferencia");
	printf("\n 4 - Pagamento");
	printf("\n 5 - Emprestimo");
	printf("\n 6 - Encerrar\n");
	printf("\n--------------------------------\n");
	printf("\nDigite qual opcao deseja\n");
	scanf("%d", &opcao);
	
switch (opcao){
	case 1:
		printf("\nSeu saldo e: .... \n");
	break;
	case 2:
		printf("\nExtrato: .....\n");
	break;
	case 3:
		printf("\nDigite o numero da conta que deseja transferir: ...\n");
	break;
	case 4:
		printf("\nSeu pagamento: ...\n");
	break;
	case 5:
		printf("\nDigite o valor do emprestimo que deseja: ...\n");
	break;
	case 6:
		printf("\nEncerrando atendimentozn");
	break;
		default: printf("\nOpcao Invalida\n");	
}
	return 0;
}