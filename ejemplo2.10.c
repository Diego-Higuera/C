#include <stdio.h>
int main() {
	int n;
	float tf;
	float tc;
	printf("numero de sonidos emitidos por un grillo");
	scanf("%d", &n);
	//proceso
	if(n > 0) {
		tf = n/4 + 40;
		tc = (tf-32)*(5/9.0);
		printf("T. F: %.2f", tf);
		printf("\nT. c: %.2f", tc);
	}
	return 0;
}
