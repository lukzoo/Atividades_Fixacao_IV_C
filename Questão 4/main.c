#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int cargo;
	
	printf("\nCLASSIFICACAO DE USUARIOS\n");
	printf("\n--------------------------------\n");
	printf("\n 1 - Administrador");
	printf("\n 2 - Gerente");
	printf("\n 3 - Analista");
	printf("\n 4 - Desenvolvedor");
	printf("\n 5 - Usuario");
	printf("\n--------------------------------\n");
	printf("\nDigite o codigo de seu cargo:\n");
	scanf("%d", &cargo);
	
switch (cargo){
	case 1:
		printf("\nPerfil: Administrador\n");
	break;
	case 2:
		printf("\nPerfil: Gerente\n");
	break;
	case 3:
		printf("\nPerfil: Analista\n");
	break;
	case 4:
		printf("\nPerfil: Desenvolvedor\n");
	break;
	case 5:
		printf("\nPerfil: Usuario\n");
	break;
	default: 
		printf("\nPerfil invalido\n");
}
	
	return 0;
}