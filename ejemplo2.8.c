#include <stdio.h>
int main() {
	int caso;
	int sueldo;
	float resultado;
	//entrada
	printf("ingrese valor de case?");
	scanf("%d", &caso);
	printf("ingrese valor sueldo? ");
	scanf("%d", &sueldo);
	
		switch(caso){
		case 1: resultado =sueldo*1.15; break;
		case 2: resultado =sueldo*1.10; break;
		case 3: resultado =sueldo*1.08; break;
		case 4: resultado =sueldo*1.05; break;
		default: resultado = 0;
	}

	printf("resultado: %f", resultado);
	return 0;
}
