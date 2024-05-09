#include <stdio.h>

int main() {
	float nota;
	//ENTRADA
	printf("ingrese nota: ");
	scanf("%f", &nota);
	//PROCESAR
	if(nota > 10.5) {
		printf("Aprobado %.2f", nota);
	}else{
		printf("reprobado %.2f", nota);
	}
	return 0;
}
