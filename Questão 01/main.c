#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float nota1, nota2, nota3, nota4, media;
	
printf("\nDigite a primeira nota: ");
	scanf(" %f", &nota1);
printf("\nDigite a segunda nota: ");
	scanf(" %f", &nota2);
printf("\nDigite a terceira nota: ");
	scanf(" %f", &nota3);
printf("\nDigite a quarta nota: ");
	scanf(" %f", &nota4);	
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
if  (media >= 9) {
	printf("\nExcelente!\n");
} else if (media >= 7 && media < 9){
	printf("\nBom\n");
} else if (media >= 5 && media < 7){
	printf("\nRecuperacao\n");
} else {
	printf("\nReprovado\n");
}

(media >= 7) ? printf("Aprovado\n") : printf("Nao aprovado\n");
		
	return 0;
}