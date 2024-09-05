#include <stdio.h> //Adicao dessa biblioteca para que o computador consiga entender as funcoes e variaveis

int main () {
    float tdl, as, ef, notaF;

    printf ("Coloque a nota do Trabalho de laboratorio: "); //Receber a primeira nota
    scanf ("%f", &tdl);

    printf ("Coloque a nota da Avaliacao Semestral: "); //Receber a segunda nota
    scanf ("%f", &as);

    printf ("Coloque a nota do Exame final: "); //Receber a terceira nota
    scanf ("%f", &ef);

    notaF = (tdl * 2 + as * 3 + ef * 5) / (5+3+2); //Calculo da media ponderada

    if (notaF >= 0 && notaF <= 4.99){
        printf ("Nota: E \nNota Final: %.2f", notaF);
    }else if (notaF >= 5 && notaF <= 5.99){
        printf ("Nota: D \nNota Final: %.2f", notaF);
    }else if (notaF >= 6 && notaF <= 6.99){
        printf ("Nota: C \nNota Final: %.2f", notaF);
    }else if (notaF >= 7 && notaF <= 7.99 ){
        printf ("Nota: B \nNota Final: %.2f", notaF);
    }else{
        printf ("Nota: A \nNota Final: %.2f", notaF);
    } //Utilizacao do IF para que o algoritmo escolha a opcao correta

    return 0; //Terminar o algoritmo
} //Fim do int main ()