#include "ciagi.h"
#include <stdio.h>

void wyswietl_ciagi( char * tasma, char * Q, char q, char * E, char * R ){
    printf( " \n\t Wyswietlenie ciagu opisow chwilowych \n ");
    int stan = 0;
    int pozycja = 0;
    printf( " cos ");
while( stan != 6){

    if( stan == 0){
        if(tasma[pozycja+1] == R[0]){
            tasma[pozycja] = R[2];
            tasma[pozycja+1] = q;
            stan++;
            pozycja++;
            printf( " 0 -> B ");
        }
        else if( tasma[pozycja+1] == R[1]){
            tasma[pozycja] = R[2];
            tasma[pozycja+1] = q;
            stan+=5;
            pozycja++;
            printf( " 1 -> B ");
        }
    }else if( stan == 1){
        if(tasma[pozycja+1] == R[0]){
            tasma[pozycja] = R[0];
            tasma[pozycja+1] = q;
            pozycja++;
            printf( " 0 -> 0 ");
        }
        else if( tasma[pozycja+1] == R[1]){
            tasma[pozycja] = R[1];
            tasma[pozycja+1] = q;
            stan++;
            pozycja++;
            printf( " 1 -> 1 ");
        }
    }else if( stan == 2){
        if(tasma[pozycja+1] == R[0]){
            tasma[pozycja] = R[1];
            tasma[pozycja-1] = q;
            stan++;
            pozycja--;
            printf( " 0 -> 1 ");
        }
        else if( tasma[pozycja+1] == R[1]){
            tasma[pozycja] = R[1];
            tasma[pozycja+1] = q;
            pozycja++;
            printf( " 1 -> 1 ");

        }else if( tasma[pozycja+1] == R[2] ){
            tasma[pozycja] = R[2];
            tasma[pozycja-1] = q;
            stan+=2;
            pozycja--;
            printf( " B -> B ");
        }

    }else if( stan == 3){
        if(tasma[pozycja+1] == R[0]){
            tasma[pozycja] = R[0];
            tasma[pozycja-1] = q;
            pozycja--;
            printf( " 0 -> 0 ");
        }
        else if( tasma[pozycja+1] == R[1]){
            tasma[pozycja] = R[1];
            tasma[pozycja-1] = q;
            pozycja--;
            printf( " 1 -> 1 ");
        }else if( tasma[pozycja+1] == R[2] ){
            tasma[pozycja] = R[2];
            tasma[pozycja+1] = q;
            stan-=3;
            pozycja++;
            printf( " 2 -> 2 ");
        }

    }else if( stan == 4){
        if(tasma[pozycja+1] == R[0]){
            tasma[pozycja] = R[0];
            tasma[pozycja-1] = q;
            pozycja--;
            printf( " 0 -> 0 ");
        }
        else if( tasma[pozycja+1] == R[1]){
            tasma[pozycja] = R[2];
            tasma[pozycja-1] = q;
            pozycja--;
            printf( " 1 -> B ");
        }else if( tasma[pozycja+1] == R[2] ){
            tasma[pozycja] = R[0];
            tasma[pozycja+1] = q;
            stan+=2;
            pozycja++;
            printf( " B -> 0 ");
        }
    }else if( stan == 5){
        if(tasma[pozycja+1] == R[0]){
            tasma[pozycja] = R[2];
            tasma[pozycja+1] = q;
            pozycja++;
            printf( " 0 -> B ");
        }
        else if( tasma[pozycja+1] == R[1]){
            tasma[pozycja] = R[2];
            tasma[pozycja+1] = q;
            pozycja++;
            printf( " 1 -> B ");
        }else if( tasma[pozycja+1] == R[2] ){
            tasma[pozycja] = R[2];
            tasma[pozycja+1] = q;
            stan++;
            pozycja++;
            printf( " B -> B ");
        }
    }else{

    }

}

}


