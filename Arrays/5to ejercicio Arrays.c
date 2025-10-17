#include <stdio.h>

int main() {
    int n, i;
    int prod = 0;

    printf("Tamaño de los vectores: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("El tamaño debe ser mayor a 0.\n");
        return 0;
    }
    int vectorA[n], vectorB[n]; 
    
    printf("Elementos de A:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &vectorA[i]);
    }
    printf("Elementos de B:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &vectorB[i]);
    }
    for(i = 0; i < n; i++) {
        prod += vectorA[i] * vectorB[i];
    }
    printf("Resultado del producto escalar = %d\n", prod);
    return 0;
}
