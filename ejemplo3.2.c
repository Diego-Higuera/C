#include <stdio.h>
int main() {
	int i = 0;
	float nomina = 0;
	float importetotal = 0;
	
	do {
		printf("Ingrese nomina del trabajador %d" , i );
		scanf("%f", &nomina);
		importetotal = importetotal + nomina;
		i++;
	}while (i<=10);
	return 0;
}
