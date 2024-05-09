#include <stdio.h>
int main() {
	int n, num;
	int i = 1, ceros = 0;
	print f("cuantos numeros enteros desea ingresar");
	scanf("&d", &n);
	do {
		printf("ingrese numero %d" , i); i++;
		scanf("%d", &num);
		if(num == 0) {
			ceros = ceros + 1;
		}
	}while(i <= n);
	printf("cantidad de ceros: %d" , ceros);
	return 0;
}
