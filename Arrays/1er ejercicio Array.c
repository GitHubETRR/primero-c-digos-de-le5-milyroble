#include <stdio.h>

int sumarVector(int v[], int n) {
    int suma = 0;
    for(int i = 0; i < n; i++) {
        suma += v[i];
    }
    return suma;
}
int main() {
    int tama;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tama);
    
    int numeros[tama];
    for(int i = 0; i < tama; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    int resultado = sumarVector(numeros, tama);
    printf("La suma de los elementos es: %d\n", resultado);
    return 0;
} 
