#include <stdio.h>

int main (){
    float n;

    printf ("Coloque um numero: ");
    scanf ("%f", &n);

    if (n < 0){
        printf ("O seu numero e negativo!");
    }else if (n == 0){
        printf ("O seu numero e zero");
    }else {
        printf ("O seu numero e positivo!");
    }

    return 0;
}