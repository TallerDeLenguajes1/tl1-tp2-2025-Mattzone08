#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

struct compu {

    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)

   };

int main(){

    struct compu compus[N];

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < N; i++)
    {
        
        compus[i].velocidad = 1 + ( rand() % ( 3 - 1 + 1 ));

        compus[i].anio = 2015 + ( rand() % ( 2024 - 2015 + 1));

        compus[i].cantidad_nucleos = 1 + ( rand() % (8 - 1 + 1));

        compus[i].tipo_cpu = tipos[rand() % 6];

        printf("Computadora %d:\n", i + 1);
        printf("  Tipo de CPU: %s\n", compus[i].tipo_cpu);
        printf("  Velocidad: %d GHz\n", compus[i].velocidad);
        printf("  Año de fabricación: %d\n", compus[i].anio);
        printf("  Cantidad de núcleos: %d\n", compus[i].cantidad_nucleos);
        printf("\n");

    }
    

;

    return 0;
}