#include <stdio.h>


int main () {
	
	int l1, l2, l3;
	
	printf ("Quanto vale o lado 1? ");
	scanf ("%d", &l1);
	
	printf ("Quanto vale o lado 2? ");
	scanf ("%d", &l2);
	
	printf ("Quanto vale o lado 3? ");
	scanf ("%d", &l3);
	
	if (l1 == l2 && l2 == l3) {
		printf ("O triangulo e equilatero!");
	}else if (l1 == l2 && l2 != l3) {
		printf ("O triangulo e isosceles!");
	}else {
		printf ("O triangulo e escaleno!");
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
