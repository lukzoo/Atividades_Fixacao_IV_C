#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float temperatura;
	
	printf("\nDigite a temperatura em celcius: ");
	scanf(" %f", &temperatura);
	
	if (temperatura < 0){
		printf("\nMuito frio");
}	else if (temperatura <= 15){
		printf("\nFrio");
}	else if (temperatura <= 25){
		printf("\nAgradavel");
}	else if (temperatura <= 35){
		printf("\nQuente");
}	else {
		printf("\nMuito quente");
}

	(temperatura > 30) ? printf("\nTemeperatura acima de 30 graus") : printf("\nTemeperatura abaixo de 30 graus");


	return 0;
}