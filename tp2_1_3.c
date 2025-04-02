#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main(){

    srand(time(NULL));

    int i,j;
    double mt[N][M];
    double *p = (double *)mt;
    
    
    for(i = 0;i<N; i++){   
        
        for(j = 0;j<M; j++){
            
            *(p + i * M + j) = 1 + rand() % 100;
            
            printf(" [%d][%d] = %.2lf ",i,j, *(p + i * M + j));

        }

        printf("\n");
    
    }


    return 0;

}