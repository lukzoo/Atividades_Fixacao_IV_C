#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int atendimento, prioridade;
		
	printf("\nSetores de atendimento\n");
	printf("\n--------------------------------\n");
	printf("\n 1 - Suporte tecnico");
	printf("\n 2 - Financeiro");
	printf("\n 3 - Recursos Humanos");
	printf("\n 4 - Comercial");
	printf("\n 5 - Desenvolvimento");
	printf("\n--------------------------------\n");
	printf("\nDigite o numero do setor escolhido: ");
	scanf(" %d", &atendimento);
	
	switch (atendimento){
	case 1:
		printf("\nSetor escolhido: Suporte tecnico\n");
	break;
	case 2:
		printf("\nSetor escolhido: Financeiro\n");
	break;
	case 3:
		printf("\nSetor escolhido: Recursos Humanos\n");
	break;
	case 4:
		printf("\nSetor escolhido: Comercial\n");
	break;
	case 5:
		printf("\nSetor escolhido: Desenvolvimento\n");
	break;
}
	printf("\nPrioridade do atendimento\n");
	printf("\n1 - Baixa");
	printf("\n2 - Media");
	printf("\n3 - Alta\n");
	printf("\nDigite a prioridade do seu atendimento: ");
	scanf(" %d", &prioridade);
	
	printf("\nAtendimento prioritario: ");
	(prioridade == 3) ? printf("Sim") : printf("Nao");
	
	
	return 0;
}