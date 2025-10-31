#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanio 50

int main() {
    int v[tamanio];
    int i, mayor, repite = 0;

    srand(time(NULL));

    for(i = 0; i < tamanio; i++) {
        v[i] = rand() % (20 - 10 + 1) + 10;
    }

    printf("\nVALORES DEL VECTOR:\n\n");
    for(i = 0; i < tamanio; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    mayor = v[0];
    for(i = 1; i < tamanio; i++) {
        if(v[i] > mayor) {
            mayor = v[i];
        }
    }
    for(i = 0; i < tamanio; i++) {
        if(v[i] == mayor) {
            repite++;
        }
    }
    printf("\nEl mayor es %d. Se repite %d veces.\n", mayor, repite);
    return 0;
}
