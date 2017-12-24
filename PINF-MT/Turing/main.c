#include "store.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ciagi.h"



int main( int argc, char ** argv ){
    char q = 'q';
    char Q[7] = {'0','1','2','3','4','5','6'}; // skonczony zbior stanow
    char E[2] = { '0', '1' }; // zbior symboli wejsciowych
    char R[3] = { '0', '1', 'B'}; // zbior symboli tasmowych
    char F = '0'; // zbior stanow koncowych
    int m,n,i;

    opis_MT();

    wczytanie_liczb( &m,&n);

    printf( " Wczytane liczby : Odjemna = %d,  Odjemnik = %d \n", m, n);

    char tasma[m+n+100];
    tasma[0] = q;
    generacja_tasmy( tasma, m, n );

    printf( "%s", tasma );
   wyswietl_ciagi( tasma, Q, q, E, R );

    printf( "%s", tasma );

    return 0;
}
