#include "store.h"

void opis_MT(void){

    printf( " \t Maszyna Turinga M w postaci :  M = ( {q0,q1,q2,q3,q4,q5,q6}, {0,1}, {0,1,B}, δ, q0, B, 0 ) \n" );
    printf( " \t Maszyna oblicza roznice wlasciwa pomiedzy dwiema liczbami calkowitymi \n");
}

void wczytanie_liczb( int * m,  int * n ){
        int result;

        do{

        printf(" Prosze podac liczbe odjemna : " );

        char st[1024];
        fgets( st, sizeof(st), stdin);
        result = sscanf(st, "%d", m);
        if( result < 1)
            printf( " Niewlasciwy format odjemnej - podaj liczbe calkowita \n");

        } while ( result < 1 );


        do{
        printf(" Prosze podac odjemnik : " );

        char st[1024];
        fgets( st, sizeof(st), stdin);
        result = sscanf(st, "%d", n);
        if( result < 1)
            printf( " Niewlasciwy format odjemnika - podaj liczbe calkowita \n");

        } while ( result < 1 );


}

void generacja_tasmy( char * tasma, int m, int n ){
    printf( " \n  Wygenerowana tasma wejsciowa zakodowana unarnie \n " );
    int i;
    for( i = 1; i < m + 1 ; i++ ){
        tasma[i] = '0';
    }

    tasma[m+1] = '1';

    for( i = m + 2; i < m + n + 2; i++ ){
        tasma[i] = '0';

    }
    printf( " ...BB%sBB...\n", tasma+1);
}
