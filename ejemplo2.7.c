#include <stdio.h>
#include <math.h>
int main() {
	int num, v;
	float val;
	//entrada
	printf("ingrese valor de num?");
	scanf("%d", &num);
	printf("ingrese valor v? ");
	scanf("%d", &v);
	//proceso
	switch(num){
		case 1: val = 100*v; break;
		case 2: val = pow(100,v); break;
		case 3: val = 100/v; break;
		default: val = 0;
	}
	printf("val: %f", val);
	//proceso 2
	if(num ==1) {
	   val = 100*v;
	}else if (num == 2) {
		val = pow(100, v);
	}else if (num == 3) {
		val = 100/v;
	}else {
		val = 0;
	}
	printf("\nval: %f", val);
	return 0;
}
