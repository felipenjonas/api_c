#include <stdio.h>
#include "bdag_api/par_impar.h"

int main(){
	int numero;
	char resultado;

	printf("Digite um Número: ");
	scanf("%d", &numero);

	resultado = par_ou_impar(numero);
	
	printf("%c\n",resultado);

	return 0;


}
