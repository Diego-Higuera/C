#include <stdio.h>

int main() {
	int dato;
	//entrada
	printf("ingrese dato? ");
	scanf("%d", &dato);
	//proceso
	if(dato > 0) {
		if(dato % 2 == 0) {
			printf("par");
		}else{
			printf("impar");
		}
	}
	return 0;
}
