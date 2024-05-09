#include <stdio.h>
int main() {
	float nota;
	//ENTRADA
	printf("ingrese nota? ");
	scanf("%f", &nota);
	//proceso salida
	if (nota >= 0 && nota <= 20) {
		if(nota > 10.5) {
			printf("aprobado %.2f", nota);
		}else{
			printf("reprobado %.2f", nota);
		}
	}else{
		printf("nota no valida");
	}
	return 0;
}
