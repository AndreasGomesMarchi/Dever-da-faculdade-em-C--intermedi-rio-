#include <stdio.h>


int main () {
	
	float n1, n2, n3;
	
	printf ("Coloque o terceiro numero: ");
	scanf ("%f", &n1);
	
	printf ("Coloque o segundo numero: ");
	scanf ("%f", &n2);
	
	printf ("Coloque o terceiro numero: ");
	scanf ("%f", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf ("O numero %.1f e maior que %.1f e %.1f", n1, n2, n3);
	}else if (n2 > n1 && n2 > n3) {
		printf ("O numero %.1f e maior que %.1f e %.1f", n2, n1, n3);
	}else {
		printf ("O numero %.1f e maior que %.1f e %.1f", n3, n1, n2);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*float N;
	
	printf ("Coloque um numero: ");
	scanf ("%f", &N);
	
	if (N < 0){
		printf ("O seu numero e negativo!");
	}else if (N == 0) {
		printf ("O seu numero e zero");
	}else {
		printf ("O seu numero e positivo");
	} */
	
	return 0;
}
