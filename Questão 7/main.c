#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int idade;
	
	printf("\nDigite sua idade: ");
	scanf(" %d", &idade);
	
	if (idade < 13){
		printf("\nCrianca\n");
}	else if (idade < 18){
		printf("\nAdolescente\n");
}	else if (idade < 60){
		printf("\nAdulto\n");
}	else{
		printf("\nIdoso\n");
}

	(idade >= 18) ? printf("\nMaior de idade\n") : printf("\nMenor de idade\n");
	
	return 0;
}