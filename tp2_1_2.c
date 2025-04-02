#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){

    srand(time(NULL));

    int i;
    double vt[N];
    double *p = vt;
    
    
    for(i = 0; i < N; i++){

        *(p + i) = 1+rand()%100;
        printf("\n[%i] = %.2f",i, *(p + i));

    }   


    return 0;
}