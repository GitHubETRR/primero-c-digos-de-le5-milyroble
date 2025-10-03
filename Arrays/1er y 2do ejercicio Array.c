#include <stdio.h>

int sumarVector(int v[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i];
    }
    return suma;
}

int main() {
    int tama;
    int numeros[tama];
    int resultado = sumarVector(numeros, tama);
    int prom = resultado / tama;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tama);
    for (int i = 0; i < tama; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("La suma de los elementos es: %d\n", resultado);
    printf("El promedio de los elementos ingresados es: %d\n", prom);

    return 0;
}
