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

void listarPCs(struct compu compus[], int cantidad);

void mostrarMasVieja(struct compu compus[], int cantidad);

void mostrarMasVeloz(struct compu compus[], int cantidad);

int main(){

    srand(time(NULL));

    struct compu compus[N];

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < N; i++)
    {
        
        compus[i].velocidad = 1 + ( rand() % ( 3 - 1 + 1 ));

        compus[i].anio = 2015 + ( rand() % ( 2024 - 2015 + 1));

        compus[i].cantidad_nucleos = 1 + ( rand() % (8 - 1 + 1));

        compus[i].tipo_cpu = tipos[rand() % 6];

    }

    listarPCs(compus, N);

    printf("//-------------------------//\n\n");

    mostrarMasVieja(compus, N);

    printf("//-------------------------//\n\n");

    mostrarMasVeloz(compus,N);

    return 0;
}


void listarPCs(struct compu compus[], int cantidad){

    for (int i = 0; i < cantidad; i++){
    
        printf("Computadora %d:\n", i + 1);
        printf("  Tipo de CPU: %s\n", compus[i].tipo_cpu);
        printf("  Velocidad: %d GHz\n", compus[i].velocidad);
        printf("  Año de fabricación: %d\n", compus[i].anio);
        printf("  Cantidad de núcleos: %d\n", compus[i].cantidad_nucleos);
        printf("\n");
    
    }

    return;
}

void mostrarMasVieja(struct compu compus[], int cantidad){

    int numeroPC = 0, Masvieja = compus[0].anio;

        for (int i = 0; i < cantidad; i++)
        {
            
            if (Masvieja > compus[i].anio)
            {
                Masvieja = compus[i].anio;
                numeroPC = i;
            }
            
        }

        printf("La Computadora mas vieja es la %d:\n", numeroPC + 1);
        printf("  Tipo de CPU: %s\n", compus[numeroPC].tipo_cpu);
        printf("  Velocidad: %d GHz\n", compus[numeroPC].velocidad);
        printf("  Año de fabricación: %d\n", compus[numeroPC].anio);
        printf("  Cantidad de núcleos: %d\n", compus[numeroPC].cantidad_nucleos);
        printf("\n");

    return;
}

void mostrarMasVeloz(struct compu compus[], int cantidad){

    int numeroPC = 0, Masrapida = compus[0].velocidad;

        for (int i = 0; i < cantidad; i++)
        {
            
            if (Masrapida < compus[i].velocidad)
            {
                Masrapida = compus[i].velocidad;
                numeroPC = i;
            }
            
        }

        printf("La Computadora mas rapida es la %d:\n", numeroPC + 1);
        printf("  Tipo de CPU: %s\n", compus[numeroPC].tipo_cpu);
        printf("  Velocidad: %d GHz\n", compus[numeroPC].velocidad);
        printf("  Año de fabricación: %d\n", compus[numeroPC].anio);
        printf("  Cantidad de núcleos: %d\n", compus[numeroPC].cantidad_nucleos);
        printf("\n");

    return;
}