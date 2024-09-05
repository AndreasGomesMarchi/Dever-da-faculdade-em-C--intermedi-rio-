#include <stdio.h>


int main () {
	
	int ano;
	
	printf ("Coloque um ano: ");
	scanf ("%d", &ano);
	
	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
		printf ("O ano %d e bixesto!", ano);
	}else {
		printf ("O ano %d nao e bixesto!", ano);
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
