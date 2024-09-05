#include <stdio.h>

int main (){
    float n1, n2, n3, nE, mA, nota_precisa;

    printf ("Coloque a primeira nota: ");
    scanf ("%f", &n1);

    printf ("Coloque a segunda nota: ");
    scanf ("%f", &n2);

    printf ("Coloque a terceira nota: ");
    scanf ("%f", &n3);

    mA = (n1 + n2 + n3) / 3;

    printf ("A media aritmetica das suas tres notas e %.2f!\n", mA);

    if (mA <= 2.99){
        printf ("Reprovado!");
    }else if (mA >= 7){
        printf ("Aprovado!");
    }else {
        nE = 7 - mA; 
        nota_precisa = 6 + nE;
        printf ("Voce precisat tirar %.2f no exame final para passar!", nota_precisa);
    }

    return 0;
}