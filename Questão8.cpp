#include <stdio.h>


int main () {
	
	int sal, salI, imp;
	
	printf ("Coloque o seu salario: ");
	scanf ("%d", &sal);
	
	if (sal <= 2000){
		printf ("O seu salario e isento de imposto!");
	}else if (sal <= 4000 ){
		salI = sal * 0.9;
		imp = sal * 0.1;
		printf ("O seu salario com 10 por cento de imposto e %dR$, pois voce tem que pagar %dR$ em imposto", salI, imp);
	}else{
		salI = sal * 0.8;
		imp = sal * 0.2;
		printf ("O seu salario com 20 por cento de imposto e %dR$, pois voce tem que pagar %dR$ em imposto", salI, imp);
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//if (n1 % 2 != 0 && n1 % 3 != 0 && n1 % 5 != 0 && n1 % 7 != 0 && n1 % 11 != 0) {
	//	printf ("O numero e primo");
	//}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
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
