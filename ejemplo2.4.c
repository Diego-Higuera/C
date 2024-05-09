#include <stdio.h>


int main() {
	float sueldo;
	printf("ingrese sueldo? ");
	scanf("%f" , &sueldo);
	
	//PROCESO
	if(sueldo < 1000){
		sueldo = sueldo * 1.17;
		printf("%f", sueldo);
	}else {
		sueldo = sueldo * 1.12;
		printf("%f", sueldo);
	}
	return 0;
}
