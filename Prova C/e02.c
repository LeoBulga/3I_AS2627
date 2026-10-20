/*
    Date: 20/10/26
    Author: Leonardo Bulgarelli
    Description: programma che somma due valori richeisti in input
*/

#include <stdio.h>

int main()
{
    //dichiarazione variabili
    int a;
    int b;
    int sum;

    //junk è usata per pulire il buffer nelle fasi di input
    char junk;

    // inzializzazione delle variabli
    a = 0;
    b = 0;
    sum = 0;

    //fase di input dei valori A e B
    printf("Inserisci il valore a: ");
    scanf("%d", &a);
    junk = getchar();

    printf("Inserisci il valore b: ");
    scanf("%d", &b);
    junk = getchar();


    //calclolo somma
    sum = a + b;

    //comunico il valore della somma
    printf("La somma vale: %d \n", sum);

    return 0;
}