#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanio 20
#define min 20
#define max 90

void CargaVector(int v[]);
void InvertirVector(int v[], int invertido[]);
void MostrarVector(int v[]);

int main() {
    int vector[tamanio];
    int invertido[tamanio];

    srand(time(NULL)); // inicializa el generador de números aleatorios

    CargaVector(vector);
    InvertirVector(vector, invertido);

    printf("Vector original:\n");
    MostrarVector(vector);

    printf("Vector invertido:\n");
    MostrarVector(invertido);

    return 0;
}

void CargaVector(int v[]) {
    int i;
    for(i = 0; i < tamanio; i++) {
        v[i] = rand() % (max - min + 1) + min; // genera valores aleatorios entre 20 y 90
    }
}

void InvertirVector(int v[], int invertido[]) {
    int i, j;
    j = 0;
    for(i = tamanio - 1; i >= 0; i--) {
        invertido[j] = v[i];
        j++;
    }
}

void MostrarVector(int v[]) {
    int i;
    for(i = 0; i < tamanio; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
